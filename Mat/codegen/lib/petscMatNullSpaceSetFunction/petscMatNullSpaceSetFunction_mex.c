/*
 * Mat/codegen/lib/petscMatNullSpaceSetFunction/petscMatNullSpaceSetFunction_mex.c
 *
 * Auxiliary code for mexFunction of petscMatNullSpaceSetFunction
 *
 * C source code generated by m2c.
 * %#m2c options:ac78299465a14e4efbff2f9c6c1e83c7
 *
 */

#include "mex.h"
#if !defined(MATLAB_MEX_FILE) && defined(printf)
#undef printf
#endif
/* Include the C header file generated by codegen in lib mode */
#include "petscMatNullSpaceSetFunction.h"
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
            "Dimension 2 of data should be equal to 1.");
    pStruct->data = (emxArray_uint8_T*)mxMalloc(sizeof(emxArray_uint8_T));
    init_emxArray((emxArray__common*)(pStruct->data), 1);
    alias_mxArray_to_emxArray(sub_mx, (emxArray__common *)(pStruct->data), "data", 1);

    sub_mx = mxGetField(mx, 0, "type");
    if (mxGetNumberOfElements(sub_mx) && mxGetClassID(sub_mx) != mxCHAR_CLASS)
        mexErrMsgIdAndTxt("marshallin_const_struct0_T:WrongInputType",
            "Input argument type has incorrect data type; char is expected.");
    if (mxGetNumberOfElements(sub_mx) && mxGetDimensions(sub_mx)[0] != 1) 
        mexErrMsgIdAndTxt("marshallin_const_struct0_T:WrongSizeOfInputArg",
            "Dimension 1 of type should be equal to 1.");
    pStruct->type = (emxArray_char_T*)mxMalloc(sizeof(emxArray_char_T));
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


static void marshallin_const_struct1_T(struct1_T *pStruct, const mxArray *mx, const char *mname) {
    mxArray             *sub_mx;

    if (!mxIsStruct(mx))
        M2C_error("marshallin_const_struct1_T:WrongType",
            "Input argument %s has incorrect data type; struct is expected.", mname);
    if (!mxGetField(mx, 0, "data"))
        M2C_error("marshallin_const_struct1_T:WrongType",
            "Input argument %s is missing the field data.", mname);
    if (!mxGetField(mx, 0, "type"))
        M2C_error("marshallin_const_struct1_T:WrongType",
            "Input argument %s is missing the field type.", mname);
    if (!mxGetField(mx, 0, "nbytes"))
        M2C_error("marshallin_const_struct1_T:WrongType",
            "Input argument %s is missing the field nbytes.", mname);
    if (!mxGetField(mx, 0, "offset"))
        M2C_error("marshallin_const_struct1_T:WrongType",
            "Input argument %s is missing the field offset.", mname);
    if (mxGetNumberOfFields(mx) > 4)
        M2C_warn("marshallin_const_struct1_T:ExtraFields",
            "Extra fields in %s and are ignored.", mname);

    sub_mx = mxGetField(mx, 0, "data");
    if (mxGetNumberOfElements(sub_mx) && mxGetClassID(sub_mx) != mxUINT64_CLASS)
        mexErrMsgIdAndTxt("marshallin_const_struct1_T:WrongInputType",
            "Input argument data has incorrect data type; uint64 is expected.");
    if (mxGetNumberOfElements(sub_mx) != 1)
        mexErrMsgIdAndTxt("marshallin_const_struct1_T:WrongSizeOfInputArg",
            "Argument data should be a scalar.");
    pStruct->data = *(uint64_T*)mxGetData(sub_mx);

    sub_mx = mxGetField(mx, 0, "type");
    if (mxGetNumberOfElements(sub_mx) && mxGetClassID(sub_mx) != mxCHAR_CLASS)
        mexErrMsgIdAndTxt("marshallin_const_struct1_T:WrongInputType",
            "Input argument type has incorrect data type; char is expected.");
    if (mxGetNumberOfElements(sub_mx) && mxGetDimensions(sub_mx)[0] != 1) 
        mexErrMsgIdAndTxt("marshallin_const_struct1_T:WrongSizeOfInputArg",
            "Dimension 1 of type should be equal to 1.");
    pStruct->type = (emxArray_char_T*)mxMalloc(sizeof(emxArray_char_T));
    init_emxArray((emxArray__common*)(pStruct->type), 2);
    alias_mxArray_to_emxArray(sub_mx, (emxArray__common *)(pStruct->type), "type", 2);

    sub_mx = mxGetField(mx, 0, "nbytes");
    if (mxGetNumberOfElements(sub_mx) && mxGetClassID(sub_mx) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("marshallin_const_struct1_T:WrongInputType",
            "Input argument nbytes has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(sub_mx) != 1)
        mexErrMsgIdAndTxt("marshallin_const_struct1_T:WrongSizeOfInputArg",
            "Argument nbytes should be a scalar.");
    pStruct->nbytes = *(int32_T*)mxGetData(sub_mx);

    sub_mx = mxGetField(mx, 0, "offset");
    if (mxGetNumberOfElements(sub_mx) && mxGetClassID(sub_mx) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("marshallin_const_struct1_T:WrongInputType",
            "Input argument offset has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(sub_mx) != 1)
        mexErrMsgIdAndTxt("marshallin_const_struct1_T:WrongSizeOfInputArg",
            "Argument offset should be a scalar.");
    pStruct->offset = *(int32_T*)mxGetData(sub_mx);
}
static void destroy_struct1_T(struct1_T *pStruct) {

    free_emxArray((emxArray__common*)(pStruct->type));
    mxFree(pStruct->type);


}


static void __petscMatNullSpaceSetFunction_api(mxArray **plhs, const mxArray ** prhs) {
    struct0_T            nullSp;
    struct0_T            rmvFunc;
    struct1_T            ctx;
    int32_T             *errCode;
    boolean_T           *toplevel;

    /* Marshall in inputs and preallocate outputs */
    if (mxGetNumberOfElements(prhs[0]) && mxGetClassID(prhs[0]) != mxSTRUCT_CLASS)
        mexErrMsgIdAndTxt("petscMatNullSpaceSetFunction:WrongInputType",
            "Input argument nullSp has incorrect data type; struct is expected.");
    if (mxGetNumberOfElements(prhs[0]) != 1)
        mexErrMsgIdAndTxt("petscMatNullSpaceSetFunction:WrongSizeOfInputArg",
            "Argument nullSp should be a scalar.");
    marshallin_const_struct0_T(&nullSp, prhs[0], "nullSp");

    if (mxGetNumberOfElements(prhs[1]) && mxGetClassID(prhs[1]) != mxSTRUCT_CLASS)
        mexErrMsgIdAndTxt("petscMatNullSpaceSetFunction:WrongInputType",
            "Input argument rmvFunc has incorrect data type; struct is expected.");
    if (mxGetNumberOfElements(prhs[1]) != 1)
        mexErrMsgIdAndTxt("petscMatNullSpaceSetFunction:WrongSizeOfInputArg",
            "Argument rmvFunc should be a scalar.");
    marshallin_const_struct0_T(&rmvFunc, prhs[1], "rmvFunc");

    if (mxGetNumberOfElements(prhs[2]) && mxGetClassID(prhs[2]) != mxSTRUCT_CLASS)
        mexErrMsgIdAndTxt("petscMatNullSpaceSetFunction:WrongInputType",
            "Input argument ctx has incorrect data type; struct is expected.");
    if (mxGetNumberOfElements(prhs[2]) != 1)
        mexErrMsgIdAndTxt("petscMatNullSpaceSetFunction:WrongSizeOfInputArg",
            "Argument ctx should be a scalar.");
    marshallin_const_struct1_T(&ctx, prhs[2], "ctx");

    errCode = (int32_T*)mxMalloc(sizeof(int32_T));

    toplevel = (boolean_T*)mxMalloc(sizeof(boolean_T));

    /* Invoke the target function */
    petscMatNullSpaceSetFunction(&nullSp, &rmvFunc, &ctx, errCode, toplevel);

    /* Deallocate input and marshall out function outputs */
    destroy_struct0_T(&nullSp);
    destroy_struct0_T(&rmvFunc);
    destroy_struct1_T(&ctx);
    plhs[0] = move_scalar_to_mxArray(errCode, mxINT32_CLASS);
    plhs[1] = move_scalar_to_mxArray(toplevel, mxLOGICAL_CLASS);

}


void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    /* Temporary copy for mex outputs. */
    mxArray *outputs[2] = {NULL, NULL};
    int i;
    int nOutputs = (nlhs < 1 ? 1 : nlhs);

    if (nrhs == 3) {
        if (nlhs > 2)
            mexErrMsgIdAndTxt("petscMatNullSpaceSetFunction:TooManyOutputArguments",
                "Too many output arguments for entry-point petscMatNullSpaceSetFunction.\n");
        /* Call the API function. */
        __petscMatNullSpaceSetFunction_api(outputs, prhs);
    }
    else
        mexErrMsgIdAndTxt("petscMatNullSpaceSetFunction:WrongNumberOfInputs",
            "Incorrect number of input variables for entry-point petscMatNullSpaceSetFunction.");

    /* Copy over outputs to the caller. */
    for (i = 0; i < nOutputs; ++i) {
        plhs[i] = outputs[i];
    }
}
