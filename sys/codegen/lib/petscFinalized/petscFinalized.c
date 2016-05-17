#include "petscFinalized.h"
#include "petscsys.h"
#include "petscsys.h"
#include "petscksp.h"
#include "m2c.h"

static void m2c_error(int varargin_3);
static void m2c_error(int varargin_3)
{
  M2C_error("petsc:RuntimeError", "PetscFinalized returned error code %d\n",
            varargin_3);
}

void petscFinalized(int *finalized, int *errCode, boolean_T *toplevel)
{
  PetscBool b;
  *errCode = PetscFinalized(&b);
  *toplevel = true;
  if (*errCode != 0) {
    m2c_error(*errCode);
  }

  *finalized = (b);
}

void petscFinalized_initialize(void)
{
}

void petscFinalized_terminate(void)
{
}