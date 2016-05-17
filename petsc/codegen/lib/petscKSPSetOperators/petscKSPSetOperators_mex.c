/*
 * petsc/codegen/lib/petscKSPSetOperators/petscKSPSetOperators_mex.c
 *
 * Auxiliary code for mexFunction of petscKSPSetOperators
 *
 * C source code generated by m2c.
 * %#m2c options: codegenArgs=-args {PetscKSP, PetscMat, PetscMat} petscKSPSetOperators_AforP -args {PetscKSP, PetscMat}  enableInline=1 withPetsc=1
 *
 */

#ifdef MATLAB_MEX_FILE
#include "mex.h"
#else
#include "matrix.h"
#endif
/* Include the C file generated by codegen in lib mode */
#include "petscKSPSetOperators.h"
#include "m2c.c"
/* Include declaration of some helper functions. */
#include "lib2mex_helper.c"

void petscKSPSetOperators_api(const mxArray ** prhs, const mxArray **plhs) {

    struct0_T            ksp;
    struct0_T            Amat;
    struct0_T            Pmat;
    mxArray              *_sub_mx1;

    int32_T              *errCode;
    boolean_T            *toplevel;

    /* Marshall in function inputs */

    if (!mxIsStruct(prhs[0]))
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument ksp has incorrect data type. struct is expected.");
    if (mxGetNumberOfFields(prhs[0])!=3)
        mexErrMsgIdAndTxt("petscKSPSetOperators:InputStructWrongFields",
            "Input argument ksp has incorrect number of fields.");
    if (mxGetNumberOfElements(prhs[0]) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongSizeOfInputArg",
            "Argument ksp must contain 1 items.");

    _sub_mx1 = mxGetField(prhs[0], 0, "data");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputStruct",
            "Input argument ksp does not have the field data.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxUINT8_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument ksp.data has incorrect data type. uint8 is expected.");
    *(void**)&ksp.data = mxCalloc(1, sizeof(emxArray__common));
    alias_mxArray_to_emxArray(_sub_mx1, (emxArray__common*)ksp.data, "ksp.data", 1);
    _sub_mx1 = mxGetField(prhs[0], 0, "type");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputStruct",
            "Input argument ksp does not have the field type.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxCHAR_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument ksp.type has incorrect data type. char is expected.");
    *(void**)&ksp.type = mxCalloc(1, sizeof(emxArray__common));
    alias_mxArray_to_emxArray(_sub_mx1, (emxArray__common*)ksp.type, "ksp.type", 2);
    _sub_mx1 = mxGetField(prhs[0], 0, "nitems");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputStruct",
            "Input argument ksp does not have the field nitems.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument ksp.nitems has incorrect data type. int32 is expected.");
    if (mxGetNumberOfElements(_sub_mx1) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongSizeOfInputArg",
            "Argument ksp.nitems should be a scalar.");
    ksp.nitems = *(int32_T*)mxGetData(_sub_mx1);

    if (!mxIsStruct(prhs[1]))
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument Amat has incorrect data type. struct is expected.");
    if (mxGetNumberOfFields(prhs[1])!=3)
        mexErrMsgIdAndTxt("petscKSPSetOperators:InputStructWrongFields",
            "Input argument Amat has incorrect number of fields.");
    if (mxGetNumberOfElements(prhs[1]) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongSizeOfInputArg",
            "Argument Amat must contain 1 items.");

    _sub_mx1 = mxGetField(prhs[1], 0, "data");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputStruct",
            "Input argument Amat does not have the field data.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxUINT8_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument Amat.data has incorrect data type. uint8 is expected.");
    *(void**)&Amat.data = mxCalloc(1, sizeof(emxArray__common));
    alias_mxArray_to_emxArray(_sub_mx1, (emxArray__common*)Amat.data, "Amat.data", 1);
    _sub_mx1 = mxGetField(prhs[1], 0, "type");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputStruct",
            "Input argument Amat does not have the field type.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxCHAR_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument Amat.type has incorrect data type. char is expected.");
    *(void**)&Amat.type = mxCalloc(1, sizeof(emxArray__common));
    alias_mxArray_to_emxArray(_sub_mx1, (emxArray__common*)Amat.type, "Amat.type", 2);
    _sub_mx1 = mxGetField(prhs[1], 0, "nitems");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputStruct",
            "Input argument Amat does not have the field nitems.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument Amat.nitems has incorrect data type. int32 is expected.");
    if (mxGetNumberOfElements(_sub_mx1) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongSizeOfInputArg",
            "Argument Amat.nitems should be a scalar.");
    Amat.nitems = *(int32_T*)mxGetData(_sub_mx1);

    if (!mxIsStruct(prhs[2]))
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument Pmat has incorrect data type. struct is expected.");
    if (mxGetNumberOfFields(prhs[2])!=3)
        mexErrMsgIdAndTxt("petscKSPSetOperators:InputStructWrongFields",
            "Input argument Pmat has incorrect number of fields.");
    if (mxGetNumberOfElements(prhs[2]) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongSizeOfInputArg",
            "Argument Pmat must contain 1 items.");

    _sub_mx1 = mxGetField(prhs[2], 0, "data");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputStruct",
            "Input argument Pmat does not have the field data.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxUINT8_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument Pmat.data has incorrect data type. uint8 is expected.");
    *(void**)&Pmat.data = mxCalloc(1, sizeof(emxArray__common));
    alias_mxArray_to_emxArray(_sub_mx1, (emxArray__common*)Pmat.data, "Pmat.data", 1);
    _sub_mx1 = mxGetField(prhs[2], 0, "type");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputStruct",
            "Input argument Pmat does not have the field type.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxCHAR_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument Pmat.type has incorrect data type. char is expected.");
    *(void**)&Pmat.type = mxCalloc(1, sizeof(emxArray__common));
    alias_mxArray_to_emxArray(_sub_mx1, (emxArray__common*)Pmat.type, "Pmat.type", 2);
    _sub_mx1 = mxGetField(prhs[2], 0, "nitems");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputStruct",
            "Input argument Pmat does not have the field nitems.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongInputType",
            "Input argument Pmat.nitems has incorrect data type. int32 is expected.");
    if (mxGetNumberOfElements(_sub_mx1) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongSizeOfInputArg",
            "Argument Pmat.nitems should be a scalar.");
    Pmat.nitems = *(int32_T*)mxGetData(_sub_mx1);

    /* Preallocate output variables */
    {mwSize l_size[] = {1, 1};
    *(void **)&errCode = prealloc_mxArray((mxArray**)&plhs[0], mxINT32_CLASS, 2, l_size); }
    {mwSize l_size[] = {1, 1};
    *(void **)&toplevel = prealloc_mxArray((mxArray**)&plhs[1], mxLOGICAL_CLASS, 2, l_size); }

    /* Invoke the target function */
    petscKSPSetOperators_initialize();

    petscKSPSetOperators(&ksp, &Amat, &Pmat, errCode, toplevel);

    petscKSPSetOperators_terminate();

    /* Marshall out function outputs */
    /* Nothing to do for plhs[0] */
    /* Nothing to do for plhs[1] */

    /* Free temporary variables */
    free_emxArray((emxArray__common*)ksp.type); mxFree(ksp.type);
    free_emxArray((emxArray__common*)ksp.data); mxFree(ksp.data);

    free_emxArray((emxArray__common*)Amat.type); mxFree(Amat.type);
    free_emxArray((emxArray__common*)Amat.data); mxFree(Amat.data);

    free_emxArray((emxArray__common*)Pmat.type); mxFree(Pmat.type);
    free_emxArray((emxArray__common*)Pmat.data); mxFree(Pmat.data);

}
void petscKSPSetOperators_AforP_api(const mxArray ** prhs, const mxArray **plhs) {

    struct0_T            ksp;
    struct0_T            Amat;
    mxArray              *_sub_mx1;

    int32_T              *errCode;
    boolean_T            *toplevel;

    /* Marshall in function inputs */

    if (!mxIsStruct(prhs[0]))
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputType",
            "Input argument ksp has incorrect data type. struct is expected.");
    if (mxGetNumberOfFields(prhs[0])!=3)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:InputStructWrongFields",
            "Input argument ksp has incorrect number of fields.");
    if (mxGetNumberOfElements(prhs[0]) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongSizeOfInputArg",
            "Argument ksp must contain 1 items.");

    _sub_mx1 = mxGetField(prhs[0], 0, "data");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputStruct",
            "Input argument ksp does not have the field data.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxUINT8_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputType",
            "Input argument ksp.data has incorrect data type. uint8 is expected.");
    *(void**)&ksp.data = mxCalloc(1, sizeof(emxArray__common));
    alias_mxArray_to_emxArray(_sub_mx1, (emxArray__common*)ksp.data, "ksp.data", 1);
    _sub_mx1 = mxGetField(prhs[0], 0, "type");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputStruct",
            "Input argument ksp does not have the field type.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxCHAR_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputType",
            "Input argument ksp.type has incorrect data type. char is expected.");
    *(void**)&ksp.type = mxCalloc(1, sizeof(emxArray__common));
    alias_mxArray_to_emxArray(_sub_mx1, (emxArray__common*)ksp.type, "ksp.type", 2);
    _sub_mx1 = mxGetField(prhs[0], 0, "nitems");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputStruct",
            "Input argument ksp does not have the field nitems.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputType",
            "Input argument ksp.nitems has incorrect data type. int32 is expected.");
    if (mxGetNumberOfElements(_sub_mx1) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongSizeOfInputArg",
            "Argument ksp.nitems should be a scalar.");
    ksp.nitems = *(int32_T*)mxGetData(_sub_mx1);

    if (!mxIsStruct(prhs[1]))
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputType",
            "Input argument Amat has incorrect data type. struct is expected.");
    if (mxGetNumberOfFields(prhs[1])!=3)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:InputStructWrongFields",
            "Input argument Amat has incorrect number of fields.");
    if (mxGetNumberOfElements(prhs[1]) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongSizeOfInputArg",
            "Argument Amat must contain 1 items.");

    _sub_mx1 = mxGetField(prhs[1], 0, "data");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputStruct",
            "Input argument Amat does not have the field data.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxUINT8_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputType",
            "Input argument Amat.data has incorrect data type. uint8 is expected.");
    *(void**)&Amat.data = mxCalloc(1, sizeof(emxArray__common));
    alias_mxArray_to_emxArray(_sub_mx1, (emxArray__common*)Amat.data, "Amat.data", 1);
    _sub_mx1 = mxGetField(prhs[1], 0, "type");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputStruct",
            "Input argument Amat does not have the field type.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxCHAR_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputType",
            "Input argument Amat.type has incorrect data type. char is expected.");
    *(void**)&Amat.type = mxCalloc(1, sizeof(emxArray__common));
    alias_mxArray_to_emxArray(_sub_mx1, (emxArray__common*)Amat.type, "Amat.type", 2);
    _sub_mx1 = mxGetField(prhs[1], 0, "nitems");
    if (_sub_mx1==NULL)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputStruct",
            "Input argument Amat does not have the field nitems.");
    if (mxGetNumberOfElements(_sub_mx1) && mxGetClassID(_sub_mx1) != mxINT32_CLASS)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongInputType",
            "Input argument Amat.nitems has incorrect data type. int32 is expected.");
    if (mxGetNumberOfElements(_sub_mx1) != 1)
        mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:WrongSizeOfInputArg",
            "Argument Amat.nitems should be a scalar.");
    Amat.nitems = *(int32_T*)mxGetData(_sub_mx1);

    /* Preallocate output variables */
    {mwSize l_size[] = {1, 1};
    *(void **)&errCode = prealloc_mxArray((mxArray**)&plhs[0], mxINT32_CLASS, 2, l_size); }
    {mwSize l_size[] = {1, 1};
    *(void **)&toplevel = prealloc_mxArray((mxArray**)&plhs[1], mxLOGICAL_CLASS, 2, l_size); }

    /* Invoke the target function */
    petscKSPSetOperators_initialize();

    petscKSPSetOperators_AforP(&ksp, &Amat, errCode, toplevel);

    petscKSPSetOperators_terminate();

    /* Marshall out function outputs */
    /* Nothing to do for plhs[0] */
    /* Nothing to do for plhs[1] */

    /* Free temporary variables */
    free_emxArray((emxArray__common*)ksp.type); mxFree(ksp.type);
    free_emxArray((emxArray__common*)ksp.data); mxFree(ksp.data);

    free_emxArray((emxArray__common*)Amat.type); mxFree(Amat.type);
    free_emxArray((emxArray__common*)Amat.data); mxFree(Amat.data);

}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    /* Temporary copy for mex outputs. */
    mxArray *outputs[2];
    int i;
    int nOutputs = (nlhs < 1 ? 1 : nlhs);

    if (nrhs == 3) {
        if (nlhs > 2)
            mexErrMsgIdAndTxt("petscKSPSetOperators:TooManyOutputArguments","Too many output arguments for entry-point petscKSPSetOperators.");
        /* Call the API function. */
        petscKSPSetOperators_api(prhs, (const mxArray**)outputs);
    }
    else if (nrhs == 2) {
        if (nlhs > 2)
            mexErrMsgIdAndTxt("petscKSPSetOperators_AforP:TooManyOutputArguments","Too many output arguments for entry-point petscKSPSetOperators_AforP.");
        /* Call the API function. */
        petscKSPSetOperators_AforP_api(prhs, (const mxArray**)outputs);
    }
    else
        mexErrMsgIdAndTxt("petscKSPSetOperators:WrongNumberOfInputs","Incorrect number of input variables for entry-point petscKSPSetOperators.");

    /* Copy over outputs to the caller. */
    for (i = 0; i < nOutputs; ++i) {
        plhs[i] = outputs[i];
    }
}