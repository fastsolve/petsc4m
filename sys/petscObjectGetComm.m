function [comm, errCode, toplevel] = petscObjectGetComm(obj)
%Gets the MPI communicator for any PetscObject, regardless of the type. 
%
%  [comm, errCode] = petscObjectGetComm(obj)
%
%  obtains the MPI_Comm associated with the PetscObject.
%
%  SEE ALSO: petscMatSetType, petscMatSetFromOptions
%
% PETSc C interface:
%   PetscErrorCode  PetscObjectGetComm(PetscObject obj,MPI_Comm *comm)
% http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscObjectGetComm.html

%#codegen -args {PetscObject}

errCode = int32(-1);

if ~isempty(coder.target)
    t_obj = PetscObject(obj);
    t_comm = coder.opaque('MPI_Comm');
        
    errCode = coder.ceval('PetscObjectGetComm', t_obj, coder.wref(t_comm));
    
    toplevel = nargout>2;
    comm = MPI_Comm(t_comm, toplevel);
    
    if errCode && (toplevel || m2c_debug)
        m2c_error('petsc:RuntimeError', 'PetscObjectGetComm returned error code %d\n', errCode)
    end
end
end
