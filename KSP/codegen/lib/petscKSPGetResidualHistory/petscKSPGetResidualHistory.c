#include "petscKSPGetResidualHistory.h"
#include "petscKSPGetResidualHistory_types.h"
#include "m2c.h"
#include "petsc4m.h"

static void b_m2c_error(int varargin_3);

static void m2c_error(const emxArray_char_T *varargin_3);

static void b_m2c_error(int varargin_3)
{
  const char *fmt;
  const char *msgid;
  msgid = "petsc:RuntimeError";
  fmt = "KSPGetResidualHistory returned error code %d\n";
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

void petscKSPGetResidualHistory(const M2C_OpaqueType *ksp,
                                emxArray_real_T *reshis, int *errCode,
                                boolean_T *toplevel)
{
  static const char cv[3] = {'K', 'S', 'P'};
  KSP t_ksp;
  PetscReal *a;
  emxArray_char_T *b_ksp;
  int i;
  int na;
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T p;
  p = false;
  if (ksp->type->size[1] == 3) {
    p = true;
  }
  if (p && (ksp->type->size[1] != 0)) {
    na = 0;
    exitg1 = false;
    while ((!exitg1) && (na < 3)) {
      if (!(ksp->type->data[na] == cv[na])) {
        p = false;
        exitg1 = true;
      } else {
        na++;
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
    na = ksp->type->size[1];
    for (i = 0; i < na; i++) {
      b_ksp->data[i] = ksp->type->data[i];
    }
    b_ksp->data[ksp->type->size[1]] = '\x00';
    m2c_error(b_ksp);
    emxFree_char_T(&b_ksp);
  }
  t_ksp = *(KSP *)(&ksp->data->data[0]);
  *errCode = KSPGetResidualHistory(t_ksp, &a, &na);
  i = reshis->size[0];
  reshis->size[0] = na;
  emxEnsureCapacity_real_T(reshis, i);
  for (i = 0; i < na; i++) {
    reshis->data[i] = 0.0;
  }
  memcpy(&reshis->data[0], a, na << 3);
  if (*errCode != 0) {
    b_m2c_error(*errCode);
  }
  *toplevel = true;
}

void petscKSPGetResidualHistory_initialize(void)
{
}

void petscKSPGetResidualHistory_terminate(void)
{
}
