function [x, flag, relres, iter, reshis, times] = gmresSuperLU(varargin)
% gmresSuperLU GMRES with SuperLU as right preconditioner
%
%    x = gmresSuperLU(A, b) solves a sparse linear system using SuperLU's
%    ILU as the right preconditioner. Matrix A can be in MATLAB's
%    built-in sparse format or in CRS format created using crs_matrix.
%
%    x = gmresSuperLU(rowptr, colind, vals, b) takes a matrix in the CRS
%    format instead of MATLAB's built-in sparse format.
%
%    x = gmresSuperLU(A, b, restart)
%    x = gmresSuperLU(rowptr, colind, vals, b, restart)
%    specifies the number of iterations before GMRES restarts. If restart
%    is [], then use the default, 30.
%
%    x = gmresSuperLU(A, b, restart, rtol)
%    x = gmresSuperLU(rowptr, colind, vals, b, restart, rtol)
%    specifies the relative tolerance and the maximum number of iterations.
%    If rtol is [], it will use the default value 1.e-6.
%
%    x = gmresSuperLU(A, b, restart, rtol, maxit)
%    x = gmresSuperLU(rowptr, colind, vals, b, restart, rtol, maxit)
%    specifies the maximum number of iterations. If maxit is [], it
%    will use the default value 500. (Note that unlike MATLAB's built-in
%    gmres, maxit here refers to the total number of iterations.)
%
%    x = gmresSuperLU(A, b, restart, rtol, maxiter, x0)
%    x = gmresSuperLU(rowptr, colind, vals, b, restart, rtol, maxiter, x0)
%    takes an initial guess for x in x0. Use [] to preserve the default
%    initial solution (all zeros).
%
%    x = gmresSuperLU(A, b, ..., 'name', value, ...)
%    x = gmresSuperLU(rowptr, colind, vals, b, ..., 'name', value, ...)
%    allows omitting none or some of the positional arguments restart, rtol,
%    maxiter and x0 and specifying these and other parameters in the form
%    'param1_name', param1_value, 'param2_name', param2_value, and so on.
%    The parameter names are not case sensitive. Available parameters and
%    their default values (enclosed by '[' and ']') are as follows:
%
%   'restart' [30]:   Number of iterations before restart
%
%   'rtol' [1.e-6]:   Relative tolerance for converegnce
%
%   'maxiter' [500]:  Maximum number of iterations
%
%   'x0' [all-zeros]: Initial guess vector
%
%   'verb' [1]:  Verbosity level.
%          0 - silent
%          1 - outer iteration info
%          2 - inner iteration info
%
%   'equil' [0]: whether to equilibrate matrix by using MC64.
%
%   'droptol' [0.001]: Threshold for dropping small entries during the
%    computation of the ILU factorization. Use droptol=0 for direct solver.
%
%   'fillfactor' [0]: Fill factor (0 for default).
%
%   'issymmetric' [0]: Treat the matrix as symmetric.
%
%   'replacetinypivot' [1]: Replace tiny pivots.
%
%   'modified' [1]: Use modified ILU.
%
%   'norm' [0]: Change the norm to be used by SuperLU.
%
%   'nthreads' [1]: Maximal number of threads to use.
%
%    [x, flag] = gmresSuperLU(...) returns a convergence flag.
%    flag: 0 - converged to the desired tolerance TOL within MAXIT iterations.
%          1 - iterated maxit times but did not converge.
%          3  -stagnated (two consecutive iterates were the same).
%          -9 - Got NaN
%     see https://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPConvergedReason.html
%
%    [x, flag, relres] = gmresSuperLU(...) returns the relative residual.
%
%    [x, flag, relres, iter] = gmresSuperLU(...) returns the relative
%    residual and iteraton counts.
%
%    [x, flag, relres, iter, resids] = gmresSuperLU(...) returns the
%    relative residual in 2-norm at each iteration.
%
%    [x, flag, relres, iter, reshis, times] = gmresSuperLU(...) returns
%    the setup time (times(1)) and solve time (times(2)) in seconds.

if nargin == 0
    help gmresSuperLU
    return;
end

if issparse(varargin{1})
    [Arows, Acols, Avals] = crs_matrix(varargin{1});
    next_index = 2;
elseif isstruct(varargin{1})
    Arows = varargin{1}.row_ptr;
    Acols = varargin{1}.col_ind;
    Avals = varargin{1}.val;
    next_index = 2;
else
    Arows = varargin{1};
    Acols = varargin{2};
    Avals = varargin{3};
    next_index = 4;
end

if nargin < next_index
    error('The right hand-side must be specified');
else
    b = varargin{next_index};
end

% Initialize default arguments
verbose = int32(1);
rtol = 1.e-6;
maxiter = int32(500);
restart = int32(30);
x0 = cast([], class(b));
nthreads = int32(1);
droptol = 1.e-4;
replacetinypivot = int32(0);
modified = int32(0);

params_start = nargin+1;
for i = next_index+1:nargin
    if ischar(varargin{i})
        params_start = i;
        break
    end
end

% Process positional arguments
if params_start > next_index + 1 && ~ischar(varargin{next_index+1})
    restart = int32(varargin{next_index+1});

    if restart > 100
        m2c_warning('You set restart to %d. It is recommended to maker it no greater than 100.\n', restart);
    end

    if params_start > next_index + 2 && ~ischar(varargin{next_index+2})
        rtol = PetscScalar(varargin{next_index+2});

        if params_start > next_index + 3 && ~ischar(varargin{next_index+3})
            maxiter = int32(varargin{next_index+3});

            if nargin >= next_index + 4 && ~ischar(varargin{next_index + 4})
                x0 = varargin{next_index + 4};
            end
        end
    end
end

% Process argument-value pairs to update arguments
opts = '-pc_factor_mat_solver_type superlu';
for i = params_start:2:length(varargin)-1
    switch lower(varargin{i})
        case {'maxit', 'maxiter'}
            maxiter = int32(varargin{i+1});
        case {'restart', 'nrestart'}
            restart = int32(varargin{i+1});
        case 'x0'
            x0 = varargin{i+1};
        case {'rtol', 'reltol'}
            rtol = varargin{i+1};
        case {'verb', 'verbose'}
            verbose = int32(varargin{i+1});
        case {'equil', 'matching'}
            opts = [opts ' -mat_superlu_equil ' int2str(varargin{i+1})]; %#ok<*AGROW>
        case {'replacetinypivot', 'replacepivot'}
            replacetinypivot = int32(varargin{i+1});
        case {'symmetric', 'issymmetric'}
            opts = [opts ' -mat_superlu_symmetricmode ' int2str(varargin{i+1})];
        case {'modified', 'milu'}
            modified = int32(varargin{i+1});
        case {'norm', 'ilu_norm'}
            opts = [opts ' -mat_superlu_ilu_norm ' num2str(varargin{i+1})];
        case 'droptol'
            droptol = varargin{i+1};
        case 'fillfactor'
            opts = [opts ' -mat_superlu_ilu_fillfactor ' num2str(varargin{i+1})];
        otherwise
            error('Unknown tuning parameter "%s"', varargin{i});
    end
end

opts = [opts ' -ksp_gmres_restart ' int2str(restart)];
opts = [opts ' -mat_superlu_ilu_droptol ' num2str(droptol)];
opts = [opts ' -mat_superlu_replacetinypivot '  int2str(replacetinypivot)];
opts = [opts ' -mat_superlu_ilu_milu '  int2str(modified)];
opts = [opts ' -mat_superlu_printstat ' int2str(verbose>1)];

if verbose>1; opts = [opts ' -ksp_view ']; end

if droptol>0
    pctype = PETSC_PCILU;
else
    pctype = PETSC_PCLU;
    if nthreads>1
        opts = [opts ' -pc_factor_mat_solver_type ' num2str(droptol)];
    end
end

[x, flag, relres, iter, reshis, times] = petscSolveCRS(Arows, Acols, PetscScalar(Avals), ...
    PetscScalar(b), PETSC_KSPGMRES, PetscReal(rtol), maxiter, pctype, 'right', PetscScalar(x0), opts);

if verbose
    fprintf(1, 'Finished solve with residual %g in %d iterations and %.2f seconds.\n', ...
        relres, iter, sum(times));
    fprintf(1, 'SuperLU setup took %g seconds and GMRES took %g seconds.\n', ...
        times(1), times(2));

    fprintf(1, 'Convergence history:\n');
    for i=1:ceil(length(reshis)/10):length(reshis)
        fprintf(1, '\titeration %d: %g\n', i-1, reshis(i));
    end
end
end

function test %#ok<DEFNU>
%!test
%!shared A, b
%! % system('gd-get -q -O -p 0ByTwsK5_Tl_PemN0QVlYem11Y00 fem2d"*".mat');
%! s = load('fem2d_cd.mat');
%! A = s.A;
%! s = load('fem2d_vec_cd.mat');
%! b = s.b;
%! rtol = 10*eps(class(PetscReal(0))).^(1/2);

%! [x,flag,relres,iter,reshis,times] = gmresSuperLU(A, b, [], rtol);
%! assert(norm(b - A*double(x)) < rtol * norm(b))

end
