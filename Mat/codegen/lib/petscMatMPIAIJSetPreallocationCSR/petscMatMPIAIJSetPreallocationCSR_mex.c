/*
 * Mat/codegen/lib/petscMatMPIAIJSetPreallocationCSR/petscMatMPIAIJSetPreallocationCSR_mex.c
 *
 * Auxiliary code for mexFunction of petscMatMPIAIJSetPreallocationCSR
 *
 * C source code generated by m2c.
 * %#m2c options:c9179466c3c7521fb5ee419a547ae8ce
 *
 */

#include "mex.h"
#if !defined(MATLAB_MEX_FILE) && defined(printf)
#undef printf
#endif
/* Include the C header file generated by codegen in lib mode */
#include "petscMatMPIAIJSetPreallocationCSR.h"
#include "petscMatMPIAIJSetPreallocationCSR_types.h"
#include "m2c.c"

/* Include declaration of some helper functions. */
#include "lib2mex_helper.c"


static void marshallin_const_M2C_OpaqueType(M2C_OpaqueType *pStruct, const mxArray *mx, const char *mname) {
    mxArray             *sub_mx;

    if (!mxIsStruct(mx))
        M2C_error("marshallin_const_M2C_OpaqueType:WrongType",
            "Input argument %s has incorrect data type; struct is expected.", mname);
    if (!mxGetField(mx, 0, "data"))
        M2C_error("marshallin_const_M2C_OpaqueType:WrongType",
            "Input argument %s is missing the field data.", mname);
    if (!mxGetField(mx, 0, "type"))
        M2C_error("marshallin_const_M2C_OpaqueType:WrongType",
            "Input argument %s is missing the field type.", mname);
    if (!mxGetField(mx, 0, "nitems"))
        M2C_error("marshallin_const_M2C_OpaqueType:WrongType",
            "Input argument %s is missing the field nitems.", mname);
    if (mxGetNumberOfFields(mx) > 3)
        M2C_warn("marshallin_const_M2C_OpaqueType:ExtraFields",
            "Extra fields in %s and are ignored.", mname);

    sub_mx = mxGetField(mx, 0, "data");
    if (mxGetNumberOfElements(sub_mx) && mxGetClassID(sub_mx) != mxUINT8_CLASS)
        mexErrMsgIdAndTxt("marshallin_const_M2C_OpaqueType:WrongInputType",
            "Input argument data has incorrect data type; uint8 is expected.");
    if (mxGetNumberOfElements(sub_mx) && mxGetDimensions(sub_mx)[1] != 1) 
        mexErrMsgIdAndTxt("marshallin_const_M2C_OpaqueType:WrongSizeOfInputArg",
            "Dimension 2 of data should be equal to 1.");
    pStruct->data = (emxArray_uint8_T*)mxMalloc(sizeof(emxArray_uint8_T));
    init_emxArray((emxArray__common*)(pStruct->data), 1);
    alias_mxArray_to_emxArray(sub_mx, (emxArray__common *)(pStruct->data), "data", 1);

    sub_mx = mxGetField(mx, 0, "type");
    if (mxGetNumberOfElements(sub_mx) && mxGetClassID(sub_mx) != mxCHAR_CLASS)
        mexErrMsgIdAndTxt("marshallin_const_M2C_OpaqueType:WrongInputType",
            "Input argument type has incorrect data type; char is expected.");
    if (mxGetNumberOfElements(sub_mx) && mxGetDimensions(sub_mx)[0] != 1) 
        mexErrMsgIdAndTxt("marshallin_const_M2C_OpaqueType:WrongSizeOfInputArg",
            "Dimension 1 of type should be equal to 1.");
    pStruct->type = (emxArray_char_T*)mxMalloc(sizeof(emxArray_char_T));
    init_emxArray((emxArray__common*)(pStruct->type), 2);
    alias_mxArray_to_emxArray(sub_mx, (emxArray__common *)(pStruct->type), "type", 2);

    sub_mx = mxGetField(mx, 0, "nitems");
    if (mxGetNumberOfElements(sub_mx) && mxGetClassID(sub_mx) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("marshallin_const_M2C_OpaqueType:WrongInputType",
            "Input argument nitems has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(sub_mx) != 1)
        mexErrMsgIdAndTxt("marshallin_const_M2C_OpaqueType:WrongSizeOfInputArg",
            "Argument nitems should be a scalar.");
    pStruct->nitems = *(int32_T*)mxGetData(sub_mx);
}
static void destroy_M2C_OpaqueType(M2C_OpaqueType *pStruct) {

    free_emxArray((emxArray__common*)(pStruct->data));
    mxFree(pStruct->data);

    free_emxArray((emxArray__common*)(pStruct->type));
    mxFree(pStruct->type);


}


static void __petscMatMPIAIJSetPreallocationCSR_api(mxArray **plhs, const mxArray ** prhs) {
    M2C_OpaqueType       mat;
    emxArray_int32_T     ix;
    emxArray_int32_T     jx;
    emxArray_real_T      vs;
    int32_T             *errCode;
    boolean_T           *toplevel;

    /* Marshall in inputs and preallocate outputs */
    if (mxGetNumberOfElements(prhs[0]) && mxGetClassID(prhs[0]) != mxSTRUCT_CLASS)
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR:WrongInputType",
            "Input argument mat has incorrect data type; struct is expected.");
    if (mxGetNumberOfElements(prhs[0]) != 1)
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR:WrongSizeOfInputArg",
            "Argument mat should be a scalar.");
    marshallin_const_M2C_OpaqueType(&mat, prhs[0], "mat");

    if (mxGetNumberOfElements(prhs[1]) && mxGetClassID(prhs[1]) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR:WrongInputType",
            "Input argument ix has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(prhs[1]) && mxGetDimensions(prhs[1])[1] != 1) 
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR:WrongSizeOfInputArg",
            "Dimension 2 of ix should be equal to 1.");
    alias_mxArray_to_emxArray(prhs[1], (emxArray__common *)(&ix), "ix", 1);

    if (mxGetNumberOfElements(prhs[2]) && mxGetClassID(prhs[2]) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR:WrongInputType",
            "Input argument jx has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(prhs[2]) && mxGetDimensions(prhs[2])[1] != 1) 
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR:WrongSizeOfInputArg",
            "Dimension 2 of jx should be equal to 1.");
    alias_mxArray_to_emxArray(prhs[2], (emxArray__common *)(&jx), "jx", 1);

    if (mxGetNumberOfElements(prhs[3]) && mxGetClassID(prhs[3]) != mxDOUBLE_CLASS)
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR:WrongInputType",
            "Input argument vs has incorrect data type; double is expected.");
    if (mxGetNumberOfElements(prhs[3]) && mxGetDimensions(prhs[3])[1] != 1) 
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR:WrongSizeOfInputArg",
            "Dimension 2 of vs should be equal to 1.");
    alias_mxArray_to_emxArray(prhs[3], (emxArray__common *)(&vs), "vs", 1);

    errCode = (int32_T*)mxMalloc(sizeof(int32_T));

    toplevel = (boolean_T*)mxMalloc(sizeof(boolean_T));

    /* Invoke the target function */
    petscMatMPIAIJSetPreallocationCSR(&mat, &ix, &jx, &vs, errCode, toplevel);

    /* Deallocate input and marshall out function outputs */
    destroy_M2C_OpaqueType(&mat);
    free_emxArray((emxArray__common*)(&ix));
    free_emxArray((emxArray__common*)(&jx));
    free_emxArray((emxArray__common*)(&vs));
    plhs[0] = move_scalar_to_mxArray(errCode, mxINT32_CLASS);
    plhs[1] = move_scalar_to_mxArray(toplevel, mxLOGICAL_CLASS);

}

static void __petscMatMPIAIJSetPreallocationCSR_Indexonly_api(mxArray **plhs, const mxArray ** prhs) {
    M2C_OpaqueType       mat;
    emxArray_int32_T     ix;
    emxArray_int32_T     jx;
    int32_T             *errCode;
    boolean_T           *toplevel;

    /* Marshall in inputs and preallocate outputs */
    if (mxGetNumberOfElements(prhs[0]) && mxGetClassID(prhs[0]) != mxSTRUCT_CLASS)
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR_Indexonly:WrongInputType",
            "Input argument mat has incorrect data type; struct is expected.");
    if (mxGetNumberOfElements(prhs[0]) != 1)
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR_Indexonly:WrongSizeOfInputArg",
            "Argument mat should be a scalar.");
    marshallin_const_M2C_OpaqueType(&mat, prhs[0], "mat");

    if (mxGetNumberOfElements(prhs[1]) && mxGetClassID(prhs[1]) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR_Indexonly:WrongInputType",
            "Input argument ix has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(prhs[1]) && mxGetDimensions(prhs[1])[1] != 1) 
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR_Indexonly:WrongSizeOfInputArg",
            "Dimension 2 of ix should be equal to 1.");
    alias_mxArray_to_emxArray(prhs[1], (emxArray__common *)(&ix), "ix", 1);

    if (mxGetNumberOfElements(prhs[2]) && mxGetClassID(prhs[2]) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR_Indexonly:WrongInputType",
            "Input argument jx has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(prhs[2]) && mxGetDimensions(prhs[2])[1] != 1) 
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR_Indexonly:WrongSizeOfInputArg",
            "Dimension 2 of jx should be equal to 1.");
    alias_mxArray_to_emxArray(prhs[2], (emxArray__common *)(&jx), "jx", 1);

    errCode = (int32_T*)mxMalloc(sizeof(int32_T));

    toplevel = (boolean_T*)mxMalloc(sizeof(boolean_T));

    /* Invoke the target function */
    petscMatMPIAIJSetPreallocationCSR_Indexonly(&mat, &ix, &jx, errCode, toplevel);

    /* Deallocate input and marshall out function outputs */
    destroy_M2C_OpaqueType(&mat);
    free_emxArray((emxArray__common*)(&ix));
    free_emxArray((emxArray__common*)(&jx));
    plhs[0] = move_scalar_to_mxArray(errCode, mxINT32_CLASS);
    plhs[1] = move_scalar_to_mxArray(toplevel, mxLOGICAL_CLASS);

}


void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    /* Temporary copy for mex outputs. */
    mxArray *outputs[2] = {NULL, NULL};
    int i;
    int nOutputs = (nlhs < 1 ? 1 : nlhs);

    if (nrhs == 4) {
        if (nlhs > 2)
            mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR:TooManyOutputArguments",
                "Too many output arguments for entry-point petscMatMPIAIJSetPreallocationCSR.\n");
        /* Call the API function. */
        __petscMatMPIAIJSetPreallocationCSR_api(outputs, prhs);
    }
    else if (nrhs == 3) {
        if (nlhs > 2)
            mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR_Indexonly:TooManyOutputArguments",
                "Too many output arguments for entry-point petscMatMPIAIJSetPreallocationCSR_Indexonly.\n");
        /* Call the API function. */
        __petscMatMPIAIJSetPreallocationCSR_Indexonly_api(outputs, prhs);
    }
    else
        mexErrMsgIdAndTxt("petscMatMPIAIJSetPreallocationCSR:WrongNumberOfInputs",
            "Incorrect number of input variables for entry-point petscMatMPIAIJSetPreallocationCSR.");

    /* Copy over outputs to the caller. */
    for (i = 0; i < nOutputs; ++i) {
        plhs[i] = outputs[i];
    }
}
