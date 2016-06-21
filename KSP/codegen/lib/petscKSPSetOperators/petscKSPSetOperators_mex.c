/*
 * KSP/codegen/lib/petscKSPSetOperators/petscKSPSetOperators_mex.c
 *
 * Auxiliary code for mexFunction of petscKSPSetOperators
 *
 * C source code generated by m2c.
 * %#m2c options: codegenArgs=-args {PetscKSP, PetscMat, PetscMat} petscKSPSetOperators_AforP -args {PetscKSP, PetscMat} enableInline=1 presVars=None dynMem=Threshold
 *
 */

#ifdef MATLAB_MEX_FILE
#include "mex.h"
#else
#include "matrix.h"
#endif
/* Include the C header file generated by codegen in lib mode */
#include "petscKSPSetOperators.h"
#include "m2c.c"

/* Include declaration of some helper functions. */
#include "lib2mex_helper.c"


static void marshallin_const_struct0_T(struct0_T *pStruct, const mxArray *mx, const char *mname) {
    mxArray             *sub_mx;

    if (!mxIsStruct(mx))
        M2C_error("marshallin_const_struct0_T:WrongType",
            "Input argument %s has incorrect data type; struct is expected.", mname);
    if (!mxGetField(mx, 0, "data"))
        M2C_error("marshallin_const_struct0_T:WrongType",
            "Input argument %s is missing the field data.", mname);
    if (!mxGetField(mx, 0, "type"))
        M2C_error("marshallin_const_struct0_T:WrongType",
            "Input argument %s is missing the field type.", mname);
    if (!mxGetField(mx, 0, "nitems"))
        M2C_error("marshallin_const_struct0_T:WrongType",
            "Input argument %s is missing the field nitems.", mname);
    if (mxGetNumberOfFields(mx) > 3)
        M2C_warn("marshallin_const_struct0_T:ExtraFields",
            "Extra fields in %s and are ignored.", mname);

    sub_mx = mxGetField(mx, 0, "data");
    if (mxGetNumberOfElements(sub_mx) && mxGetClassID(sub_mx) != mxUINT8_CLASS)
        mexErrMsgIdAndTxt("marshallin_const_struct0_T:WrongInputType",
            "Input argument data has incorrect data type; uint8 is expected.");
    if (mxGetNumberOfElements(sub_mx) && mxGetDimensions(sub_mx)[1] != 1) 
        mexErrMsgIdAndTxt("marshallin_const_struct0_T:WrongSizeOfInputArg",
            "Dimension 2 of data should equal 1.");
    pStruct->data = mxMalloc(sizeof(emxArray_uint8_T));
    init_emxArray((emxArray__common*)(pStruct->data), 1);
    alias_mxArray_to_emxArray(sub_mx, (emxArray__common *)(pStruct->data), "data", 1);

    sub_mx = mxGetField(mx, 0, "type");
    if (mxGetNumberOfElements(sub_mx) && mxGetClassID(sub_mx) != mxCHAR_CLASS)
        mexErrMsgIdAndTxt("marshallin_const_struct0_T:WrongInputType",
            "Input argument type has incorrect data type; char is expected.");
    if (mxGetNumberOfElements(sub_mx) && mxGetDimensions(sub_mx)[0] != 1) 
        mexErrMsgIdAndTxt("marshallin_const_struct0_T:WrongSizeOfInputArg",
            "Dimension 1 of type should equal 1.");
    pStruct->type = mxMalloc(sizeof(emxArray_char_T));
    init_emxArray((emxArray__common*)(pStruct->type), 2);
    alias_mxArray_to_emxArray(sub_mx, (emxArray__common *)(pStruct->type), "type", 2);

    sub_mx = mxGetField(mx, 0, "nitems");
    if (mxGetNumberOfElements(sub_mx) && mxGetClassID(sub_mx) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("marshallin_const_struct0_T:WrongInputType",
            "Input argument nitems has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(sub_mx) != 1)
        mexErrMsgIdAndTxt("marshallin_const_struct0_T:WrongSizeOfInputArg",
            "Argument nitems should be a scalar.");
    pStruct->nitems = *(int32_T*)mxGetData(sub_mx);
}
static void destroy_struct0_T(struct0_T *pStruct) {

    free_emxArray((emxArray__common*)(pStruct->data));
    mxFree(pStruct->data);

    free_emxArray((emxArray__common*)(pStruct->type));
    mxFree(pStruct->type);


}


static void __petscKSPSetOperators_api(mxArray **plhs, const mxArray ** prhs) {
    struct0_T            ksp;
    struct0_T            Amat;
    struct0_T            Pmat;
    int32_T             *errCode;
    boolean_T           *toplevel;

    /* Marshall in inputs and preallocate outputs */
    if (mxGetNumberOfElements(prhs[0]) && mxGetClassID(prhs[0]) != mxSTRUCT_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument ksp has incorrect data type; struct is expected.");
    if (mxGetNumberOfElements(prhs[0]) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongSizeOfInputArg",
            "Argument ksp should be a scalar.");
    marshallin_const_struct0_T(&ksp, prhs[0], "ksp");

    if (mxGetNumberOfElements(prhs[1]) && mxGetClassID(prhs[1]) != mxSTRUCT_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument Amat has incorrect data type; struct is expected.");
    if (mxGetNumberOfElements(prhs[1]) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongSizeOfInputArg",
            "Argument Amat should be a scalar.");
    marshallin_const_struct0_T(&Amat, prhs[1], "Amat");

    if (mxGetNumberOfElements(prhs[2]) && mxGetClassID(prhs[2]) != mxSTRUCT_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument Pmat has incorrect data type; struct is expected.");
    if (mxGetNumberOfElements(prhs[2]) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongSizeOfInputArg",
            "Argument Pmat should be a scalar.");
    marshallin_const_struct0_T(&Pmat, prhs[2], "Pmat");

    errCode = mxMalloc(sizeof(int32_T));

    toplevel = mxMalloc(sizeof(boolean_T));

    /* Invoke the target function */
    petscKSPSetOperators(&ksp, &Amat, &Pmat, errCode, toplevel);

    /* Deallocate input and marshall out function outputs */
    destroy_struct0_T(&ksp);
    destroy_struct0_T(&Amat);
    destroy_struct0_T(&Pmat);
    plhs[0] = move_scalar_to_mxArray(errCode, mxINT32_CLASS);
    plhs[1] = move_scalar_to_mxArray(toplevel, mxLOGICAL_CLASS);

}

static void __petscKSPSetOperators_AforP_api(mxArray **plhs, const mxArray ** prhs) {
    struct0_T            ksp;
    struct0_T            Amat;
    int32_T             *errCode;
    boolean_T           *toplevel;

    /* Marshall in inputs and preallocate outputs */
    if (mxGetNumberOfElements(prhs[0]) && mxGetClassID(prhs[0]) != mxSTRUCT_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputType",
            "Input argument ksp has incorrect data type; struct is expected.");
    if (mxGetNumberOfElements(prhs[0]) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongSizeOfInputArg",
            "Argument ksp should be a scalar.");
    marshallin_const_struct0_T(&ksp, prhs[0], "ksp");

    if (mxGetNumberOfElements(prhs[1]) && mxGetClassID(prhs[1]) != mxSTRUCT_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputType",
            "Input argument Amat has incorrect data type; struct is expected.");
    if (mxGetNumberOfElements(prhs[1]) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongSizeOfInputArg",
            "Argument Amat should be a scalar.");
    marshallin_const_struct0_T(&Amat, prhs[1], "Amat");

    errCode = mxMalloc(sizeof(int32_T));

    toplevel = mxMalloc(sizeof(boolean_T));

    /* Invoke the target function */
    petscKSPSetOperators_AforP(&ksp, &Amat, errCode, toplevel);

    /* Deallocate input and marshall out function outputs */
    destroy_struct0_T(&ksp);
    destroy_struct0_T(&Amat);
    plhs[0] = move_scalar_to_mxArray(errCode, mxINT32_CLASS);
    plhs[1] = move_scalar_to_mxArray(toplevel, mxLOGICAL_CLASS);

}


void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    /* Temporary copy for mex outputs. */
    mxArray *outputs[2];
    int i;
    int nOutputs = (nlhs < 1 ? 1 : nlhs);

    if (nrhs == 3) {
        if (nlhs > 2)
            mexErrMsgIdAndTxt("petscKSPSetOperators:TooManyOutputArguments",
                "Too many output arguments for entry-point petscKSPSetOperators.\n");
        /* Call the API function. */
        __petscKSPSetOperators_api(outputs, prhs);
    }
    else if (nrhs == 2) {
        if (nlhs > 2)
            mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:TooManyOutputArguments",
                "Too many output arguments for entry-point petscKSPSetOperators_AforP.\n");
        /* Call the API function. */
        __petscKSPSetOperators_AforP_api(outputs, prhs);
    }
    else
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongNumberOfInputs",
            "Incorrect number of input variables for entry-point petscKSPSetOperators.");

    /* Copy over outputs to the caller. */
    for (i = 0; i < nOutputs; ++i) {
        plhs[i] = outputs[i];
    }
}
