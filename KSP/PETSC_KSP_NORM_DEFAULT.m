function val = PETSC_KSP_NORM_DEFAULT %#codegen
% Obtain PETSC constant KSP_NORM_DEFAULT

coder.inline('always');

val = petscGetEnum('KSP_NORM_DEFAULT');
end
