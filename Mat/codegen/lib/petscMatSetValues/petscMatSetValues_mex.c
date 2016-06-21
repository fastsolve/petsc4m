/*
 * Mat/codegen/lib/petscMatSetValues/petscMatSetValues_mex.c
 *
 * Auxiliary code for mexFunction of petscMatSetValues
 *
 * C source code generated by m2c.
 * %#m2c options: codegenArgs=-args {PetscMat, int32(0), coder.typeof(int32(0), [inf,1]), int32(0), coder.typeof(int32(0), [inf,1]), coder.typeof(0, [inf,1]), int32(0)} petscMatSetValues_Insert -args {PetscMat, int32(0), coder.typeof(int32(0), [inf,1]), int32(0), coder.typeof(int32(0), [inf,1]), coder.typeof(0, [inf,1])} enableInline=1 presVars=None dynMem=Threshold
 *
 */

#ifdef MATLAB_MEX_FILE
#include "mex.h"
#else
#include "matrix.h"
#endif
/* Include the C header file generated by codegen in lib mode */
#include "petscMatSetValues.h"
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


static void __petscMatSetValues_api(mxArray **plhs, const mxArray ** prhs) {
    struct0_T            mat;
    int32_T              ni;
    emxArray_int32_T     ix;
    int32_T              nj;
    emxArray_int32_T     jx;
    emxArray_real_T      v;
    int32_T              iroa;
    int32_T             *errCode;
    boolean_T           *toplevel;

    /* Marshall in inputs and preallocate outputs */
    if (mxGetNumberOfElements(prhs[0]) && mxGetClassID(prhs[0]) != mxSTRUCT_CLASS)
        mexErrMsgIdAndTxt("petscMatSetValues:WrongInputType",
            "Input argument mat has incorrect data type; struct is expected.");
    if (mxGetNumberOfElements(prhs[0]) != 1)
        mexErrMsgIdAndTxt("petscMatSetValues:WrongSizeOfInputArg",
            "Argument mat should be a scalar.");
    marshallin_const_struct0_T(&mat, prhs[0], "mat");

    if (mxGetNumberOfElements(prhs[1]) && mxGetClassID(prhs[1]) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscMatSetValues:WrongInputType",
            "Input argument ni has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(prhs[1]) != 1)
        mexErrMsgIdAndTxt("petscMatSetValues:WrongSizeOfInputArg",
            "Argument ni should be a scalar.");
    ni = *(int32_T*)mxGetData(prhs[1]);

    if (mxGetNumberOfElements(prhs[2]) && mxGetClassID(prhs[2]) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscMatSetValues:WrongInputType",
            "Input argument ix has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(prhs[2]) && mxGetDimensions(prhs[2])[1] != 1) 
        mexErrMsgIdAndTxt("petscMatSetValues:WrongSizeOfInputArg",
            "Dimension 2 of ix should equal 1.");
    alias_mxArray_to_emxArray(prhs[2], (emxArray__common *)(&ix), "ix", 1);

    if (mxGetNumberOfElements(prhs[3]) && mxGetClassID(prhs[3]) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscMatSetValues:WrongInputType",
            "Input argument nj has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(prhs[3]) != 1)
        mexErrMsgIdAndTxt("petscMatSetValues:WrongSizeOfInputArg",
            "Argument nj should be a scalar.");
    nj = *(int32_T*)mxGetData(prhs[3]);

    if (mxGetNumberOfElements(prhs[4]) && mxGetClassID(prhs[4]) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscMatSetValues:WrongInputType",
            "Input argument jx has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(prhs[4]) && mxGetDimensions(prhs[4])[1] != 1) 
        mexErrMsgIdAndTxt("petscMatSetValues:WrongSizeOfInputArg",
            "Dimension 2 of jx should equal 1.");
    alias_mxArray_to_emxArray(prhs[4], (emxArray__common *)(&jx), "jx", 1);

    if (mxGetNumberOfElements(prhs[5]) && mxGetClassID(prhs[5]) != mxDOUBLE_CLASS)
        mexErrMsgIdAndTxt("petscMatSetValues:WrongInputType",
            "Input argument v has incorrect data type; double is expected.");
    if (mxGetNumberOfElements(prhs[5]) && mxGetDimensions(prhs[5])[1] != 1) 
        mexErrMsgIdAndTxt("petscMatSetValues:WrongSizeOfInputArg",
            "Dimension 2 of v should equal 1.");
    alias_mxArray_to_emxArray(prhs[5], (emxArray__common *)(&v), "v", 1);

    if (mxGetNumberOfElements(prhs[6]) && mxGetClassID(prhs[6]) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscMatSetValues:WrongInputType",
            "Input argument iroa has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(prhs[6]) != 1)
        mexErrMsgIdAndTxt("petscMatSetValues:WrongSizeOfInputArg",
            "Argument iroa should be a scalar.");
    iroa = *(int32_T*)mxGetData(prhs[6]);

    errCode = mxMalloc(sizeof(int32_T));

    toplevel = mxMalloc(sizeof(boolean_T));

    /* Invoke the target function */
    petscMatSetValues(&mat, ni, &ix, nj, &jx, &v, iroa, errCode, toplevel);

    /* Deallocate input and marshall out function outputs */
    destroy_struct0_T(&mat);
    /* Nothing to be done for ni */
    free_emxArray((emxArray__common*)(&ix));
    /* Nothing to be done for nj */
    free_emxArray((emxArray__common*)(&jx));
    free_emxArray((emxArray__common*)(&v));
    /* Nothing to be done for iroa */
    plhs[0] = move_scalar_to_mxArray(errCode, mxINT32_CLASS);
    plhs[1] = move_scalar_to_mxArray(toplevel, mxLOGICAL_CLASS);

}

static void __petscMatSetValues_Insert_api(mxArray **plhs, const mxArray ** prhs) {
    struct0_T            mat;
    int32_T              ni;
    emxArray_int32_T     ix;
    int32_T              nj;
    emxArray_int32_T     jx;
    emxArray_real_T      v;
    int32_T             *errCode;
    boolean_T           *toplevel;

    /* Marshall in inputs and preallocate outputs */
    if (mxGetNumberOfElements(prhs[0]) && mxGetClassID(prhs[0]) != mxSTRUCT_CLASS)
        mexErrMsgIdAndTxt("petscMatSetValues_Insert:WrongInputType",
            "Input argument mat has incorrect data type; struct is expected.");
    if (mxGetNumberOfElements(prhs[0]) != 1)
        mexErrMsgIdAndTxt("petscMatSetValues_Insert:WrongSizeOfInputArg",
            "Argument mat should be a scalar.");
    marshallin_const_struct0_T(&mat, prhs[0], "mat");

    if (mxGetNumberOfElements(prhs[1]) && mxGetClassID(prhs[1]) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscMatSetValues_Insert:WrongInputType",
            "Input argument ni has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(prhs[1]) != 1)
        mexErrMsgIdAndTxt("petscMatSetValues_Insert:WrongSizeOfInputArg",
            "Argument ni should be a scalar.");
    ni = *(int32_T*)mxGetData(prhs[1]);

    if (mxGetNumberOfElements(prhs[2]) && mxGetClassID(prhs[2]) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscMatSetValues_Insert:WrongInputType",
            "Input argument ix has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(prhs[2]) && mxGetDimensions(prhs[2])[1] != 1) 
        mexErrMsgIdAndTxt("petscMatSetValues_Insert:WrongSizeOfInputArg",
            "Dimension 2 of ix should equal 1.");
    alias_mxArray_to_emxArray(prhs[2], (emxArray__common *)(&ix), "ix", 1);

    if (mxGetNumberOfElements(prhs[3]) && mxGetClassID(prhs[3]) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscMatSetValues_Insert:WrongInputType",
            "Input argument nj has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(prhs[3]) != 1)
        mexErrMsgIdAndTxt("petscMatSetValues_Insert:WrongSizeOfInputArg",
            "Argument nj should be a scalar.");
    nj = *(int32_T*)mxGetData(prhs[3]);

    if (mxGetNumberOfElements(prhs[4]) && mxGetClassID(prhs[4]) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscMatSetValues_Insert:WrongInputType",
            "Input argument jx has incorrect data type; int32 is expected.");
    if (mxGetNumberOfElements(prhs[4]) && mxGetDimensions(prhs[4])[1] != 1) 
        mexErrMsgIdAndTxt("petscMatSetValues_Insert:WrongSizeOfInputArg",
            "Dimension 2 of jx should equal 1.");
    alias_mxArray_to_emxArray(prhs[4], (emxArray__common *)(&jx), "jx", 1);

    if (mxGetNumberOfElements(prhs[5]) && mxGetClassID(prhs[5]) != mxDOUBLE_CLASS)
        mexErrMsgIdAndTxt("petscMatSetValues_Insert:WrongInputType",
            "Input argument v has incorrect data type; double is expected.");
    if (mxGetNumberOfElements(prhs[5]) && mxGetDimensions(prhs[5])[1] != 1) 
        mexErrMsgIdAndTxt("petscMatSetValues_Insert:WrongSizeOfInputArg",
            "Dimension 2 of v should equal 1.");
    alias_mxArray_to_emxArray(prhs[5], (emxArray__common *)(&v), "v", 1);

    errCode = mxMalloc(sizeof(int32_T));

    toplevel = mxMalloc(sizeof(boolean_T));

    /* Invoke the target function */
    petscMatSetValues_Insert(&mat, ni, &ix, nj, &jx, &v, errCode, toplevel);

    /* Deallocate input and marshall out function outputs */
    destroy_struct0_T(&mat);
    /* Nothing to be done for ni */
    free_emxArray((emxArray__common*)(&ix));
    /* Nothing to be done for nj */
    free_emxArray((emxArray__common*)(&jx));
    free_emxArray((emxArray__common*)(&v));
    plhs[0] = move_scalar_to_mxArray(errCode, mxINT32_CLASS);
    plhs[1] = move_scalar_to_mxArray(toplevel, mxLOGICAL_CLASS);

}


void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    /* Temporary copy for mex outputs. */
    mxArray *outputs[2];
    int i;
    int nOutputs = (nlhs < 1 ? 1 : nlhs);

    if (nrhs == 7) {
        if (nlhs > 2)
            mexErrMsgIdAndTxt("petscMatSetValues:TooManyOutputArguments",
                "Too many output arguments for entry-point petscMatSetValues.\n");
        /* Call the API function. */
        __petscMatSetValues_api(outputs, prhs);
    }
    else if (nrhs == 6) {
        if (nlhs > 2)
            mexErrMsgIdAndTxt("petscMatSetValues_Insert:TooManyOutputArguments",
                "Too many output arguments for entry-point petscMatSetValues_Insert.\n");
        /* Call the API function. */
        __petscMatSetValues_Insert_api(outputs, prhs);
    }
    else
        mexErrMsgIdAndTxt("petscMatSetValues:WrongNumberOfInputs",
            "Incorrect number of input variables for entry-point petscMatSetValues.");

    /* Copy over outputs to the caller. */
    for (i = 0; i < nOutputs; ++i) {
        plhs[i] = outputs[i];
    }
}
