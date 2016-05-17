#ifndef PETSCKSPSETTOLERANCES_H
#define PETSCKSPSETTOLERANCES_H
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtwtypes.h"
#include "petscKSPSetTolerances_types.h"

extern emxArray_char_T *emxCreateND_char_T(int numDimensions, int *size);
extern emxArray_uint8_T *emxCreateND_uint8_T(int numDimensions, int *size);
extern emxArray_char_T *emxCreateWrapperND_char_T(char *data, int numDimensions,
  int *size);
extern emxArray_uint8_T *emxCreateWrapperND_uint8_T(unsigned char *data, int
  numDimensions, int *size);
extern emxArray_char_T *emxCreateWrapper_char_T(char *data, int rows, int cols);
extern emxArray_uint8_T *emxCreateWrapper_uint8_T(unsigned char *data, int rows,
  int cols);
extern emxArray_char_T *emxCreate_char_T(int rows, int cols);
extern emxArray_uint8_T *emxCreate_uint8_T(int rows, int cols);
extern void emxDestroyArray_char_T(emxArray_char_T *emxArray);
extern void emxDestroyArray_uint8_T(emxArray_uint8_T *emxArray);
extern void emxDestroy_struct0_T(struct0_T emxArray);
extern void emxInit_struct0_T(struct0_T *pStruct);
extern void petscKSPSetTolerances(const struct0_T *ksp, double rtol, double arg2,
  double dtol, int maxits, int *errCode, boolean_T *toplevel);
extern void petscKSPSetTolerances_2args(const struct0_T *ksp, double rtol, int
  *errCode, boolean_T *toplevel);
extern void petscKSPSetTolerances_3args(const struct0_T *ksp, double rtols, int
  maxits, int *errCode, boolean_T *toplevel);
extern void petscKSPSetTolerances_initialize(void);
extern void petscKSPSetTolerances_terminate(void);

#endif