function val = PETSC_PCCOMPOSITE %#codegen
% Obtain PETSC constant PCCOMPOSITE

coder.inline('always');

val = petscGetString('PCCOMPOSITE');
end
