#include "petscVecCreate.h"
#include "petscVecCreate_types.h"
#include "m2c.h"
#include "mpi.h"
#include "petsc4m.h"

static void b_m2c_error(int varargin_3);

static void m2c_error(const emxArray_char_T *varargin_3);

static void b_m2c_error(int varargin_3)
{
  const char *fmt;
  const char *msgid;
  msgid = "petsc:RuntimeError";
  fmt = "VecCreate returned error code %d\n";
  M2C_error(msgid, fmt, varargin_3);
}

static void m2c_error(const emxArray_char_T *varargin_3)
{
  const char *fmt;
  const char *msgid;
  emxArray_char_T *b_varargin_3;
  int i;
  int loop_ub;
  emxInit_char_T(&b_varargin_3, 2);
  msgid = "m2c_opaque_obj:WrongInput";
  fmt = "Incorrect data type %s. Expected MPI_Comm.\n";
  i = b_varargin_3->size[0] * b_varargin_3->size[1];
  b_varargin_3->size[0] = 1;
  b_varargin_3->size[1] = varargin_3->size[1];
  emxEnsureCapacity_char_T(b_varargin_3, i);
  loop_ub = varargin_3->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_varargin_3->data[i] = varargin_3->data[i];
  }
  M2C_error(msgid, fmt, &b_varargin_3->data[0]);
  emxFree_char_T(&b_varargin_3);
}

void petscVecCreate(const M2C_OpaqueType *comm, M2C_OpaqueType *vec,
                    int *errCode, boolean_T *toplevel)
{
  static const char cv[8] = {'M', 'P', 'I', '_', 'C', 'o', 'm', 'm'};
  MPI_Comm t_comm;
  Vec arg;
  char *ptr;
  emxArray_char_T *b_comm;
  int i;
  int sizepe;
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T p;
  p = false;
  if (comm->type->size[1] == 8) {
    p = true;
  }
  if (p && (comm->type->size[1] != 0)) {
    sizepe = 0;
    exitg1 = false;
    while ((!exitg1) && (sizepe < 8)) {
      if (!(comm->type->data[sizepe] == cv[sizepe])) {
        p = false;
        exitg1 = true;
      } else {
        sizepe++;
      }
    }
  }
  b_p = (int)p;
  if (!b_p) {
    emxInit_char_T(&b_comm, 2);
    i = b_comm->size[0] * b_comm->size[1];
    b_comm->size[0] = 1;
    b_comm->size[1] = comm->type->size[1] + 1;
    emxEnsureCapacity_char_T(b_comm, i);
    sizepe = comm->type->size[1];
    for (i = 0; i < sizepe; i++) {
      b_comm->data[i] = comm->type->data[i];
    }
    b_comm->data[comm->type->size[1]] = '\x00';
    m2c_error(b_comm);
    emxFree_char_T(&b_comm);
  }
  t_comm = *(MPI_Comm *)(&comm->data->data[0]);
  *errCode = VecCreate(t_comm, &arg);
  if (*errCode != 0) {
    b_m2c_error(*errCode);
  }
  sizepe = sizeof(Vec);
  i = vec->data->size[0];
  vec->data->size[0] = sizepe;
  emxEnsureCapacity_uint8_T(vec->data, i);
  i = vec->type->size[0] * vec->type->size[1];
  vec->type->size[0] = 1;
  vec->type->size[1] = 3;
  emxEnsureCapacity_char_T(vec->type, i);
  vec->type->data[0] = 'V';
  vec->type->data[1] = 'e';
  vec->type->data[2] = 'c';
  vec->nitems = 1;
  ptr = (char *)(&arg);
  for (i = 0; i < sizepe; i++) {
    vec->data->data[i] = *(ptr);
    ptr = ptr + 1;
  }
  *toplevel = true;
}

void petscVecCreate_World(M2C_OpaqueType *vec, int *errCode, boolean_T *topleve)
{
  MPI_Comm t_comm;
  Vec arg;
  char *ptr;
  int i;
  int sizepe;
  t_comm = PETSC_COMM_WORLD;
  *errCode = VecCreate(t_comm, &arg);
  if (*errCode != 0) {
    b_m2c_error(*errCode);
  }
  sizepe = sizeof(Vec);
  i = vec->data->size[0];
  vec->data->size[0] = sizepe;
  emxEnsureCapacity_uint8_T(vec->data, i);
  i = vec->type->size[0] * vec->type->size[1];
  vec->type->size[0] = 1;
  vec->type->size[1] = 3;
  emxEnsureCapacity_char_T(vec->type, i);
  vec->type->data[0] = 'V';
  vec->type->data[1] = 'e';
  vec->type->data[2] = 'c';
  vec->nitems = 1;
  ptr = (char *)(&arg);
  for (i = 0; i < sizepe; i++) {
    vec->data->data[i] = *(ptr);
    ptr = ptr + 1;
  }
  *topleve = true;
}

void petscVecCreate_initialize(void)
{
}

void petscVecCreate_terminate(void)
{
}
