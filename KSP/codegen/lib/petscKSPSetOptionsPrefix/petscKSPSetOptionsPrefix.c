#include "petscKSPSetOptionsPrefix.h"
#include "petscKSPSetOptionsPrefix_types.h"
#include "m2c.h"
#include "petsc4m.h"

static void b_m2c_error(void);

static void c_m2c_error(int varargin_3);

static void m2c_error(const emxArray_char_T *varargin_3);

static void b_m2c_error(void)
{
  const char *fmt;
  const char *msgid;
  msgid = "Petsc4m:petscKSPSetOptionsPrefix:InputError";
  fmt = "The argument must be a null-terminated string.";
  M2C_error(msgid, fmt);
}

static void c_m2c_error(int varargin_3)
{
  const char *fmt;
  const char *msgid;
  msgid = "petsc:RuntimeError";
  fmt = "KSPSetOptionsPrefix returned error code %d\n";
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
  fmt = "Incorrect data type %s. Expected KSP.\n";
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

void petscKSPSetOptionsPrefix(const M2C_OpaqueType *ksp,
                              const emxArray_char_T *prefix, int *errCode,
                              boolean_T *toplevel)
{
  static const char cv[3] = {'K', 'S', 'P'};
  KSP t_ksp;
  emxArray_char_T *b_ksp;
  int i;
  int k;
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T p;
  p = false;
  if (ksp->type->size[1] == 3) {
    p = true;
  }
  if (p && (ksp->type->size[1] != 0)) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 3)) {
      if (!(ksp->type->data[k] == cv[k])) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  b_p = (int)p;
  if (!b_p) {
    emxInit_char_T(&b_ksp, 2);
    i = b_ksp->size[0] * b_ksp->size[1];
    b_ksp->size[0] = 1;
    b_ksp->size[1] = ksp->type->size[1] + 1;
    emxEnsureCapacity_char_T(b_ksp, i);
    k = ksp->type->size[1];
    for (i = 0; i < k; i++) {
      b_ksp->data[i] = ksp->type->data[i];
    }
    b_ksp->data[ksp->type->size[1]] = '\x00';
    m2c_error(b_ksp);
    emxFree_char_T(&b_ksp);
  }
  t_ksp = *(KSP *)(&ksp->data->data[0]);
  *toplevel = true;
  if ((prefix->size[1] != 0) && (prefix->data[prefix->size[1] - 1] != '\x00')) {
    b_m2c_error();
  }
  *errCode = KSPSetOptionsPrefix(t_ksp, &prefix->data[0]);
  if (*errCode != 0) {
    c_m2c_error(*errCode);
  }
}

void petscKSPSetOptionsPrefix_initialize(void)
{
}

void petscKSPSetOptionsPrefix_terminate(void)
{
}
