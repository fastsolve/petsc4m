#include "petscMatSetValues.h"
#include "petscMatSetValues_types.h"
#include "m2c.h"
#include "petsc4m.h"

static void b_m2c_error(int varargin_3);

static boolean_T isequal(const emxArray_char_T *varargin_1);

static void m2c_error(const emxArray_char_T *varargin_3);

static void b_m2c_error(int varargin_3)
{
  const char *fmt;
  const char *msgid;
  msgid = "petsc:RuntimeError";
  fmt = "MatSetValues returned error code %d\n";
  M2C_error(msgid, fmt, varargin_3);
}

static boolean_T isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[3] = {'M', 'a', 't'};
  int k;
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T p;
  p = false;
  b_p = false;
  if (varargin_1->size[1] == 3) {
    b_p = true;
  }
  if (b_p && (varargin_1->size[1] != 0)) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 3)) {
      if (!(varargin_1->data[k] == cv[k])) {
        b_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return b_p || p;
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
  fmt = "Incorrect data type %s. Expected Mat.\n";
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

void petscMatSetValues(const M2C_OpaqueType *mat, int ni,
                       const emxArray_int32_T *ix, int nj,
                       const emxArray_int32_T *jx, const emxArray_real_T *v,
                       int iroa, int *errCode, boolean_T *toplevel)
{
  Mat t_mat;
  emxArray_char_T *b_mat;
  int i;
  int loop_ub;
  if (!isequal(mat->type)) {
    emxInit_char_T(&b_mat, 2);
    i = b_mat->size[0] * b_mat->size[1];
    b_mat->size[0] = 1;
    b_mat->size[1] = mat->type->size[1] + 1;
    emxEnsureCapacity_char_T(b_mat, i);
    loop_ub = mat->type->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_mat->data[i] = mat->type->data[i];
    }
    b_mat->data[mat->type->size[1]] = '\x00';
    m2c_error(b_mat);
    emxFree_char_T(&b_mat);
  }
  t_mat = *(Mat *)(&mat->data->data[0]);
  *errCode = MatSetValues(t_mat, ni, &ix->data[0], nj, &jx->data[0],
                          &v->data[0], iroa);
  *toplevel = true;
  if (*errCode != 0) {
    b_m2c_error(*errCode);
  }
}

void petscMatSetValues_Insert(const M2C_OpaqueType *mat, int ni,
                              const emxArray_int32_T *ix, int nj,
                              const emxArray_int32_T *jx,
                              const emxArray_real_T *v, int *errCode,
                              boolean_T *toplevel)
{
  Mat t_mat;
  emxArray_char_T *b_mat;
  int i;
  int iroa;
  int loop_ub;
  iroa = (INSERT_VALUES);
  if (!isequal(mat->type)) {
    emxInit_char_T(&b_mat, 2);
    i = b_mat->size[0] * b_mat->size[1];
    b_mat->size[0] = 1;
    b_mat->size[1] = mat->type->size[1] + 1;
    emxEnsureCapacity_char_T(b_mat, i);
    loop_ub = mat->type->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_mat->data[i] = mat->type->data[i];
    }
    b_mat->data[mat->type->size[1]] = '\x00';
    m2c_error(b_mat);
    emxFree_char_T(&b_mat);
  }
  t_mat = *(Mat *)(&mat->data->data[0]);
  *errCode = MatSetValues(t_mat, ni, &ix->data[0], nj, &jx->data[0],
                          &v->data[0], iroa);
  if (*errCode != 0) {
    b_m2c_error(*errCode);
  }
  *toplevel = true;
}

void petscMatSetValues_initialize(void)
{
}

void petscMatSetValues_terminate(void)
{
}
