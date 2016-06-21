/*
 * sys/codegen/lib/petscGetSizeof/petscGetSizeof_mex.c
 *
 * Auxiliary code for mexFunction of petscGetSizeof
 *
 * C source code generated by m2c.
 * %#m2c options:51b8dc0108e27c00e7ef7a1c186f5f18
 *
 */

#ifdef MATLAB_MEX_FILE
#include "mex.h"
#else
#include "matrix.h"
#endif
/* Include the C header file generated by codegen in lib mode */
#include "petscGetSizeof.h"
#include "m2c.c"

/* Include declaration of some helper functions. */
#include "lib2mex_helper.c"


static void __petscGetSizeof_api(mxArray **plhs, const mxArray ** prhs) {
    emxArray_char_T      name;
    int32_T             *sz;
    boolean_T           *toplevel;

    /* Marshall in inputs and preallocate outputs */
    if (mxGetNumberOfElements(prhs[0]) && mxGetClassID(prhs[0]) != mxCHAR_CLASS)
        mexErrMsgIdAndTxt("petscGetSizeof:WrongInputType",
            "Input argument name has incorrect data type; char is expected.");
    if (mxGetNumberOfElements(prhs[0]) && mxGetDimensions(prhs[0])[0] != 1) 
        mexErrMsgIdAndTxt("petscGetSizeof:WrongSizeOfInputArg",
            "Dimension 1 of name should equal 1.");
    alias_mxArray_to_emxArray(prhs[0], (emxArray__common *)(&name), "name", 2);

    sz = mxMalloc(sizeof(int32_T));

    toplevel = mxMalloc(sizeof(boolean_T));

    /* Invoke the target function */
    petscGetSizeof(&name, sz, toplevel);

    /* Deallocate input and marshall out function outputs */
    free_emxArray((emxArray__common*)(&name));
    plhs[0] = move_scalar_to_mxArray(sz, mxINT32_CLASS);
    plhs[1] = move_scalar_to_mxArray(toplevel, mxLOGICAL_CLASS);

}


void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    /* Temporary copy for mex outputs. */
    mxArray *outputs[2];
    int i;
    int nOutputs = (nlhs < 1 ? 1 : nlhs);

    if (nrhs == 1) {
        if (nlhs > 2)
            mexErrMsgIdAndTxt("petscGetSizeof:TooManyOutputArguments",
                "Too many output arguments for entry-point petscGetSizeof.\n");
        /* Call the API function. */
        __petscGetSizeof_api(outputs, prhs);
    }
    else
        mexErrMsgIdAndTxt("petscGetSizeof:WrongNumberOfInputs",
            "Incorrect number of input variables for entry-point petscGetSizeof.");

    /* Copy over outputs to the caller. */
    for (i = 0; i < nOutputs; ++i) {
        plhs[i] = outputs[i];
    }
}
