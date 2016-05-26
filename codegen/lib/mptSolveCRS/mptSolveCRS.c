/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mptSolveCRS.c
 *
 * Code generation for function 'mptSolveCRS'
 *
 */

/* Include files */
#include "mptSolveCRS.h"

/* Custom Source Code */
#include "mpetsc.h"
#include "m2c.h"

/* Type Definitions */
#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray__common*/

#ifndef typedef_emxArray__common
#define typedef_emxArray__common

typedef struct emxArray__common emxArray__common;

#endif                                 /*typedef_emxArray__common*/

#ifndef struct_emxArray_uint8_T
#define struct_emxArray_uint8_T

struct emxArray_uint8_T
{
  unsigned char *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_uint8_T*/

#ifndef typedef_emxArray_uint8_T
#define typedef_emxArray_uint8_T

typedef struct emxArray_uint8_T emxArray_uint8_T;

#endif                                 /*typedef_emxArray_uint8_T*/

/* Function Declarations */
static void ab_m2c_error(int varargin_3);
static void b_m2c_error(int varargin_3);
static void b_m2c_printf(double varargin_2, int varargin_3);
static void b_mptKSPSetup(Mat Amat, const emxArray_char_T *ksptype, const
  emxArray_char_T *pctype, const emxArray_char_T *pcopt, KSP *ksp, double *time);
static void b_mptKSPSolve(KSP ksp, Vec b, Vec x, double rtol, int maxits, Vec x0,
  int *flag, double *relres, int *iter, emxArray_real_T *reshis, double *time);
static void bb_m2c_error(int varargin_3);
static void c_m2c_error(int varargin_3);
static void c_m2c_printf(double varargin_2, double varargin_3);
static void cb_m2c_error(int varargin_3);
static void d_m2c_error(int varargin_3);
static void d_m2c_printf(int varargin_2, double varargin_3);
static void db_m2c_error(int varargin_3);
static void e_m2c_error(int varargin_3);
static void e_m2c_printf(void);
static void eb_m2c_error(int varargin_3);
static void emxFree_uint8_T(emxArray_uint8_T **pEmxArray);
static void emxInit_int32_T1(emxArray_int32_T **pEmxArray, int numDimensions);
static void emxInit_uint8_T(emxArray_uint8_T **pEmxArray, int numDimensions);
static void f_m2c_error(int varargin_3);
static void fb_m2c_error(int varargin_3);
static void g_m2c_error(int varargin_3);
static void gb_m2c_error(int varargin_3);
static void h_m2c_error(int varargin_3);
static void hb_m2c_error(int varargin_3);
static void i_m2c_error(int varargin_3);
static void ib_m2c_error(int varargin_3);
static void j_m2c_error(int varargin_3);
static void jb_m2c_error(int varargin_3);
static void k_m2c_error(int varargin_3);
static void kb_m2c_error(int varargin_3);
static void l_m2c_error(int varargin_3);
static void lb_m2c_error(void);
static void m2c_error(int varargin_3);
static void m2c_printf(KSPType varargin_2, PCType varargin_3, const
  emxArray_char_T *varargin_4, int varargin_5);
static void m_m2c_error(const emxArray_char_T *varargin_3);
static void mb_m2c_error(int varargin_3);
static void mpi_Barrier(MPI_Comm comm);
static void mptKSPSetup(Mat Amat, const emxArray_char_T *ksptype, KSP *ksp,
  double *time);
static void mptKSPSolve(KSP ksp, Vec b, Vec x, Vec x0, int *flag, double *relres,
  int *iter, emxArray_real_T *reshis, double *time);
static Mat mptMatCreateAIJFromCRS(const emxArray_int32_T *row_ptr, const
  emxArray_int32_T *col_ind, const emxArray_real_T *val);
static void mptSolve(Mat A, Vec b, Vec x, const emxArray_char_T *solver, double
                     rtol, int maxit, const emxArray_char_T *pctype, const
                     emxArray_char_T *pcopt, Vec x0, int *flag, double *relres,
                     int *iter, emxArray_real_T *reshis, double times[2]);
static Vec mptVecCreateFromArray(const emxArray_real_T *arr);
static void mptVecToArray(Vec vec, emxArray_real_T *arr);
static void n_m2c_error(int varargin_3);
static void nb_m2c_error(int varargin_3);
static void o_m2c_error(int varargin_3);
static void ob_m2c_error(int varargin_3);
static void p_m2c_error(int varargin_3);
static void pb_m2c_error(int varargin_3);
static void q_m2c_error(int varargin_3);
static void qb_m2c_error(void);
static void r_m2c_error(int varargin_3);
static void rb_m2c_error(int varargin_3);
static void s_m2c_error(int varargin_3);
static void t_m2c_error(int varargin_3);
static void u_m2c_error(int varargin_3);
static void v_m2c_error(int varargin_3);
static void w_m2c_error(int varargin_3);
static void x_m2c_error(int varargin_3);
static void y_m2c_error(int varargin_3);

/* Function Definitions */

/*
 * function m2c_error(varargin)
 */
static void ab_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError",
            "KSPGetIterationNumber returned error code %d\n", varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void b_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "MatSetValues returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_printf(varargin)
 */
static void b_m2c_printf(double varargin_2, int varargin_3)
{
  /* m2c_printf Issue an informational message. */
  /*   */
  /*  m2c_printf(msg); */
  /*  m2c_printf(fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_printf('Message in a constant string does not need to be null-terminated.'); */
  /*     m2c_printf('Msg ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_error, m2c_warn */
  /* 'm2c_printf:17' coder.inline('never'); */
  /* 'm2c_printf:19' if isempty(coder.target) */
  /* 'm2c_printf:21' else */
  /* 'm2c_printf:22' if isequal(coder.target, 'mex') */
  /* 'm2c_printf:24' else */
  /* 'm2c_printf:25' cmd = 'M2C_printf'; */
  /* 'm2c_printf:27' assert(nargin>=1); */
  /* 'm2c_printf:28' fmt = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_printf:29' coder.ceval(cmd, fmt, varargin{2:end}); */
  M2C_printf("### The relative residual was %g after %d iterations.\n",
             varargin_2, varargin_3);
}

/*
 * function [ksp, time, toplevel] = mptKSPSetup(Amat, ksptype, pctype, pcopt)
 */
static void b_mptKSPSetup(Mat Amat, const emxArray_char_T *ksptype, const
  emxArray_char_T *pctype, const emxArray_char_T *pcopt, KSP *ksp, double *time)
{
  PetscObject t_obj;
  MPI_Comm t_comm;
  int errCode;
  int k;
  KSP t_ksp;
  double t;
  boolean_T p;
  boolean_T b_p;
  emxArray_char_T *pctype0;
  int i4;
  PC t_pc;
  int exitg6;
  boolean_T exitg5;
  static const char cv9[4] = { 'l', 'e', 'f', 't' };

  int exitg4;
  boolean_T exitg3;
  static const char cv10[5] = { 'r', 'i', 'g', 'h', 't' };

  int exitg2;
  boolean_T exitg1;
  static const char cv11[9] = { 's', 'y', 'm', 'm', 'e', 't', 'r', 'i', 'c' };

  double secs;

  /*  Sets up KSP using the given matrix (matrices). */
  /*  */
  /*  Syntax: */
  /*   ksp = mptKSPSetup(A) */
  /*   ksp = mptKSPSetup(A, ksptype) */
  /*   ksp = mptKSPSetup(A, ksptype, pctype) */
  /*   ksp = mptKSPSetup(A, ksptype, pctype, pcopt) */
  /*  */
  /*  Description: */
  /*   ksp = mptKSPSetup(A) sets up a KSP using matrix A. */
  /*  */
  /*   ksp = mptKSPSetup(A, ksptype) uses the specified type of the KSP. */
  /*  */
  /*   ksp = mptKSPSetup(A, ksptype, pctype) also sets the type of the KSP */
  /*     and the preconditioner. Note that pctype can be NULL. */
  /*  */
  /*   ksp = mptKSPSetup(A, ksptype, pctype, pcopt) aspecifies additional */
  /*     control options for the preconditioner. It can be PETSC_MATSOLVER*, */
  /*     which is useful when the ksptype is PETSC_KSPPREONLY, and the pctype */
  /*     is a direct method (such as PETSC_PCLU or PETSC_PCCHOLESKY). Otherwise, */
  /*     it may be 'left', 'right', or 'symmetric' (without null-terminator) */
  /*     to choose to use left, right, or symmetric preconditioners. By */
  /*     default, PETSc uses left preconditioners. */
  /*  */
  /*  See Also: mptKSPSolve, mptKSPCleanup */
  /* 'mptKSPSetup:33' t_Amat = Amat; */
  /* 'mptKSPSetup:34' t_ksp = petscKSPCreate(petscObjectGetComm(t_Amat)); */
  /* Gets the MPI communicator for any PetscObject, regardless of the type.  */
  /*  */
  /*   [comm, errCode] = petscObjectGetComm(obj) */
  /*  */
  /*   obtains the MPI_Comm associated with the PetscObject. */
  /*  */
  /*   SEE ALSO: petscMatSetType, petscMatSetFromOptions */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  PetscObjectGetComm(PetscObject obj,MPI_Comm *comm) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscObjectGetComm.html */
  /* 'petscObjectGetComm:16' errCode = int32(-1); */
  /* 'petscObjectGetComm:18' if ~isempty(coder.target) */
  /* 'petscObjectGetComm:19' t_obj = PetscObject(obj); */
  /* Map an opaque object into a PETSc PetscObject object */
  /*  */
  /*   obj = PetscObject() simply returns a definition of the */
  /*   m2c_opaque_type definition, suitable in the argument */
  /*   specification for codegen. */
  /*  */
  /*   obj = PetscObject(arg) or obj = PetscObject(arg, false) converts */
  /*   arg into a PETSc Object object. */
  /*  */
  /*   obj = PetscObject(arg, 'wrap') or obj = PetscObject(arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the  */
  /*   object needs to be returned to MATLAB. Note that the value of  */
  /*   opaque must be determined at compile time. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscObject:18' coder.inline('always'); */
  /* 'PetscObject:20' if nargin==0 && isempty(coder.target) */
  /* 'PetscObject:25' if isstruct(arg) && ~isequal(arg.type, 'PetscObject') && ... */
  /* 'PetscObject:26'         ~isequal(arg.type, 'Mat') && ~isequal(arg.type, 'Vec') && ... */
  /* 'PetscObject:27'         ~isequal(arg.type, 'KSP') && ~isequal(arg.type, 'PC') */
  /* 'PetscObject:32' if ~isstruct(arg) || isempty(coder.target) */
  /* 'PetscObject:33' if nargin==1 || ischar(wrap) || ~wrap */
  /* 'PetscObject:34' obj = coder.opaque('PetscObject'); */
  /* 'PetscObject:35' obj = coder.ceval('(PetscObject)', arg); */
  t_obj = (PetscObject)(Amat);

  /* 'petscObjectGetComm:20' t_comm = coder.opaque('MPI_Comm'); */
  /* 'petscObjectGetComm:22' errCode = coder.ceval('PetscObjectGetComm', t_obj, coder.wref(t_comm)); */
  errCode = PetscObjectGetComm(t_obj, &t_comm);

  /* 'petscObjectGetComm:24' toplevel = nargout>2; */
  /* 'petscObjectGetComm:25' comm = MPI_Comm(t_comm, toplevel); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscObjectGetComm:27' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    k = (M2C_DEBUG);
    if (k != 0) {
      /* 'petscObjectGetComm:28' m2c_error('petsc:RuntimeError', 'PetscObjectGetComm returned error code %d\n', errCode) */
      j_m2c_error(errCode);
    }
  }

  /* Creates a preconditioner context. */
  /*  */
  /*   [ksp, errCode] = petscKSPCreate */
  /*       creates a PETSc KSP using PETSC_COMM_WORLD */
  /*  */
  /*   [ksp, errCode] = petscKSPCreate(comm) */
  /*       comm: MPI Communicator */
  /*  */
  /*   SEE ALSO: petscKSPSetUp, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPCreate(MPI_Comm comm,KSP *ksp) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPCreate.html */
  /* 'petscKSPCreate:18' errCode = int32(-1); */
  /* 'petscKSPCreate:20' if ~isempty(coder.target) */
  /* 'petscKSPCreate:21' t_ksp = coder.opaque('KSP'); */
  /* 'petscKSPCreate:23' if nargin==0 */
  /* 'petscKSPCreate:25' else */
  /* 'petscKSPCreate:26' t_comm = MPI_Comm(comm); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPCreate:29' errCode = coder.ceval('KSPCreate', t_comm, coder.wref(t_ksp)); */
  errCode = KSPCreate(t_comm, &t_ksp);

  /* 'petscKSPCreate:31' toplevel = nargout>2; */
  /* 'petscKSPCreate:32' ksp = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPCreate:34' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    k = (M2C_DEBUG);
    if (k != 0) {
      /* 'petscKSPCreate:35' m2c_error('petsc:RuntimeError', 'KSPCreate returned error code %d\n', errCode) */
      k_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:36' if nargout>1 */
  /* 'mptKSPSetup:37' time = 0; */
  /* 'mptKSPSetup:38' comm = petscObjectGetComm(t_ksp); */
  /* Gets the MPI communicator for any PetscObject, regardless of the type.  */
  /*  */
  /*   [comm, errCode] = petscObjectGetComm(obj) */
  /*  */
  /*   obtains the MPI_Comm associated with the PetscObject. */
  /*  */
  /*   SEE ALSO: petscMatSetType, petscMatSetFromOptions */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  PetscObjectGetComm(PetscObject obj,MPI_Comm *comm) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscObjectGetComm.html */
  /* 'petscObjectGetComm:16' errCode = int32(-1); */
  /* 'petscObjectGetComm:18' if ~isempty(coder.target) */
  /* 'petscObjectGetComm:19' t_obj = PetscObject(obj); */
  /* Map an opaque object into a PETSc PetscObject object */
  /*  */
  /*   obj = PetscObject() simply returns a definition of the */
  /*   m2c_opaque_type definition, suitable in the argument */
  /*   specification for codegen. */
  /*  */
  /*   obj = PetscObject(arg) or obj = PetscObject(arg, false) converts */
  /*   arg into a PETSc Object object. */
  /*  */
  /*   obj = PetscObject(arg, 'wrap') or obj = PetscObject(arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the  */
  /*   object needs to be returned to MATLAB. Note that the value of  */
  /*   opaque must be determined at compile time. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscObject:18' coder.inline('always'); */
  /* 'PetscObject:20' if nargin==0 && isempty(coder.target) */
  /* 'PetscObject:25' if isstruct(arg) && ~isequal(arg.type, 'PetscObject') && ... */
  /* 'PetscObject:26'         ~isequal(arg.type, 'Mat') && ~isequal(arg.type, 'Vec') && ... */
  /* 'PetscObject:27'         ~isequal(arg.type, 'KSP') && ~isequal(arg.type, 'PC') */
  /* 'PetscObject:32' if ~isstruct(arg) || isempty(coder.target) */
  /* 'PetscObject:33' if nargin==1 || ischar(wrap) || ~wrap */
  /* 'PetscObject:34' obj = coder.opaque('PetscObject'); */
  /* 'PetscObject:35' obj = coder.ceval('(PetscObject)', arg); */
  t_obj = (PetscObject)(t_ksp);

  /* 'petscObjectGetComm:20' t_comm = coder.opaque('MPI_Comm'); */
  /* 'petscObjectGetComm:22' errCode = coder.ceval('PetscObjectGetComm', t_obj, coder.wref(t_comm)); */
  errCode = PetscObjectGetComm(t_obj, &t_comm);

  /* 'petscObjectGetComm:24' toplevel = nargout>2; */
  /* 'petscObjectGetComm:25' comm = MPI_Comm(t_comm, toplevel); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscObjectGetComm:27' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    k = (M2C_DEBUG);
    if (k != 0) {
      /* 'petscObjectGetComm:28' m2c_error('petsc:RuntimeError', 'PetscObjectGetComm returned error code %d\n', errCode) */
      j_m2c_error(errCode);
    }
  }

  /*  When timing the run, use mpi_Barrier for more accurate results. */
  /* 'mptKSPSetup:40' mpi_Barrier(comm); */
  mpi_Barrier(t_comm);

  /* 'mptKSPSetup:41' t = mpi_Wtime(); */
  /* mpi_Wtime    Returns an elapsed time on the calling processor */
  /*  */
  /*   secs = mpi_Wtime */
  /*  */
  /*   secs (double) Time in seconds since an arbitrary time in the past */
  /*  */
  /*   SEE ALSO: mpi_Wtick */
  /*  */
  /*  C interface: */
  /*  double MPI_Wtime(void) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Wtime.html */
  /* 'mpi_Wtime:17' secs = 0; */
  /* 'mpi_Wtime:18' secs = coder.ceval('MPI_Wtime'); */
  t = MPI_Wtime();

  /*  Setup KSP */
  /* 'mptKSPSetup:45' petscKSPSetOperators(t_ksp, PetscMat(t_Amat)); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* Sets the matrix associated with the linear system and a (possibly) */
  /* different one associated with the preconditioner. */
  /*  */
  /*   errCode = petscKSPSetOperators(ksp, Amat) */
  /*  */
  /*   sets the matrix to be Amat and use the same matrix to construct the */
  /*   preconditioner. */
  /*      ksp - iterative context obtained from petscKSPCreate */
  /*      Amat	  - the right hand side vector */
  /*  */
  /*   errCode = petscKSPSetOperators(ksp, Amat, Pmat) */
  /*  */
  /*   uses the matrix Pmat to construct the preconditioner. */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetUp, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetOperators(KSP ksp,Mat Amat,Mat Pmat) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetOperators.html */
  /* 'petscKSPSetOperators:25' errCode = int32(-1); */
  /* 'petscKSPSetOperators:27' if ~isempty(coder.target) */
  /* 'petscKSPSetOperators:28' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetOperators:29' t_Amat = PetscMat(Amat); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetOperators:31' if nargin==2 */
  /* 'petscKSPSetOperators:32' t_Pmat = t_Amat; */
  /* 'petscKSPSetOperators:37' errCode = coder.ceval('KSPSetOperators', t_ksp, t_Amat, t_Pmat); */
  errCode = KSPSetOperators(t_ksp, Amat, Amat);

  /* 'petscKSPSetOperators:39' toplevel = nargout>1; */
  /* 'petscKSPSetOperators:40' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    k = (M2C_DEBUG);
    if (k != 0) {
      /* 'petscKSPSetOperators:41' m2c_error('petsc:RuntimeError', 'KSPSetOperators returned error code %d\n', errCode) */
      n_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:47' if nargin>1 */
  /* 'mptKSPSetup:48' if nargin>2 */
  /* 'mptKSPSetup:49' hasPC = ~ischar(pctype) || ~isempty(pctype); */
  p = !(pctype->size[1] == 0);

  /* 'mptKSPSetup:50' hasOpt = nargin>3 && (~ischar(pcopt) || ~isempty(pcopt)); */
  b_p = !(pcopt->size[1] == 0);

  /* 'mptKSPSetup:52' if hasPC || hasOpt */
  emxInit_char_T(&pctype0, 2);
  if (p || b_p) {
    /* 'mptKSPSetup:53' t_pc = petscKSPGetPC(t_ksp); */
    /* Returns a pointer to the preconditioner context set with petscKSPSetPC. */
    /*  */
    /*   [pc, errCode] = petscKSPGetPC(ksp) gets the PC of the KSP */
    /*  */
    /*   SEE ALSO:  petscKSPSetPC */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPGetPC(KSP ksp,PC *pc) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetPC.html */
    /* 'petscKSPGetPC:14' errCode = int32(-1); */
    /* 'petscKSPGetPC:16' if ~isempty(coder.target) */
    /* 'petscKSPGetPC:17' t_pc = coder.opaque('PC'); */
    /* 'petscKSPGetPC:18' errCode = coder.ceval('KSPGetPC', PetscKSP(ksp), coder.wref(t_pc)); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPGetPC(t_ksp, &t_pc);

    /* 'petscKSPGetPC:20' toplevel = nargout>2; */
    /* 'petscKSPGetPC:21' pc = PetscPC(t_pc, toplevel); */
    /* Map an opaque object into a PETSc PC object */
    /*  */
    /*   PetscPC() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscPC(obj) or PetscPC(obj, false) converts arg into a PETSc PC object. */
    /*  */
    /*   PetscPC(arg, 'wrap') or PetscPC(obj, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscPC:14' coder.inline('always'); */
    /* 'PetscPC:16' pc = m2c_opaque_obj('PC', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    /* 'petscKSPGetPC:23' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      k = (M2C_DEBUG);
      if (k != 0) {
        /* 'petscKSPGetPC:24' m2c_error('petsc:RuntimeError', 'KSPGetPC returned error code %d\n', errCode) */
        cb_m2c_error(errCode);
      }
    }

    /* 'mptKSPSetup:55' if hasPC */
    if (p) {
      /* 'mptKSPSetup:56' if ischar(pctype) && pctype(end)~=char(0) */
      if (pctype->data[pctype->size[1] - 1] != '\x00') {
        /*  null-terminate the string if not terminated properly */
        /* 'mptKSPSetup:58' pctype0 = [pctype char(0)]; */
        i4 = pctype0->size[0] * pctype0->size[1];
        pctype0->size[0] = 1;
        pctype0->size[1] = pctype->size[1] + 1;
        emxEnsureCapacity((emxArray__common *)pctype0, i4, (int)sizeof(char));
        k = pctype->size[1];
        for (i4 = 0; i4 < k; i4++) {
          pctype0->data[pctype0->size[0] * i4] = pctype->data[pctype->size[0] *
            i4];
        }

        pctype0->data[pctype0->size[0] * pctype->size[1]] = '\x00';
      } else {
        /* 'mptKSPSetup:59' else */
        /* 'mptKSPSetup:60' pctype0 = pctype; */
        i4 = pctype0->size[0] * pctype0->size[1];
        pctype0->size[0] = 1;
        pctype0->size[1] = pctype->size[1];
        emxEnsureCapacity((emxArray__common *)pctype0, i4, (int)sizeof(char));
        k = pctype->size[0] * pctype->size[1];
        for (i4 = 0; i4 < k; i4++) {
          pctype0->data[i4] = pctype->data[i4];
        }
      }

      /* 'mptKSPSetup:62' petscPCSetType(t_pc, pctype0); */
      /* Builds PC for a particular solver. */
      /*  */
      /*   errCode = petscPCSetType(pc, type) sets the type of the PC */
      /*  */
      /*   SEE ALSO:  PetscPCSetType, petscPCCreate */
      /*  */
      /*  PETSc C interface: */
      /*    PetscErrorCode  PCSetType(PC pc, PCType type) */
      /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/PC/PCSetType.html */
      /* 'petscPCSetType:14' errCode = int32(-1); */
      /* 'petscPCSetType:16' if ~isempty(coder.target) */
      /* 'petscPCSetType:17' if ischar(type) */
      /* 'petscPCSetType:18' errCode = coder.ceval('PCSetType', PetscPC(pc), coder.rref(type)); */
      /* Map an opaque object into a PETSc PC object */
      /*  */
      /*   PetscPC() simply returns a definition of the m2c_opaque_type, */
      /*   suitable in the argument type specification for codegen. */
      /*  */
      /*   PetscPC(obj) or PetscPC(obj, false) converts arg into a PETSc PC object. */
      /*  */
      /*   PetscPC(arg, 'wrap') or PetscPC(obj, true) wraps the arg into an opaque */
      /*   object. This should be used if the object needs to be returned to MATLAB. */
      /*  */
      /*  See also PetscPC */
      /* 'PetscPC:14' coder.inline('always'); */
      /* 'PetscPC:16' pc = m2c_opaque_obj('PC', varargin{:}); */
      /* Maps between C opaque object and a MATLAB structure. */
      /*  */
      /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
      /*   definition of the m2c_opaque_type, suitable in the argument type */
      /*   specification for codegen. */
      /*  */
      /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
      /*   arg into an object of give data type. */
      /*  */
      /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
      /*   wraps the arg into an opaque object. This should be used if the opaque */
      /*   object needs to be returned to MATLAB. Note that the third argument */
      /*   must be determined at compile time. */
      /*  */
      /*  See also m2c_opaque_array, m2c_opaque_ptr */
      /*  Undocumented use: */
      /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
      /*   into an opaque object. This is for internal use by */
      /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
      /* 'm2c_opaque_obj:23' coder.inline('always'); */
      /* 'm2c_opaque_obj:26' if nargin<=1 */
      /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
      /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
      /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
      /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
      /* 'm2c_opaque_obj:43' obj = arg; */
      errCode = PCSetType(t_pc, &pctype0->data[0]);

      /* 'petscPCSetType:23' toplevel = nargout>1; */
      /* 'petscPCSetType:24' if errCode && (toplevel || m2c_debug) */
      if (errCode != 0) {
        /* Flag indicating whether m2c_debug is on. */
        /* It is always true within MATLAB. In the generated C code, it is */
        /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
        /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
        /* 'm2c_debug:7' coder.inline('always'); */
        /* 'm2c_debug:9' if isempty(coder.target) */
        /* 'm2c_debug:11' else */
        /* 'm2c_debug:12' flag = int32(1); */
        /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
        k = (M2C_DEBUG);
        if (k != 0) {
          /* 'petscPCSetType:25' m2c_error('petsc:RuntimeError', 'PCSetType returned error code %d\n', errCode) */
          ob_m2c_error(errCode);
        }
      }
    }

    /* 'mptKSPSetup:65' if hasOpt */
    if (b_p) {
      /* 'mptKSPSetup:66' if isequal(pcopt, 'left') */
      p = false;
      b_p = false;
      k = 0;
      do {
        exitg6 = 0;
        if (k < 2) {
          i4 = pcopt->size[k];
          if (i4 != 3 * k + 1) {
            exitg6 = 1;
          } else {
            k++;
          }
        } else {
          b_p = true;
          exitg6 = 1;
        }
      } while (exitg6 == 0);

      if (b_p && (!(pcopt->size[1] == 0))) {
        k = 0;
        exitg5 = false;
        while ((!exitg5) && (k < 4)) {
          if (!(pcopt->data[k] == cv9[k])) {
            b_p = false;
            exitg5 = true;
          } else {
            k++;
          }
        }
      }

      if (!b_p) {
      } else {
        p = true;
      }

      if (p) {
        /* 'mptKSPSetup:67' petscKSPSetPCSide(t_ksp, PETSC_PC_LEFT); */
        /*  Obtain PETSC constant PC_LEFT */
        /* 'PETSC_PC_LEFT:4' coder.inline('always'); */
        /* 'PETSC_PC_LEFT:6' val = petscGetEnum('PC_LEFT'); */
        /* petscGetEnum Obtain an enumerate value in PETSC */
        /*  */
        /*     val = petscGetEnum(name) */
        /*  */
        /* The supported names include: */
        /*  */
        /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
        /*  */
        /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
        /*       VEC_SUBSET_OFF_PROC_ENTRIES */
        /*  */
        /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
        /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
        /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
        /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
        /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
        /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
        /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
        /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
        /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
        /*       MAT_SUBSET_OFF_PROC_ENTRIES */
        /*  */
        /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
        /*  */
        /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
        /*  */
        /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
        /*  */
        /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
        /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
        /*  */
        /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
        /*  */
        /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
        /*  */
        /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
        /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
        /*  */
        /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
        /*  */
        /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
        /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
        /*  */
        /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
        /*  */
        /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
        /* 'petscGetEnum:51' if isempty(coder.target) */
        /* % InsertMode */
        /* 'petscGetEnum:56' switch name */
        /* 'petscGetEnum:179' case 'PC_LEFT' */
        /* 'petscGetEnum:180' [val, toplevel] = get_val('PetscInt', 'PC_LEFT', nargin>1); */
        /* 'petscGetEnum:201' coder.inline('always'); */
        /* 'petscGetEnum:203' val = int32(intmin); */
        /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
        k = (PC_LEFT);

        /* Sets the preconditioning side. */
        /*  */
        /*   errCode = petscKSPSetPCSide(ksp, side) sets the side of the KSP */
        /*  */
        /*   SEE ALSO:  petscKSPGetPCSide */
        /*  */
        /*  PETSc C interface: */
        /*    PetscErrorCode  KSPSetPCSide(KSP ksp, PCSide side) */
        /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetPCSide.html */
        /* 'petscKSPSetPCSide:14' errCode = int32(-1); */
        /* 'petscKSPSetPCSide:16' if ~isempty(coder.target) */
        /* 'petscKSPSetPCSide:17' errCode = coder.ceval('KSPSetPCSide', PetscKSP(ksp), side); */
        /* Map an opaque object into a PETSc KSP object */
        /*  */
        /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
        /*   suitable in the argument type specification for codegen. */
        /*  */
        /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
        /*  */
        /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
        /*   object. This should be used if the object needs to be returned to MATLAB. */
        /*  */
        /*  See also PetscPC */
        /* 'PetscKSP:14' coder.inline('always'); */
        /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
        /* Maps between C opaque object and a MATLAB structure. */
        /*  */
        /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
        /*   definition of the m2c_opaque_type, suitable in the argument type */
        /*   specification for codegen. */
        /*  */
        /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
        /*   arg into an object of give data type. */
        /*  */
        /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
        /*   wraps the arg into an opaque object. This should be used if the opaque */
        /*   object needs to be returned to MATLAB. Note that the third argument */
        /*   must be determined at compile time. */
        /*  */
        /*  See also m2c_opaque_array, m2c_opaque_ptr */
        /*  Undocumented use: */
        /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
        /*   into an opaque object. This is for internal use by */
        /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
        /* 'm2c_opaque_obj:23' coder.inline('always'); */
        /* 'm2c_opaque_obj:26' if nargin<=1 */
        /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
        /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
        /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
        /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
        /* 'm2c_opaque_obj:43' obj = arg; */
        errCode = KSPSetPCSide(t_ksp, k);

        /* 'petscKSPSetPCSide:19' toplevel = nargout>1; */
        /* 'petscKSPSetPCSide:20' if errCode && (toplevel || m2c_debug) */
        if (errCode != 0) {
          /* Flag indicating whether m2c_debug is on. */
          /* It is always true within MATLAB. In the generated C code, it is */
          /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
          /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
          /* 'm2c_debug:7' coder.inline('always'); */
          /* 'm2c_debug:9' if isempty(coder.target) */
          /* 'm2c_debug:11' else */
          /* 'm2c_debug:12' flag = int32(1); */
          /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
          k = (M2C_DEBUG);
          if (k != 0) {
            /* 'petscKSPSetPCSide:21' m2c_error('petsc:RuntimeError', 'KSPSetPCSide returned error code %d\n', errCode) */
            o_m2c_error(errCode);
          }
        }
      } else {
        p = false;
        b_p = false;
        k = 0;
        do {
          exitg4 = 0;
          if (k < 2) {
            i4 = pcopt->size[k];
            if (i4 != (k << 2) + 1) {
              exitg4 = 1;
            } else {
              k++;
            }
          } else {
            b_p = true;
            exitg4 = 1;
          }
        } while (exitg4 == 0);

        if (b_p && (!(pcopt->size[1] == 0))) {
          k = 0;
          exitg3 = false;
          while ((!exitg3) && (k < 5)) {
            if (!(pcopt->data[k] == cv10[k])) {
              b_p = false;
              exitg3 = true;
            } else {
              k++;
            }
          }
        }

        if (!b_p) {
        } else {
          p = true;
        }

        if (p) {
          /* 'mptKSPSetup:68' elseif isequal(pcopt, 'right') */
          /* 'mptKSPSetup:69' petscKSPSetPCSide(t_ksp, PETSC_PC_RIGHT); */
          /*  Obtain PETSC constant PC_RIGHT */
          /* 'PETSC_PC_RIGHT:4' coder.inline('always'); */
          /* 'PETSC_PC_RIGHT:6' val = petscGetEnum('PC_RIGHT'); */
          /* petscGetEnum Obtain an enumerate value in PETSC */
          /*  */
          /*     val = petscGetEnum(name) */
          /*  */
          /* The supported names include: */
          /*  */
          /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
          /*  */
          /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
          /*       VEC_SUBSET_OFF_PROC_ENTRIES */
          /*  */
          /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
          /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
          /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
          /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
          /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
          /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
          /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
          /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
          /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
          /*       MAT_SUBSET_OFF_PROC_ENTRIES */
          /*  */
          /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
          /*  */
          /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
          /*  */
          /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
          /*  */
          /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
          /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
          /*  */
          /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
          /*  */
          /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
          /*  */
          /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
          /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
          /*  */
          /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
          /*  */
          /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
          /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
          /*  */
          /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
          /*  */
          /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
          /* 'petscGetEnum:51' if isempty(coder.target) */
          /* % InsertMode */
          /* 'petscGetEnum:56' switch name */
          /* 'petscGetEnum:181' case 'PC_RIGHT' */
          /* 'petscGetEnum:182' [val, toplevel] = get_val('PetscInt', 'PC_RIGHT', nargin>1); */
          /* 'petscGetEnum:201' coder.inline('always'); */
          /* 'petscGetEnum:203' val = int32(intmin); */
          /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
          k = (PC_RIGHT);

          /* Sets the preconditioning side. */
          /*  */
          /*   errCode = petscKSPSetPCSide(ksp, side) sets the side of the KSP */
          /*  */
          /*   SEE ALSO:  petscKSPGetPCSide */
          /*  */
          /*  PETSc C interface: */
          /*    PetscErrorCode  KSPSetPCSide(KSP ksp, PCSide side) */
          /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetPCSide.html */
          /* 'petscKSPSetPCSide:14' errCode = int32(-1); */
          /* 'petscKSPSetPCSide:16' if ~isempty(coder.target) */
          /* 'petscKSPSetPCSide:17' errCode = coder.ceval('KSPSetPCSide', PetscKSP(ksp), side); */
          /* Map an opaque object into a PETSc KSP object */
          /*  */
          /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
          /*   suitable in the argument type specification for codegen. */
          /*  */
          /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
          /*  */
          /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
          /*   object. This should be used if the object needs to be returned to MATLAB. */
          /*  */
          /*  See also PetscPC */
          /* 'PetscKSP:14' coder.inline('always'); */
          /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
          /* Maps between C opaque object and a MATLAB structure. */
          /*  */
          /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
          /*   definition of the m2c_opaque_type, suitable in the argument type */
          /*   specification for codegen. */
          /*  */
          /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
          /*   arg into an object of give data type. */
          /*  */
          /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
          /*   wraps the arg into an opaque object. This should be used if the opaque */
          /*   object needs to be returned to MATLAB. Note that the third argument */
          /*   must be determined at compile time. */
          /*  */
          /*  See also m2c_opaque_array, m2c_opaque_ptr */
          /*  Undocumented use: */
          /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
          /*   into an opaque object. This is for internal use by */
          /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
          /* 'm2c_opaque_obj:23' coder.inline('always'); */
          /* 'm2c_opaque_obj:26' if nargin<=1 */
          /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
          /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
          /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
          /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
          /* 'm2c_opaque_obj:43' obj = arg; */
          errCode = KSPSetPCSide(t_ksp, k);

          /* 'petscKSPSetPCSide:19' toplevel = nargout>1; */
          /* 'petscKSPSetPCSide:20' if errCode && (toplevel || m2c_debug) */
          if (errCode != 0) {
            /* Flag indicating whether m2c_debug is on. */
            /* It is always true within MATLAB. In the generated C code, it is */
            /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
            /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
            /* 'm2c_debug:7' coder.inline('always'); */
            /* 'm2c_debug:9' if isempty(coder.target) */
            /* 'm2c_debug:11' else */
            /* 'm2c_debug:12' flag = int32(1); */
            /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
            k = (M2C_DEBUG);
            if (k != 0) {
              /* 'petscKSPSetPCSide:21' m2c_error('petsc:RuntimeError', 'KSPSetPCSide returned error code %d\n', errCode) */
              o_m2c_error(errCode);
            }
          }
        } else {
          p = false;
          b_p = false;
          k = 0;
          do {
            exitg2 = 0;
            if (k < 2) {
              i4 = pcopt->size[k];
              if (i4 != (k << 3) + 1) {
                exitg2 = 1;
              } else {
                k++;
              }
            } else {
              b_p = true;
              exitg2 = 1;
            }
          } while (exitg2 == 0);

          if (b_p && (!(pcopt->size[1] == 0))) {
            k = 0;
            exitg1 = false;
            while ((!exitg1) && (k < 9)) {
              if (!(pcopt->data[k] == cv11[k])) {
                b_p = false;
                exitg1 = true;
              } else {
                k++;
              }
            }
          }

          if (!b_p) {
          } else {
            p = true;
          }

          if (p) {
            /* 'mptKSPSetup:70' elseif isequal(pcopt, 'symmetric') */
            /* 'mptKSPSetup:71' petscKSPSetPCSide(t_ksp, PETSC_PC_SYMMETRIC); */
            /*  Obtain PETSC constant PC_SYMMETRIC */
            /* 'PETSC_PC_SYMMETRIC:4' coder.inline('always'); */
            /* 'PETSC_PC_SYMMETRIC:6' val = petscGetEnum('PC_SYMMETRIC'); */
            /* petscGetEnum Obtain an enumerate value in PETSC */
            /*  */
            /*     val = petscGetEnum(name) */
            /*  */
            /* The supported names include: */
            /*  */
            /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
            /*  */
            /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
            /*       VEC_SUBSET_OFF_PROC_ENTRIES */
            /*  */
            /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
            /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
            /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
            /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
            /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
            /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
            /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
            /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
            /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
            /*       MAT_SUBSET_OFF_PROC_ENTRIES */
            /*  */
            /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
            /*  */
            /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
            /*  */
            /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
            /*  */
            /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
            /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
            /*  */
            /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
            /*  */
            /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
            /*  */
            /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
            /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
            /*  */
            /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
            /*  */
            /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
            /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
            /*  */
            /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
            /*  */
            /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
            /* 'petscGetEnum:51' if isempty(coder.target) */
            /* % InsertMode */
            /* 'petscGetEnum:56' switch name */
            /* 'petscGetEnum:183' case 'PC_SYMMETRIC' */
            /* 'petscGetEnum:184' [val, toplevel] = get_val('PetscInt', 'PC_SYMMETRIC', nargin>1); */
            /* 'petscGetEnum:201' coder.inline('always'); */
            /* 'petscGetEnum:203' val = int32(intmin); */
            /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
            k = (PC_SYMMETRIC);

            /* Sets the preconditioning side. */
            /*  */
            /*   errCode = petscKSPSetPCSide(ksp, side) sets the side of the KSP */
            /*  */
            /*   SEE ALSO:  petscKSPGetPCSide */
            /*  */
            /*  PETSc C interface: */
            /*    PetscErrorCode  KSPSetPCSide(KSP ksp, PCSide side) */
            /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetPCSide.html */
            /* 'petscKSPSetPCSide:14' errCode = int32(-1); */
            /* 'petscKSPSetPCSide:16' if ~isempty(coder.target) */
            /* 'petscKSPSetPCSide:17' errCode = coder.ceval('KSPSetPCSide', PetscKSP(ksp), side); */
            /* Map an opaque object into a PETSc KSP object */
            /*  */
            /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
            /*   suitable in the argument type specification for codegen. */
            /*  */
            /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
            /*  */
            /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
            /*   object. This should be used if the object needs to be returned to MATLAB. */
            /*  */
            /*  See also PetscPC */
            /* 'PetscKSP:14' coder.inline('always'); */
            /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
            /* Maps between C opaque object and a MATLAB structure. */
            /*  */
            /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
            /*   definition of the m2c_opaque_type, suitable in the argument type */
            /*   specification for codegen. */
            /*  */
            /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
            /*   arg into an object of give data type. */
            /*  */
            /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
            /*   wraps the arg into an opaque object. This should be used if the opaque */
            /*   object needs to be returned to MATLAB. Note that the third argument */
            /*   must be determined at compile time. */
            /*  */
            /*  See also m2c_opaque_array, m2c_opaque_ptr */
            /*  Undocumented use: */
            /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
            /*   into an opaque object. This is for internal use by */
            /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
            /* 'm2c_opaque_obj:23' coder.inline('always'); */
            /* 'm2c_opaque_obj:26' if nargin<=1 */
            /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
            /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
            /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
            /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
            /* 'm2c_opaque_obj:43' obj = arg; */
            errCode = KSPSetPCSide(t_ksp, k);

            /* 'petscKSPSetPCSide:19' toplevel = nargout>1; */
            /* 'petscKSPSetPCSide:20' if errCode && (toplevel || m2c_debug) */
            if (errCode != 0) {
              /* Flag indicating whether m2c_debug is on. */
              /* It is always true within MATLAB. In the generated C code, it is */
              /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
              /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
              /* 'm2c_debug:7' coder.inline('always'); */
              /* 'm2c_debug:9' if isempty(coder.target) */
              /* 'm2c_debug:11' else */
              /* 'm2c_debug:12' flag = int32(1); */
              /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
              k = (M2C_DEBUG);
              if (k != 0) {
                /* 'petscKSPSetPCSide:21' m2c_error('petsc:RuntimeError', 'KSPSetPCSide returned error code %d\n', errCode) */
                o_m2c_error(errCode);
              }
            }
          } else {
            /* 'mptKSPSetup:72' else */
            /* 'mptKSPSetup:73' if ischar(pcopt) && pcopt(end)~=char(0) */
            if (pcopt->data[pcopt->size[1] - 1] != '\x00') {
              /*  null-terminate the string if not terminated properly */
              /* 'mptKSPSetup:75' pcopt0 = [pcopt char(0)]; */
              i4 = pctype0->size[0] * pctype0->size[1];
              pctype0->size[0] = 1;
              pctype0->size[1] = pcopt->size[1] + 1;
              emxEnsureCapacity((emxArray__common *)pctype0, i4, (int)sizeof
                                (char));
              k = pcopt->size[1];
              for (i4 = 0; i4 < k; i4++) {
                pctype0->data[pctype0->size[0] * i4] = pcopt->data[pcopt->size[0]
                  * i4];
              }

              pctype0->data[pctype0->size[0] * pcopt->size[1]] = '\x00';
            } else {
              /* 'mptKSPSetup:76' else */
              /* 'mptKSPSetup:77' pcopt0 = pcopt; */
              i4 = pctype0->size[0] * pctype0->size[1];
              pctype0->size[0] = 1;
              pctype0->size[1] = pcopt->size[1];
              emxEnsureCapacity((emxArray__common *)pctype0, i4, (int)sizeof
                                (char));
              k = pcopt->size[0] * pcopt->size[1];
              for (i4 = 0; i4 < k; i4++) {
                pctype0->data[i4] = pcopt->data[i4];
              }
            }

            /* 'mptKSPSetup:79' petscPCFactorSetMatSolverPackage(t_pc,pcopt0); */
            /* Sets the software that is used to perform the factorization */
            /*  */
            /*   errCode = petscpetscPCFactorSetMatSolverPackage(pc, solver) sets the */
            /*        the solver to the given solver */
            /*  */
            /*   SEE ALSO:  PetscpetscPCFactorSetMatSolverPackage, petscPCCreate */
            /*  */
            /*  PETSc C interface: */
            /*    PetscErrorCode  PCFactorSetMatSolverPackage(PC pc,const MatSolverPackage ssolver) */
            /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/PC/petscPCFactorSetMatSolverPackage.html */
            /* 'petscPCFactorSetMatSolverPackage:15' errCode = int32(-1); */
            /* 'petscPCFactorSetMatSolverPackage:17' if ~isempty(coder.target) */
            /* 'petscPCFactorSetMatSolverPackage:18' if ischar(solver) */
            /* 'petscPCFactorSetMatSolverPackage:19' errCode = coder.ceval('PCFactorSetMatSolverPackage', ... */
            /* 'petscPCFactorSetMatSolverPackage:20'             PetscPC(pc), coder.rref(solver)); */
            /* Map an opaque object into a PETSc PC object */
            /*  */
            /*   PetscPC() simply returns a definition of the m2c_opaque_type, */
            /*   suitable in the argument type specification for codegen. */
            /*  */
            /*   PetscPC(obj) or PetscPC(obj, false) converts arg into a PETSc PC object. */
            /*  */
            /*   PetscPC(arg, 'wrap') or PetscPC(obj, true) wraps the arg into an opaque */
            /*   object. This should be used if the object needs to be returned to MATLAB. */
            /*  */
            /*  See also PetscPC */
            /* 'PetscPC:14' coder.inline('always'); */
            /* 'PetscPC:16' pc = m2c_opaque_obj('PC', varargin{:}); */
            /* Maps between C opaque object and a MATLAB structure. */
            /*  */
            /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
            /*   definition of the m2c_opaque_type, suitable in the argument type */
            /*   specification for codegen. */
            /*  */
            /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
            /*   arg into an object of give data type. */
            /*  */
            /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
            /*   wraps the arg into an opaque object. This should be used if the opaque */
            /*   object needs to be returned to MATLAB. Note that the third argument */
            /*   must be determined at compile time. */
            /*  */
            /*  See also m2c_opaque_array, m2c_opaque_ptr */
            /*  Undocumented use: */
            /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
            /*   into an opaque object. This is for internal use by */
            /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
            /* 'm2c_opaque_obj:23' coder.inline('always'); */
            /* 'm2c_opaque_obj:26' if nargin<=1 */
            /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
            /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
            /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
            /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
            /* 'm2c_opaque_obj:43' obj = arg; */
            errCode = PCFactorSetMatSolverPackage(t_pc, &pctype0->data[0]);

            /* 'petscPCFactorSetMatSolverPackage:27' toplevel = nargout>1; */
            /* 'petscPCFactorSetMatSolverPackage:28' if errCode && (toplevel || m2c_debug) */
            if (errCode != 0) {
              /* Flag indicating whether m2c_debug is on. */
              /* It is always true within MATLAB. In the generated C code, it is */
              /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
              /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
              /* 'm2c_debug:7' coder.inline('always'); */
              /* 'm2c_debug:9' if isempty(coder.target) */
              /* 'm2c_debug:11' else */
              /* 'm2c_debug:12' flag = int32(1); */
              /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
              k = (M2C_DEBUG);
              if (k != 0) {
                /* 'petscPCFactorSetMatSolverPackage:29' m2c_error('petsc:RuntimeError', 'petscPCFactorSetMatSolverPackage returned error code %d\n', errCode) */
                pb_m2c_error(errCode);
              }
            }
          }
        }
      }
    }
  }

  /* 'mptKSPSetup:85' if ischar(ksptype) && ~isempty(ksptype) && ksptype(end)~=0 */
  if ((!(ksptype->size[1] == 0)) && ((unsigned char)ksptype->data[ksptype->size
       [1] - 1] != 0)) {
    /*  null-terminate the string if not terminated properly */
    /* 'mptKSPSetup:87' ksptype0 = [ksptype char(0)]; */
    i4 = pctype0->size[0] * pctype0->size[1];
    pctype0->size[0] = 1;
    pctype0->size[1] = ksptype->size[1] + 1;
    emxEnsureCapacity((emxArray__common *)pctype0, i4, (int)sizeof(char));
    k = ksptype->size[1];
    for (i4 = 0; i4 < k; i4++) {
      pctype0->data[pctype0->size[0] * i4] = ksptype->data[ksptype->size[0] * i4];
    }

    pctype0->data[pctype0->size[0] * ksptype->size[1]] = '\x00';
  } else {
    /* 'mptKSPSetup:88' else */
    /* 'mptKSPSetup:89' ksptype0 = ksptype; */
    i4 = pctype0->size[0] * pctype0->size[1];
    pctype0->size[0] = 1;
    pctype0->size[1] = ksptype->size[1];
    emxEnsureCapacity((emxArray__common *)pctype0, i4, (int)sizeof(char));
    k = ksptype->size[0] * ksptype->size[1];
    for (i4 = 0; i4 < k; i4++) {
      pctype0->data[i4] = ksptype->data[i4];
    }
  }

  /* 'mptKSPSetup:91' if ischar(ksptype0) && ~isempty(ksptype0) || ~ischar(ksptype0) */
  if (!(pctype0->size[1] == 0)) {
    /*  Set KSP Types */
    /* 'mptKSPSetup:93' petscKSPSetType(t_ksp, ksptype0); */
    /* Builds KSP for a particular solver. */
    /*  */
    /*   errCode = petscKSPSetType(ksp, type) sets the type of the KSP */
    /*  */
    /*   SEE ALSO:  PetscPCSetType, petscKSPCreate */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPSetType(KSP ksp, KSPType type) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetType.html */
    /* 'petscKSPSetType:14' errCode = int32(-1); */
    /* 'petscKSPSetType:16' if ~isempty(coder.target) */
    /* 'petscKSPSetType:17' if ischar(type) */
    /* 'petscKSPSetType:18' errCode = coder.ceval('KSPSetType', PetscKSP(ksp), coder.rref(type)); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPSetType(t_ksp, &pctype0->data[0]);

    /* 'petscKSPSetType:23' toplevel = nargout>1; */
    /* 'petscKSPSetType:24' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      k = (M2C_DEBUG);
      if (k != 0) {
        /* 'petscKSPSetType:25' m2c_error('petsc:RuntimeError', 'KSPSetType returned error code %d\n', errCode) */
        nb_m2c_error(errCode);
      }
    }
  }

  emxFree_char_T(&pctype0);

  /* 'mptKSPSetup:97' if nargin<=3 || isempty(pcopt) */
  if (pcopt->size[1] == 0) {
    /*  Use right-preconditioner by default */
    /* 'mptKSPSetup:99' petscKSPSetPCSide(t_ksp, PETSC_PC_RIGHT); */
    /*  Obtain PETSC constant PC_RIGHT */
    /* 'PETSC_PC_RIGHT:4' coder.inline('always'); */
    /* 'PETSC_PC_RIGHT:6' val = petscGetEnum('PC_RIGHT'); */
    /* petscGetEnum Obtain an enumerate value in PETSC */
    /*  */
    /*     val = petscGetEnum(name) */
    /*  */
    /* The supported names include: */
    /*  */
    /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
    /*  */
    /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
    /*       VEC_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
    /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
    /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
    /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
    /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
    /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
    /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
    /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
    /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
    /*       MAT_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
    /*  */
    /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
    /*  */
    /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
    /*  */
    /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
    /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
    /*  */
    /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
    /*  */
    /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
    /*  */
    /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
    /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
    /*  */
    /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
    /*  */
    /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
    /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
    /*  */
    /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
    /*  */
    /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
    /* 'petscGetEnum:51' if isempty(coder.target) */
    /* % InsertMode */
    /* 'petscGetEnum:56' switch name */
    /* 'petscGetEnum:181' case 'PC_RIGHT' */
    /* 'petscGetEnum:182' [val, toplevel] = get_val('PetscInt', 'PC_RIGHT', nargin>1); */
    /* 'petscGetEnum:201' coder.inline('always'); */
    /* 'petscGetEnum:203' val = int32(intmin); */
    /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
    k = (PC_RIGHT);

    /* Sets the preconditioning side. */
    /*  */
    /*   errCode = petscKSPSetPCSide(ksp, side) sets the side of the KSP */
    /*  */
    /*   SEE ALSO:  petscKSPGetPCSide */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPSetPCSide(KSP ksp, PCSide side) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetPCSide.html */
    /* 'petscKSPSetPCSide:14' errCode = int32(-1); */
    /* 'petscKSPSetPCSide:16' if ~isempty(coder.target) */
    /* 'petscKSPSetPCSide:17' errCode = coder.ceval('KSPSetPCSide', PetscKSP(ksp), side); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPSetPCSide(t_ksp, k);

    /* 'petscKSPSetPCSide:19' toplevel = nargout>1; */
    /* 'petscKSPSetPCSide:20' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      k = (M2C_DEBUG);
      if (k != 0) {
        /* 'petscKSPSetPCSide:21' m2c_error('petsc:RuntimeError', 'KSPSetPCSide returned error code %d\n', errCode) */
        o_m2c_error(errCode);
      }
    }
  }

  /* 'mptKSPSetup:102' petscKSPSetFromOptions(t_ksp); */
  /* Sets KSP options from the options database. This routine must be called */
  /* before KSPSetUp() if the user is to be allowed to set the Krylov type. */
  /*  */
  /*   errCode = petscKSPSetFromOptions(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetOperators, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPSetFromOptions(KSP ksp) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetFromOptions.html */
  /* 'petscKSPSetFromOptions:15' errCode = int32(-1); */
  /* 'petscKSPSetFromOptions:17' if ~isempty(coder.target) */
  /* 'petscKSPSetFromOptions:18' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetFromOptions:20' errCode = coder.ceval('KSPSetFromOptions', t_ksp); */
  errCode = KSPSetFromOptions(t_ksp);

  /* 'petscKSPSetFromOptions:22' toplevel = nargout>1; */
  /* 'petscKSPSetFromOptions:23' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    k = (M2C_DEBUG);
    if (k != 0) {
      /* 'petscKSPSetFromOptions:24' m2c_error('petsc:RuntimeError', 'KSPSetFromOptions returned error code %d\n', errCode) */
      p_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:104' petscKSPSetUp(t_ksp); */
  /* Sets up the internal data structures for the later use of an iterative solver. */
  /*  */
  /*   errCode = petscKSPSetUp(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetOperators, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPSetUp(KSP ksp) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetUp.html */
  /* 'petscKSPSetUp:14' errCode = int32(-1); */
  /* 'petscKSPSetUp:16' if ~isempty(coder.target) */
  /* 'petscKSPSetUp:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetUp:19' errCode = coder.ceval('KSPSetUp', t_ksp); */
  errCode = KSPSetUp(t_ksp);

  /* 'petscKSPSetUp:21' toplevel = nargout>1; */
  /* 'petscKSPSetUp:22' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    k = (M2C_DEBUG);
    if (k != 0) {
      /* 'petscKSPSetUp:23' m2c_error('petsc:RuntimeError', 'KSPSetUp returned error code %d\n', errCode) */
      q_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:106' if nargout>1 */
  /*  When timing the run, use mpi_Barrier for more accurate results. */
  /* 'mptKSPSetup:108' mpi_Barrier(comm); */
  mpi_Barrier(t_comm);

  /* 'mptKSPSetup:109' time = mpi_Wtime()-t; */
  /* mpi_Wtime    Returns an elapsed time on the calling processor */
  /*  */
  /*   secs = mpi_Wtime */
  /*  */
  /*   secs (double) Time in seconds since an arbitrary time in the past */
  /*  */
  /*   SEE ALSO: mpi_Wtick */
  /*  */
  /*  C interface: */
  /*  double MPI_Wtime(void) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Wtime.html */
  /* 'mpi_Wtime:17' secs = 0; */
  /* 'mpi_Wtime:18' secs = coder.ceval('MPI_Wtime'); */
  secs = MPI_Wtime();
  *time = secs - t;

  /* 'mptKSPSetup:112' toplevel = nargout>2; */
  /* 'mptKSPSetup:113' ksp = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  *ksp = t_ksp;
}

/*
 * function [flag,relres,iter,reshis,time] = mptKSPSolve(ksp, b, x, rtol, maxits, x0)
 */
static void b_mptKSPSolve(KSP ksp, Vec b, Vec x, double rtol, int maxits, Vec x0,
  int *flag, double *relres, int *iter, emxArray_real_T *reshis, double *time)
{
  int val;
  double bnrm;
  int errCode;
  PetscObject t_obj;
  MPI_Comm t_comm;
  double t;
  int b_val;
  boolean_T b2;
  double secs;
  double res;
  double b_rtol;
  double abstol;
  double dtol;
  int b_maxits;
  emxArray_char_T *side;
  PC t_pc;
  PetscReal * a;
  int na;
  int b_side;
  static const char cv6[9] = { 's', 'y', 'm', 'm', 'e', 't', 'r', 'i', 'c' };

  static const char cv7[4] = { 'l', 'e', 'f', 't' };

  static const char cv8[5] = { 'r', 'i', 'g', 'h', 't' };

  KSPType t_type;
  PCType b_t_type;

  /*  Solves linear system. */
  /*  */
  /*  Syntax: */
  /*     mptKSPSolve(ksp, b) */
  /*     mptKSPSolve(ksp, b, x) */
  /*     mptKSPSolve(ksp, b, x, rtol) */
  /*     mptKSPSolve(ksp, b, x, rtol, maxits) */
  /*     mptKSPSolve(ksp, b, x, rtol, maxits, x0) */
  /*  */
  /*     [flag, relres, iter, reshis, time] = mptKSPSolve(...) returns the flag */
  /*        (KSPConvergedReason), relative residual, number of iterations,  */
  /*     history of residual used in convergence test (typically preconditioned  */
  /*     residual), and execution times. */
  /*  */
  /*  Description: */
  /*     mptKSPSolve(ksp, b) solves the linear system using the tolerances */
  /*     that have been set previously by the user. The solution overwrites b. */
  /*  */
  /*     mptKSPSolve(ksp, b, x) solves the linear system and saves the solution */
  /*     into x. */
  /*  */
  /*     mptKSPSolve(ksp, b, x, rtol) solves with the given relative tolerance. */
  /*  */
  /*     mptKSPSolve(ksp, b, x, rtol, maxits) solves with the given relative */
  /*     tolerances and maximum iteration count. */
  /*  */
  /*     mptKSPSolve(ksp, b, rtol, maxits, x0) uses x0 as the initial guess */
  /*  */
  /*  See also mptKSPSetup, mptKSPCleanup */
  /*  Compute norm of b before it is overwritten */
  /* 'mptKSPSolve:39' bnrm = petscVecNorm(b, PETSC_NORM_2); */
  /*  Obtain PETSC constant NORM_2 */
  /* 'PETSC_NORM_2:4' coder.inline('always'); */
  /* 'PETSC_NORM_2:6' val = petscGetEnum('NORM_2'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:161' case 'NORM_2' */
  /* 'petscGetEnum:162' [val, toplevel] = get_val('NormType', 'NORM_2', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  val = (NORM_2);

  /* Computes the vector norm. */
  /*  */
  /*   [nrm, errCode, toplevel] = petscVecNorm(x, type) computes the norm of */
  /*      vector x of the given type, where type can be PETSC_NORM_1, */
  /*      PETSC_NORM_2 or PETSC_NORM_INFINITY. */
  /*  */
  /*   [nrm, errCode, toplevel] = petscVecNorm(x, type, nrm) allows also */
  /*      use PETSC_NORM_1_AND_2. In this case, nrm must be given as an input */
  /*      of size 2-by-1. */
  /*  */
  /*   SEE ALSO: petscMatNorm */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  VecNorm(Vec x,NormType type,PetscReal *val) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecNorm.html */
  /* 'petscVecNorm:21' errCode = int32(-1); */
  /* 'petscVecNorm:23' if ~isempty(coder.target) */
  /* 'petscVecNorm:24' if nargin==2 */
  /* 'petscVecNorm:25' nrm = double(0); */
  /* 'petscVecNorm:27' errCode = coder.ceval('VecNorm', PetscVec(x), type, coder.wref(nrm)); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  errCode = VecNorm(b, val, &bnrm);

  /* 'petscVecNorm:29' toplevel = nargout>2; */
  /* 'petscVecNorm:30' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscVecNorm:31' m2c_error('petsc:RuntimeError', 'VecNorm returned error code %d\n', errCode) */
      r_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:40' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'mptKSPSolve:42' if nargout>4 */
  /* 'mptKSPSolve:43' time = 0; */
  /* 'mptKSPSolve:44' comm = petscObjectGetComm(t_ksp); */
  /* Gets the MPI communicator for any PetscObject, regardless of the type.  */
  /*  */
  /*   [comm, errCode] = petscObjectGetComm(obj) */
  /*  */
  /*   obtains the MPI_Comm associated with the PetscObject. */
  /*  */
  /*   SEE ALSO: petscMatSetType, petscMatSetFromOptions */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  PetscObjectGetComm(PetscObject obj,MPI_Comm *comm) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscObjectGetComm.html */
  /* 'petscObjectGetComm:16' errCode = int32(-1); */
  /* 'petscObjectGetComm:18' if ~isempty(coder.target) */
  /* 'petscObjectGetComm:19' t_obj = PetscObject(obj); */
  /* Map an opaque object into a PETSc PetscObject object */
  /*  */
  /*   obj = PetscObject() simply returns a definition of the */
  /*   m2c_opaque_type definition, suitable in the argument */
  /*   specification for codegen. */
  /*  */
  /*   obj = PetscObject(arg) or obj = PetscObject(arg, false) converts */
  /*   arg into a PETSc Object object. */
  /*  */
  /*   obj = PetscObject(arg, 'wrap') or obj = PetscObject(arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the  */
  /*   object needs to be returned to MATLAB. Note that the value of  */
  /*   opaque must be determined at compile time. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscObject:18' coder.inline('always'); */
  /* 'PetscObject:20' if nargin==0 && isempty(coder.target) */
  /* 'PetscObject:25' if isstruct(arg) && ~isequal(arg.type, 'PetscObject') && ... */
  /* 'PetscObject:26'         ~isequal(arg.type, 'Mat') && ~isequal(arg.type, 'Vec') && ... */
  /* 'PetscObject:27'         ~isequal(arg.type, 'KSP') && ~isequal(arg.type, 'PC') */
  /* 'PetscObject:32' if ~isstruct(arg) || isempty(coder.target) */
  /* 'PetscObject:33' if nargin==1 || ischar(wrap) || ~wrap */
  /* 'PetscObject:34' obj = coder.opaque('PetscObject'); */
  /* 'PetscObject:35' obj = coder.ceval('(PetscObject)', arg); */
  t_obj = (PetscObject)(ksp);

  /* 'petscObjectGetComm:20' t_comm = coder.opaque('MPI_Comm'); */
  /* 'petscObjectGetComm:22' errCode = coder.ceval('PetscObjectGetComm', t_obj, coder.wref(t_comm)); */
  errCode = PetscObjectGetComm(t_obj, &t_comm);

  /* 'petscObjectGetComm:24' toplevel = nargout>2; */
  /* 'petscObjectGetComm:25' comm = MPI_Comm(t_comm, toplevel); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscObjectGetComm:27' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscObjectGetComm:28' m2c_error('petsc:RuntimeError', 'PetscObjectGetComm returned error code %d\n', errCode) */
      j_m2c_error(errCode);
    }
  }

  /*  When timing the run, use mpi_Barrier for more accurate results. */
  /* 'mptKSPSolve:46' mpi_Barrier(comm); */
  mpi_Barrier(t_comm);

  /* 'mptKSPSolve:47' t = mpi_Wtime(); */
  /* mpi_Wtime    Returns an elapsed time on the calling processor */
  /*  */
  /*   secs = mpi_Wtime */
  /*  */
  /*   secs (double) Time in seconds since an arbitrary time in the past */
  /*  */
  /*   SEE ALSO: mpi_Wtick */
  /*  */
  /*  C interface: */
  /*  double MPI_Wtime(void) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Wtime.html */
  /* 'mpi_Wtime:17' secs = 0; */
  /* 'mpi_Wtime:18' secs = coder.ceval('MPI_Wtime'); */
  t = MPI_Wtime();

  /* 'mptKSPSolve:50' if nargin<5 || maxits==0 */
  if (maxits == 0) {
    /* 'mptKSPSolve:51' maxits = PETSC_DEFAULT; */
    /*  Obtain PETSC constant PETSC_DEFAULT */
    /* 'PETSC_DEFAULT:4' coder.inline('always'); */
    /* 'PETSC_DEFAULT:6' val = petscGetEnum('PETSC_DEFAULT'); */
    /* petscGetEnum Obtain an enumerate value in PETSC */
    /*  */
    /*     val = petscGetEnum(name) */
    /*  */
    /* The supported names include: */
    /*  */
    /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
    /*  */
    /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
    /*       VEC_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
    /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
    /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
    /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
    /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
    /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
    /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
    /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
    /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
    /*       MAT_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
    /*  */
    /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
    /*  */
    /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
    /*  */
    /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
    /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
    /*  */
    /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
    /*  */
    /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
    /*  */
    /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
    /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
    /*  */
    /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
    /*  */
    /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
    /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
    /*  */
    /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
    /*  */
    /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
    /* 'petscGetEnum:51' if isempty(coder.target) */
    /* % InsertMode */
    /* 'petscGetEnum:56' switch name */
    /* 'petscGetEnum:189' case 'PETSC_DEFAULT' */
    /* 'petscGetEnum:190' [val, toplevel] = get_val('PetscInt', 'PETSC_DEFAULT', nargin>1); */
    /* 'petscGetEnum:201' coder.inline('always'); */
    /* 'petscGetEnum:203' val = int32(intmin); */
    /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
    maxits = (PETSC_DEFAULT);
  }

  /*  Solve the linear system */
  /* 'mptKSPSolve:55' if nargin==2 */
  /* 'mptKSPSolve:58' else */
  /*  Set tolerances */
  /* 'mptKSPSolve:60' if nargin>=4 */
  /* 'mptKSPSolve:61' if rtol==0 */
  if (rtol == 0.0) {
    /* 'mptKSPSolve:62' rtol = double(PETSC_DEFAULT); */
    /*  Obtain PETSC constant PETSC_DEFAULT */
    /* 'PETSC_DEFAULT:4' coder.inline('always'); */
    /* 'PETSC_DEFAULT:6' val = petscGetEnum('PETSC_DEFAULT'); */
    /* petscGetEnum Obtain an enumerate value in PETSC */
    /*  */
    /*     val = petscGetEnum(name) */
    /*  */
    /* The supported names include: */
    /*  */
    /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
    /*  */
    /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
    /*       VEC_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
    /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
    /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
    /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
    /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
    /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
    /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
    /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
    /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
    /*       MAT_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
    /*  */
    /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
    /*  */
    /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
    /*  */
    /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
    /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
    /*  */
    /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
    /*  */
    /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
    /*  */
    /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
    /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
    /*  */
    /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
    /*  */
    /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
    /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
    /*  */
    /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
    /*  */
    /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
    /* 'petscGetEnum:51' if isempty(coder.target) */
    /* % InsertMode */
    /* 'petscGetEnum:56' switch name */
    /* 'petscGetEnum:189' case 'PETSC_DEFAULT' */
    /* 'petscGetEnum:190' [val, toplevel] = get_val('PetscInt', 'PETSC_DEFAULT', nargin>1); */
    /* 'petscGetEnum:201' coder.inline('always'); */
    /* 'petscGetEnum:203' val = int32(intmin); */
    /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
    val = (PETSC_DEFAULT);
    rtol = val;
  }

  /* 'mptKSPSolve:64' petscKSPSetTolerances(t_ksp, double(rtol), double(PETSC_DEFAULT), ... */
  /* 'mptKSPSolve:65'             double(PETSC_DEFAULT), int32(maxits)); */
  /*  Obtain PETSC constant PETSC_DEFAULT */
  /* 'PETSC_DEFAULT:4' coder.inline('always'); */
  /* 'PETSC_DEFAULT:6' val = petscGetEnum('PETSC_DEFAULT'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:189' case 'PETSC_DEFAULT' */
  /* 'petscGetEnum:190' [val, toplevel] = get_val('PetscInt', 'PETSC_DEFAULT', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  val = (PETSC_DEFAULT);

  /*  Obtain PETSC constant PETSC_DEFAULT */
  /* 'PETSC_DEFAULT:4' coder.inline('always'); */
  /* 'PETSC_DEFAULT:6' val = petscGetEnum('PETSC_DEFAULT'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:189' case 'PETSC_DEFAULT' */
  /* 'petscGetEnum:190' [val, toplevel] = get_val('PetscInt', 'PETSC_DEFAULT', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  b_val = (PETSC_DEFAULT);

  /* Sets the iteration tolerances used by the default KSP convergence testers. */
  /*  */
  /*  Syntax: */
  /*  */
  /*   [errCode, toplevel] = petscKSPSetTolerances(ksp, rtol) */
  /*   [errCode, toplevel] = petscKSPSetTolerances(ksp, rtol, abstol, dtol, maxits) */
  /*  */
  /*  Description */
  /*  */
  /*   errCode = petscKSPSetTolerances(ksp, rtol) sets the relative tolerance */
  /*        and let PETSc decides the rest. */
  /*  */
  /*   errCode = petscKSPSetTolerances(ksp, rtol, abstol, dtol, maxits) sets  */
  /*        the relative, absolute, divergence tolerances and the max-iteration count. */
  /*  */
  /*   uses the matrix Pmat to construct the preconditioner. */
  /*  */
  /*   SEE ALSO: petscKSPGetTolerances */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetTolerances(KSP ksp,PetscReal rtol,PetscReal abstol,PetscReal dtol,PetscInt maxits) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetTolerances.html */
  /* 'petscKSPSetTolerances:28' errCode = int32(-1); */
  /* 'petscKSPSetTolerances:30' if ~isempty(coder.target) */
  /* 'petscKSPSetTolerances:31' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetTolerances:33' if nargin==2 */
  /* 'petscKSPSetTolerances:39' errCode = coder.ceval('KSPSetTolerances', t_ksp, rtol, abstol, dtol, maxits); */
  errCode = KSPSetTolerances(ksp, rtol, (double)val, (double)b_val, maxits);

  /* 'petscKSPSetTolerances:41' toplevel = nargout>1; */
  /* 'petscKSPSetTolerances:42' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPSetTolerances:43' m2c_error('petsc:RuntimeError', 'KSPSetTolerances returned error code %d\n', errCode) */
      s_m2c_error(errCode);
    }
  }

  /*  Process initial guess */
  /* 'mptKSPSolve:69' nonzeroGuess = int32(nargin>=6 && ~petscIsNULL(x0)); */
  /*  Determine whether a given object is a null opointer of a particular type. */
  /*  */
  /*     isn = petscIsNULL(obj) */
  /* 'petscIsNULL:6' if ischar(obj) */
  /* 'petscIsNULL:8' elseif ~isstruct(obj) */
  /* 'petscIsNULL:9' isn = int32(0); */
  /* 'petscIsNULL:10' isn = coder.ceval('!', obj); */
  val = !(x0);
  b2 = !(val != 0);

  /* 'mptKSPSolve:70' if nonzeroGuess */
  if (b2) {
    /* 'mptKSPSolve:71' petscVecCopy(x0, x); */
    /* Creates a vector from x to y. */
    /*  */
    /*   errCode = petscVecCopy(x, y) copies the entries from x to y. Both */
    /*   x and y must be distributed in the same manner; local copies are done. */
    /*  */
    /*   SEE ALSO: petscVecDuplicate */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  VecCopy(Vec x, Vec y) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecCopy.html */
    /* 'petscVecCopy:15' errCode = int32(-1); */
    /* 'petscVecCopy:17' if ~isempty(coder.target) */
    /* 'petscVecCopy:18' errCode = coder.ceval('VecCopy', PetscVec(x), PetscVec(y)); */
    /* Map an opaque object into a PETSc Vec object */
    /*  */
    /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
    /*  */
    /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
    /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscMat */
    /* 'PetscVec:14' coder.inline('always'); */
    /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    /* Map an opaque object into a PETSc Vec object */
    /*  */
    /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
    /*  */
    /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
    /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscMat */
    /* 'PetscVec:14' coder.inline('always'); */
    /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = VecCopy(x0, x);

    /* 'petscVecCopy:20' toplevel = nargout>2; */
    /* 'petscVecCopy:21' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      val = (M2C_DEBUG);
      if (val != 0) {
        /* 'petscVecCopy:22' m2c_error('petsc:RuntimeError', 'VecCopy returned error code %d\n', errCode) */
        t_m2c_error(errCode);
      }
    }
  }

  /* 'mptKSPSolve:75' if nargout>3 */
  /* 'mptKSPSolve:76' petscKSPSetResidualHistory(t_ksp, maxits, PETSC_TRUE); */
  /*  Obtain PETSC constant PETSC_TRUE */
  /* 'PETSC_TRUE:4' coder.inline('always'); */
  /* 'PETSC_TRUE:6' val = petscGetEnum('PETSC_TRUE'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:57' case 'PETSC_TRUE' */
  /* 'petscGetEnum:58' [val, toplevel] = get_val('PetscBool', 'PETSC_TRUE', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  val = (PETSC_TRUE);

  /*  Sets the array used to hold the residual history. If set, this array */
  /*  will contain the residual norms computed at each iteration of the solver. */
  /*  */
  /*   errCode = petscKSPSetResidualHistory(ksp) */
  /*   errCode = petscKSPSetResidualHistory(ksp, na) */
  /*   errCode = petscKSPSetResidualHistory(ksp, na, reset) sets the maximum */
  /*   size of the residual history. The argument reset indicates whether */
  /*   the history counter should be reset to zero for each new linear solve. */
  /*   The space for the residual history will be allocated by PETSc and can be */
  /*   retrieved by petscKSPGetResidualHistory. */
  /*  */
  /*   SEE ALSO: petscKSPGetResidualHistory */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetResidualHistory(KSP ksp,PetscReal a[],PetscInt na,PetscBool reset) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetResidualHistory.htm */
  /* 'petscKSPSetResidualHistory:23' errCode = int32(-1); */
  /* 'petscKSPSetResidualHistory:25' if ~isempty(coder.target) */
  /* 'petscKSPSetResidualHistory:26' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetResidualHistory:27' if nargin>=2 */
  /* 'petscKSPSetResidualHistory:27' na = int32(varargin{1}); */
  /* 'petscKSPSetResidualHistory:28' if nargin>=3 */
  /* 'petscKSPSetResidualHistory:28' reset = int32(varargin{2}); */
  /* 'petscKSPSetResidualHistory:30' a = coder.opaque('PetscReal *', 'NULL'); */
  /* 'petscKSPSetResidualHistory:31' errCode = coder.ceval('KSPSetResidualHistory', t_ksp, ... */
  /* 'petscKSPSetResidualHistory:32'         a, na, reset); */
  errCode = KSPSetResidualHistory(ksp, NULL, maxits, val);

  /* 'petscKSPSetResidualHistory:34' toplevel = nargout>1; */
  /* 'petscKSPSetResidualHistory:35' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPSetResidualHistory:36' m2c_error('petsc:RuntimeError', ... */
      /* 'petscKSPSetResidualHistory:37'             'petscKSPSetResidualHistory returned error code %d\n', errCode) */
      u_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:79' petscKSPSetInitialGuessNonzero(t_ksp, nonzeroGuess); */
  /* Tells the iterative solver that the initial guess is nonzero; otherwise  */
  /* KSP assumes the initial guess is to be zero (and thus zeros it out before solving). */
  /*  */
  /*   errCode = petscKSPSetInitialGuessNonzero(ksp, flag) */
  /*   indicates the initial guess is non-zero if flag is PETSC_TRUE, and */
  /*   is zeo if flag is PETSC_FALSE (0). */
  /*  */
  /*   SEE ALSO: petscKSPGetInitialGuessNonzero */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetInitialGuessNonzero(KSP ksp,PetscBool flg) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetInitialGuessNonzero.html */
  /* 'petscKSPSetInitialGuessNonzero:17' errCode = int32(-1); */
  /* 'petscKSPSetInitialGuessNonzero:19' if ~isempty(coder.target) */
  /* 'petscKSPSetInitialGuessNonzero:20' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetInitialGuessNonzero:22' errCode = coder.ceval('KSPSetInitialGuessNonzero', t_ksp, flag); */
  errCode = KSPSetInitialGuessNonzero(ksp, (int)b2);

  /* 'petscKSPSetInitialGuessNonzero:24' toplevel = nargout>1; */
  /* 'petscKSPSetInitialGuessNonzero:25' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPSetInitialGuessNonzero:26' m2c_error('petsc:RuntimeError', 'KSPSetInitialGuessNonzero returned error code %d\n', errCode) */
      v_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:80' petscKSPSolve(t_ksp, b, x); */
  /* Solves linear system. */
  /*  */
  /*   errCode = petscKSPSolve(ksp, b) */
  /*  */
  /*   solves the linear system with b as the RHS and saves the solution into b. */
  /*      ksp - iterative context obtained from petscKSPCreate() */
  /*      b	  - the right hand side vector */
  /*  */
  /*   errCode = petscKSPSolve(ksp, b, x) */
  /*  */
  /*   solves the linear system and saves the solution into vector x. */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetOperators, petscKSPSetUp, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPSolve(KSP ksp,Vec b,Vec x) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSolve.html */
  /* 'petscKSPSolve:23' errCode = int32(-1); */
  /* 'petscKSPSolve:25' if ~isempty(coder.target) */
  /* 'petscKSPSolve:26' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSolve:27' t_b = PetscVec(b); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSolve:29' if nargin==2 */
  /* 'petscKSPSolve:31' else */
  /* 'petscKSPSolve:32' t_x = PetscVec(x); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSolve:35' errCode = coder.ceval('KSPSolve', t_ksp, t_b, t_x); */
  errCode = KSPSolve(ksp, b, x);

  /* 'petscKSPSolve:37' toplevel = nargout>1; */
  /* 'petscKSPSolve:38' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPSolve:39' m2c_error('petsc:RuntimeError', 'KSPSolve returned error code %d\n', errCode) */
      w_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:82' if nargout>4 */
  /*  When timing the run, use mpi_Barrier for more accurate results. */
  /* 'mptKSPSolve:84' mpi_Barrier(comm); */
  mpi_Barrier(t_comm);

  /* 'mptKSPSolve:85' time = mpi_Wtime()-t; */
  /* mpi_Wtime    Returns an elapsed time on the calling processor */
  /*  */
  /*   secs = mpi_Wtime */
  /*  */
  /*   secs (double) Time in seconds since an arbitrary time in the past */
  /*  */
  /*   SEE ALSO: mpi_Wtick */
  /*  */
  /*  C interface: */
  /*  double MPI_Wtime(void) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Wtime.html */
  /* 'mpi_Wtime:17' secs = 0; */
  /* 'mpi_Wtime:18' secs = coder.ceval('MPI_Wtime'); */
  secs = MPI_Wtime();
  *time = secs - t;

  /* 'mptKSPSolve:88' flag = petscKSPGetConvergedReason(t_ksp); */
  /* Gets the reason the KSP iteration was stopped. */
  /*  */
  /*   [flag, errCode] = petscKSPGetConvergedReason(ksp) */
  /*  */
  /*   SEE ALSO: KSPGetResidualNorm, petscKSPGetIterationNumber */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetConvergedReason(KSP ksp,KSPConvergedReason *reason) */
  /*  http://www.mcs.anl.gov/petsc/petsc-3.7/docs/manualpages/KSP/KSPGetConvergedReason.html */
  /* 'petscKSPGetConvergedReason:14' errCode = int32(-1); */
  /* 'petscKSPGetConvergedReason:16' if ~isempty(coder.target) */
  /* 'petscKSPGetConvergedReason:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetConvergedReason:19' flag = int32(0); */
  /* 'petscKSPGetConvergedReason:20' errCode = coder.ceval('KSPGetConvergedReason', t_ksp, coder.wref(flag)); */
  errCode = KSPGetConvergedReason(ksp, flag);

  /* 'petscKSPGetConvergedReason:22' toplevel = nargout>2; */
  /* 'petscKSPGetConvergedReason:23' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPGetConvergedReason:24' m2c_error('petsc:RuntimeError', 'KSPGetConvergedReason returned error code %d\n', errCode) */
      x_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:89' res = petscKSPGetResidualNorm(t_ksp); */
  /* Gets the last (approximate preconditioned) residual norm that has been computed. */
  /*  */
  /*   [rnorm, errCode] = petscKSPGetResidualNorm(ksp) */
  /*  */
  /*   SEE ALSO: KSPGetResidualNorm, petscKSPGetIterationNumber */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetResidualNorm(KSP ksp,PetscInt *rnorm) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetResidualNorm.html */
  /* 'petscKSPGetResidualNorm:14' errCode = int32(-1); */
  /* 'petscKSPGetResidualNorm:16' if ~isempty(coder.target) */
  /* 'petscKSPGetResidualNorm:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetResidualNorm:19' rnorm = 0; */
  /* 'petscKSPGetResidualNorm:20' errCode = coder.ceval('KSPGetResidualNorm', t_ksp, coder.wref(rnorm)); */
  errCode = KSPGetResidualNorm(ksp, &res);

  /* 'petscKSPGetResidualNorm:22' toplevel = nargout>2; */
  /* 'petscKSPGetResidualNorm:23' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPGetResidualNorm:24' m2c_error('petsc:RuntimeError', 'KSPGetResidualNorm returned error code %d\n', errCode) */
      y_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:90' iter = petscKSPGetIterationNumber(t_ksp); */
  /* Gets the current iteration number. */
  /*  */
  /*   [its, errCode] = petscKSPGetIterationNumber(ksp) */
  /*  */
  /*   gets the current iteration number; if the KSPSolve() is complete,  */
  /*   returns the number of iterations used.  */
  /*  */
  /*   SEE ALSO: petscKSPGetConvergedReason, KSPGetResidualNorm, petscKSPGetTotalIterations */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetIterationNumber(KSP ksp,PetscInt *its) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetIterationNumber.html */
  /* 'petscKSPGetIterationNumber:17' errCode = int32(-1); */
  /* 'petscKSPGetIterationNumber:19' if ~isempty(coder.target) */
  /* 'petscKSPGetIterationNumber:20' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetIterationNumber:22' its = int32(0); */
  /* 'petscKSPGetIterationNumber:23' errCode = coder.ceval('KSPGetIterationNumber', t_ksp, coder.wref(its)); */
  errCode = KSPGetIterationNumber(ksp, iter);

  /* 'petscKSPGetIterationNumber:25' toplevel = nargout>2; */
  /* 'petscKSPGetIterationNumber:26' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPGetIterationNumber:27' m2c_error('petsc:RuntimeError', 'KSPGetIterationNumber returned error code %d\n', errCode) */
      ab_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:91' relres = res/bnrm; */
  *relres = res / bnrm;

  /* 'mptKSPSolve:93' [rtol, abstol, dtol, maxits] = petscKSPGetTolerances(t_ksp); */
  /* Gets the relative, absolute, divergence, and maximum iteration tolerances */
  /* used by the default KSP convergence tests. */
  /*  */
  /*  Syntax: */
  /*  */
  /*   [rtol, arg2, dtol, maxits, errCode, toplevel] = petscKSPGetTolerances(ksp) */
  /*   obtains the relative, absolute, divergence tolerances and the max-iteration count. */
  /*  */
  /*   SEE ALSO: petscKSPSetTolerances */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetTolerances(KSP ksp,PetscReal *rtol,PetscReal *abstol,PetscReal *dtol,PetscInt *maxits) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetTolerances.html */
  /* 'petscKSPGetTolerances:18' errCode = int32(-1); */
  /* 'petscKSPGetTolerances:20' if ~isempty(coder.target) */
  /* 'petscKSPGetTolerances:21' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetTolerances:23' rtol = double(0); */
  /* 'petscKSPGetTolerances:24' abstol = double(0); */
  /* 'petscKSPGetTolerances:25' dtol = double(0); */
  /* 'petscKSPGetTolerances:26' maxits = int32(0); */
  /* 'petscKSPGetTolerances:28' errCode = coder.ceval('KSPGetTolerances', t_ksp, coder.wref(rtol), ... */
  /* 'petscKSPGetTolerances:29'         coder.wref(abstol), coder.wref(dtol), coder.wref(maxits)); */
  errCode = KSPGetTolerances(ksp, &b_rtol, &abstol, &dtol, &b_maxits);

  /* 'petscKSPGetTolerances:31' toplevel = nargout>5; */
  /* 'petscKSPGetTolerances:32' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPGetTolerances:33' m2c_error('petsc:RuntimeError', 'KSPGetTolerances returned error code %d\n', errCode) */
      bb_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:95' if flag < 0 || relres>rtol */
  emxInit_char_T(&side, 2);
  if ((*flag < 0) || (*relres > b_rtol)) {
    /* 'mptKSPSolve:96' pc = petscKSPGetPC(t_ksp); */
    /* Returns a pointer to the preconditioner context set with petscKSPSetPC. */
    /*  */
    /*   [pc, errCode] = petscKSPGetPC(ksp) gets the PC of the KSP */
    /*  */
    /*   SEE ALSO:  petscKSPSetPC */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPGetPC(KSP ksp,PC *pc) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetPC.html */
    /* 'petscKSPGetPC:14' errCode = int32(-1); */
    /* 'petscKSPGetPC:16' if ~isempty(coder.target) */
    /* 'petscKSPGetPC:17' t_pc = coder.opaque('PC'); */
    /* 'petscKSPGetPC:18' errCode = coder.ceval('KSPGetPC', PetscKSP(ksp), coder.wref(t_pc)); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPGetPC(ksp, &t_pc);

    /* 'petscKSPGetPC:20' toplevel = nargout>2; */
    /* 'petscKSPGetPC:21' pc = PetscPC(t_pc, toplevel); */
    /* Map an opaque object into a PETSc PC object */
    /*  */
    /*   PetscPC() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscPC(obj) or PetscPC(obj, false) converts arg into a PETSc PC object. */
    /*  */
    /*   PetscPC(arg, 'wrap') or PetscPC(obj, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscPC:14' coder.inline('always'); */
    /* 'PetscPC:16' pc = m2c_opaque_obj('PC', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    /* 'petscKSPGetPC:23' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      val = (M2C_DEBUG);
      if (val != 0) {
        /* 'petscKSPGetPC:24' m2c_error('petsc:RuntimeError', 'KSPGetPC returned error code %d\n', errCode) */
        cb_m2c_error(errCode);
      }
    }

    /* 'mptKSPSolve:97' switch petscKSPGetPCSide(t_ksp) */
    /* Gets the preconditioning side. */
    /*  */
    /*   [side, errCode] = petscKSPGetPCSide(ksp) returns the side of the KSP. */
    /*  */
    /*   SEE ALSO:  petscKSPSetPCSide */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPGetPCSide(KSP ksp,PCSide *side) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetPCSide.html */
    /* 'petscKSPGetPCSide:14' errCode = int32(-1); */
    /* 'petscKSPGetPCSide:16' if ~isempty(coder.target) */
    /* 'petscKSPGetPCSide:17' side = int32(0); */
    /* 'petscKSPGetPCSide:18' errCode = coder.ceval('KSPGetPCSide', PetscKSP(ksp), coder.wref(side)); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPGetPCSide(ksp, &b_side);

    /* 'petscKSPGetPCSide:20' toplevel = nargout>2; */
    /* 'petscKSPGetPCSide:21' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      val = (M2C_DEBUG);
      if (val != 0) {
        /* 'petscKSPGetPCSide:22' m2c_error('petsc:RuntimeError', 'KSPGetPCSide returned error code %d\n', errCode) */
        db_m2c_error(errCode);
      }
    }

    /*  Obtain PETSC constant PC_LEFT */
    /* 'PETSC_PC_LEFT:4' coder.inline('always'); */
    /* 'PETSC_PC_LEFT:6' val = petscGetEnum('PC_LEFT'); */
    /* petscGetEnum Obtain an enumerate value in PETSC */
    /*  */
    /*     val = petscGetEnum(name) */
    /*  */
    /* The supported names include: */
    /*  */
    /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
    /*  */
    /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
    /*       VEC_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
    /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
    /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
    /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
    /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
    /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
    /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
    /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
    /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
    /*       MAT_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
    /*  */
    /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
    /*  */
    /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
    /*  */
    /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
    /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
    /*  */
    /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
    /*  */
    /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
    /*  */
    /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
    /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
    /*  */
    /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
    /*  */
    /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
    /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
    /*  */
    /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
    /*  */
    /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
    /* 'petscGetEnum:51' if isempty(coder.target) */
    /* % InsertMode */
    /* 'petscGetEnum:56' switch name */
    /* 'petscGetEnum:179' case 'PC_LEFT' */
    /* 'petscGetEnum:180' [val, toplevel] = get_val('PetscInt', 'PC_LEFT', nargin>1); */
    /* 'petscGetEnum:201' coder.inline('always'); */
    /* 'petscGetEnum:203' val = int32(intmin); */
    /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
    val = (PC_LEFT);

    /*  Obtain PETSC constant PC_RIGHT */
    /* 'PETSC_PC_RIGHT:4' coder.inline('always'); */
    /* 'PETSC_PC_RIGHT:6' val = petscGetEnum('PC_RIGHT'); */
    /* petscGetEnum Obtain an enumerate value in PETSC */
    /*  */
    /*     val = petscGetEnum(name) */
    /*  */
    /* The supported names include: */
    /*  */
    /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
    /*  */
    /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
    /*       VEC_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
    /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
    /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
    /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
    /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
    /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
    /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
    /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
    /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
    /*       MAT_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
    /*  */
    /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
    /*  */
    /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
    /*  */
    /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
    /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
    /*  */
    /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
    /*  */
    /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
    /*  */
    /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
    /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
    /*  */
    /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
    /*  */
    /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
    /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
    /*  */
    /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
    /*  */
    /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
    /* 'petscGetEnum:51' if isempty(coder.target) */
    /* % InsertMode */
    /* 'petscGetEnum:56' switch name */
    /* 'petscGetEnum:181' case 'PC_RIGHT' */
    /* 'petscGetEnum:182' [val, toplevel] = get_val('PetscInt', 'PC_RIGHT', nargin>1); */
    /* 'petscGetEnum:201' coder.inline('always'); */
    /* 'petscGetEnum:203' val = int32(intmin); */
    /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
    b_val = (PC_RIGHT);
    if (val == b_side) {
      val = 0;
    } else if (b_val == b_side) {
      val = 1;
    } else {
      val = -1;
    }

    switch (val) {
     case 0:
      /* 'mptKSPSolve:98' case PETSC_PC_LEFT */
      /* 'mptKSPSolve:99' side = 'left'; */
      val = side->size[0] * side->size[1];
      side->size[0] = 1;
      side->size[1] = 4;
      emxEnsureCapacity((emxArray__common *)side, val, (int)sizeof(char));
      for (val = 0; val < 4; val++) {
        side->data[val] = cv7[val];
      }
      break;

     case 1:
      /* 'mptKSPSolve:100' case PETSC_PC_RIGHT */
      /* 'mptKSPSolve:101' side = 'right'; */
      val = side->size[0] * side->size[1];
      side->size[0] = 1;
      side->size[1] = 5;
      emxEnsureCapacity((emxArray__common *)side, val, (int)sizeof(char));
      for (val = 0; val < 5; val++) {
        side->data[val] = cv8[val];
      }
      break;

     default:
      /* 'mptKSPSolve:102' otherwise */
      /* 'mptKSPSolve:103' side = 'symmetric'; */
      val = side->size[0] * side->size[1];
      side->size[0] = 1;
      side->size[1] = 9;
      emxEnsureCapacity((emxArray__common *)side, val, (int)sizeof(char));
      for (val = 0; val < 9; val++) {
        side->data[val] = cv6[val];
      }
      break;
    }

    /* 'mptKSPSolve:106' m2c_printf('### %s with %s as %s preconditioner stopped with flag %d.\n', ... */
    /* 'mptKSPSolve:107'         petscKSPGetType(t_ksp), petscPCGetType(pc), side, flag); */
    /* Gets the KSP type as a KSPType object from the KSP object. */
    /*  */
    /*   [type, errCode] = petscKSPGetType(ksp) gets the type of the KSP */
    /*  */
    /*   SEE ALSO:  petscKSPSetType */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPGetType(KSP ksp, KSPType *type) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetType.html */
    /* 'petscKSPGetType:14' errCode = int32(-1); */
    /* 'petscKSPGetType:16' if ~isempty(coder.target) */
    /* 'petscKSPGetType:17' t_type = coder.opaque('KSPType'); */
    /* 'petscKSPGetType:18' errCode = coder.ceval('KSPGetType', PetscKSP(ksp), coder.wref(t_type)); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPGetType(ksp, &t_type);

    /* 'petscKSPGetType:20' toplevel = nargout>2; */
    /* 'petscKSPGetType:21' type = PetscKSPType(t_type, toplevel); */
    /* Map a null-terminated C string into a PETSc KSPType handle */
    /*  */
    /*   PetscKSPType() simply returns a definition of a string, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscKSPType(arg) or PetscKSPType(arg, false) converts arg into */
    /*   a PETSc KSPType object. */
    /*  */
    /*   PetscKSPType(arg, 'wrap') or PetscKSPType(arg, true) copies the  */
    /*   arg into a MATLAB string. This should be used if the object */
    /*   needs to be returned to MATLAB. Note that the value of the */
    /*   second argument must be determined at compile time. */
    /*  */
    /*  See also PetscPCType, PETSC_KSP* */
    /* 'PetscKSPType:17' coder.inline('always'); */
    /* 'PetscKSPType:19' if nargin==0 && isempty(coder.target) */
    /* 'PetscKSPType:24' if isempty(coder.target) && ~ischar(arg) */
    /* 'PetscKSPType:29' if nargin==1 || ~ischar(wrap) && ~wrap */
    /* 'PetscKSPType:30' type = arg; */
    /* 'petscKSPGetType:23' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      val = (M2C_DEBUG);
      if (val != 0) {
        /* 'petscKSPGetType:24' m2c_error('petsc:RuntimeError', 'KSPGetType returned error code %d\n', errCode) */
        eb_m2c_error(errCode);
      }
    }

    /* Gets the PC type as a PCType object from the PC object. */
    /*  */
    /*   [type, errCode] = petscPCGetType(pc) gets the type of the PC */
    /*  */
    /*   SEE ALSO:  petscPCSetType */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  PCGetType(PC pc, PCType *type) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/PC/PCGetType.html */
    /* 'petscPCGetType:14' errCode = int32(-1); */
    /* 'petscPCGetType:16' if ~isempty(coder.target) */
    /* 'petscPCGetType:17' t_type = coder.opaque('PCType'); */
    /* 'petscPCGetType:18' errCode = coder.ceval('PCGetType', PetscPC(pc), coder.wref(t_type)); */
    /* Map an opaque object into a PETSc PC object */
    /*  */
    /*   PetscPC() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscPC(obj) or PetscPC(obj, false) converts arg into a PETSc PC object. */
    /*  */
    /*   PetscPC(arg, 'wrap') or PetscPC(obj, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscPC:14' coder.inline('always'); */
    /* 'PetscPC:16' pc = m2c_opaque_obj('PC', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = PCGetType(t_pc, &b_t_type);

    /* 'petscPCGetType:20' toplevel = nargout>2; */
    /* 'petscPCGetType:21' type = PetscPCType(t_type, toplevel); */
    /* Map a null-terminated C string into a PETSc PCType handle */
    /*  */
    /*   PetscPCType() simply returns a definition of a string, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscPCType(arg) or PetscPCType(arg, false) converts arg into a */
    /*   PETSc PCType object. */
    /*  */
    /*   PetscPCType(arg, 'wrap') or PetscPCType(arg, true) copies the */
    /*   arg into a MATLAB string. This should be used if the object */
    /*   needs to be returned to MATLAB. Note that the value of the */
    /*   second argument must be determined at compile time. */
    /*  */
    /*  See also PetscKSPType, PETSC_PC* */
    /* 'PetscPCType:17' coder.inline('always'); */
    /* 'PetscPCType:19' if nargin==0 && isempty(coder.target) */
    /* 'PetscPCType:24' if isempty(coder.target) && ~ischar(arg) */
    /* 'PetscPCType:29' if nargin==1 || ~ischar(wrap) && ~wrap */
    /* 'PetscPCType:30' type = arg; */
    /* 'petscPCGetType:23' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      val = (M2C_DEBUG);
      if (val != 0) {
        /* 'petscPCGetType:24' m2c_error('petsc:RuntimeError', 'PCGetType returned error code %d\n', errCode) */
        fb_m2c_error(errCode);
      }
    }

    m2c_printf(t_type, b_t_type, side, *flag);

    /* 'mptKSPSolve:108' m2c_printf('### The relative residual was %g after %d iterations.\n', relres, iter); */
    b_m2c_printf(*relres, *iter);

    /* 'mptKSPSolve:109' m2c_printf('### The relative and absolute tolerances were %g and %g.\n', rtol, abstol); */
    c_m2c_printf(b_rtol, abstol);

    /* 'mptKSPSolve:110' m2c_printf('### The divergence and max-iter tolerances were %d and %g.\n', maxits, dtol); */
    d_m2c_printf(b_maxits, dtol);

    /* 'mptKSPSolve:111' m2c_printf(['### For explanation of the flag, see http://www.mcs.anl.gov/petsc/' ... */
    /* 'mptKSPSolve:112'         'petsc-current/docs/manualpages/KSP/KSPConvergedReason.html.\n']); */
    e_m2c_printf();
  }

  emxFree_char_T(&side);

  /* 'mptKSPSolve:115' if nargout>3 */
  /*  Obtain convergence history */
  /* 'mptKSPSolve:117' reshis = petscKSPGetResidualHistory(t_ksp); */
  /* Gets the array used to hold the residual history and the number of */
  /* residuals it contains. */
  /*  */
  /*   [rehis, errCode] = KSPGetResidualHistory(ksp) returns a real array */
  /*   containing the residual history. */
  /*  */
  /*   SEE ALSO: petscKSPSetResidualHistory */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetResidualHistory(KSP ksp,PetscReal *a[], PetscInt *na) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetResidualHistory.html */
  /* 'petscKSPGetResidualHistory:16' errCode = int32(-1); */
  /* 'petscKSPGetResidualHistory:18' if ~isempty(coder.target) */
  /* 'petscKSPGetResidualHistory:19' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetResidualHistory:21' a = coder.opaque('PetscReal *', 'NULL'); */
  /* 'petscKSPGetResidualHistory:22' na = int32(0); */
  /* 'petscKSPGetResidualHistory:23' errCode = coder.ceval('KSPGetResidualHistory', t_ksp, ... */
  /* 'petscKSPGetResidualHistory:24'         coder.wref(a), coder.wref(na)); */
  errCode = KSPGetResidualHistory(ksp, &a, &na);

  /* 'petscKSPGetResidualHistory:26' reshis = zeros(na, 1); */
  val = reshis->size[0];
  reshis->size[0] = na;
  emxEnsureCapacity((emxArray__common *)reshis, val, (int)sizeof(double));
  for (val = 0; val < na; val++) {
    reshis->data[val] = 0.0;
  }

  /* 'petscKSPGetResidualHistory:27' coder.ceval('memcpy', coder.ref(reshis), a, int32(na*8)); */
  memcpy(&reshis->data[0], a, na << 3);

  /* 'petscKSPGetResidualHistory:29' toplevel = nargout>2; */
  /* 'petscKSPGetResidualHistory:30' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPGetResidualHistory:31' m2c_error('petsc:RuntimeError', 'KSPGetResidualHistory returned error code %d\n', errCode) */
      gb_m2c_error(errCode);
    }
  }
}

/*
 * function m2c_error(varargin)
 */
static void bb_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "KSPGetTolerances returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void c_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "MatAssemblyBegin returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_printf(varargin)
 */
static void c_m2c_printf(double varargin_2, double varargin_3)
{
  /* m2c_printf Issue an informational message. */
  /*   */
  /*  m2c_printf(msg); */
  /*  m2c_printf(fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_printf('Message in a constant string does not need to be null-terminated.'); */
  /*     m2c_printf('Msg ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_error, m2c_warn */
  /* 'm2c_printf:17' coder.inline('never'); */
  /* 'm2c_printf:19' if isempty(coder.target) */
  /* 'm2c_printf:21' else */
  /* 'm2c_printf:22' if isequal(coder.target, 'mex') */
  /* 'm2c_printf:24' else */
  /* 'm2c_printf:25' cmd = 'M2C_printf'; */
  /* 'm2c_printf:27' assert(nargin>=1); */
  /* 'm2c_printf:28' fmt = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_printf:29' coder.ceval(cmd, fmt, varargin{2:end}); */
  M2C_printf("### The relative and absolute tolerances were %g and %g.\n",
             varargin_2, varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void cb_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "KSPGetPC returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void d_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "MatAssemblyEnd returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_printf(varargin)
 */
static void d_m2c_printf(int varargin_2, double varargin_3)
{
  /* m2c_printf Issue an informational message. */
  /*   */
  /*  m2c_printf(msg); */
  /*  m2c_printf(fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_printf('Message in a constant string does not need to be null-terminated.'); */
  /*     m2c_printf('Msg ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_error, m2c_warn */
  /* 'm2c_printf:17' coder.inline('never'); */
  /* 'm2c_printf:19' if isempty(coder.target) */
  /* 'm2c_printf:21' else */
  /* 'm2c_printf:22' if isequal(coder.target, 'mex') */
  /* 'm2c_printf:24' else */
  /* 'm2c_printf:25' cmd = 'M2C_printf'; */
  /* 'm2c_printf:27' assert(nargin>=1); */
  /* 'm2c_printf:28' fmt = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_printf:29' coder.ceval(cmd, fmt, varargin{2:end}); */
  M2C_printf("### The divergence and max-iter tolerances were %d and %g.\n",
             varargin_2, varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void db_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "KSPGetPCSide returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void e_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "VecCreateSeq returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_printf(varargin)
 */
static void e_m2c_printf(void)
{
  /* m2c_printf Issue an informational message. */
  /*   */
  /*  m2c_printf(msg); */
  /*  m2c_printf(fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_printf('Message in a constant string does not need to be null-terminated.'); */
  /*     m2c_printf('Msg ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_error, m2c_warn */
  /* 'm2c_printf:17' coder.inline('never'); */
  /* 'm2c_printf:19' if isempty(coder.target) */
  /* 'm2c_printf:21' else */
  /* 'm2c_printf:22' if isequal(coder.target, 'mex') */
  /* 'm2c_printf:24' else */
  /* 'm2c_printf:25' cmd = 'M2C_printf'; */
  /* 'm2c_printf:27' assert(nargin>=1); */
  /* 'm2c_printf:28' fmt = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_printf:29' coder.ceval(cmd, fmt, varargin{2:end}); */
  M2C_printf("### For explanation of the flag, see http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPConvergedReason.html.\n");
}

/*
 * function m2c_error(varargin)
 */
static void eb_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "KSPGetType returned error code %d\n",
            varargin_3);
}

static void emxFree_uint8_T(emxArray_uint8_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_uint8_T *)NULL) {
    if (((*pEmxArray)->data != (unsigned char *)NULL) && (*pEmxArray)
        ->canFreeData) {
      free((void *)(*pEmxArray)->data);
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_uint8_T *)NULL;
  }
}

static void emxInit_int32_T1(emxArray_int32_T **pEmxArray, int numDimensions)
{
  emxArray_int32_T *emxArray;
  int i;
  *pEmxArray = (emxArray_int32_T *)malloc(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_uint8_T(emxArray_uint8_T **pEmxArray, int numDimensions)
{
  emxArray_uint8_T *emxArray;
  int i;
  *pEmxArray = (emxArray_uint8_T *)malloc(sizeof(emxArray_uint8_T));
  emxArray = *pEmxArray;
  emxArray->data = (unsigned char *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * function m2c_error(varargin)
 */
static void f_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "VecSetValues returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void fb_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "PCGetType returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void g_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "VecAssemblyBegin returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void gb_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError",
            "KSPGetResidualHistory returned error code %d\n", varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void h_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "VecAssemblyEnd returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void hb_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "KSPDestroy returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void i_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "VecDuplicate returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void ib_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "MatDestroy returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void j_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "PetscObjectGetComm returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void jb_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "VecDestroy returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void k_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "KSPCreate returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void kb_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "VecGetLocalSize returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void l_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("MPI:RuntimeError", "MPI_Error_string with error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void lb_m2c_error(void)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:30' fmt = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:32' coder.ceval(cmd, ... */
  /* 'm2c_error:33'                     coder.opaque('const char *', '"runtime:Error"'), ... */
  /* 'm2c_error:34'                     fmt, varargin{2:end}); */
  M2C_error("runtime:Error", "Output array y is too small.");
}

/*
 * function m2c_error(varargin)
 */
static void m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "MatCreateSeqAIJ returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_printf(varargin)
 */
static void m2c_printf(KSPType varargin_2, PCType varargin_3, const
  emxArray_char_T *varargin_4, int varargin_5)
{
  emxArray_char_T *b_varargin_4;
  int i3;
  int loop_ub;
  emxInit_char_T(&b_varargin_4, 2);

  /* m2c_printf Issue an informational message. */
  /*   */
  /*  m2c_printf(msg); */
  /*  m2c_printf(fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_printf('Message in a constant string does not need to be null-terminated.'); */
  /*     m2c_printf('Msg ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_error, m2c_warn */
  /* 'm2c_printf:17' coder.inline('never'); */
  /* 'm2c_printf:19' if isempty(coder.target) */
  /* 'm2c_printf:21' else */
  /* 'm2c_printf:22' if isequal(coder.target, 'mex') */
  /* 'm2c_printf:24' else */
  /* 'm2c_printf:25' cmd = 'M2C_printf'; */
  /* 'm2c_printf:27' assert(nargin>=1); */
  /* 'm2c_printf:28' fmt = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_printf:29' coder.ceval(cmd, fmt, varargin{2:end}); */
  i3 = b_varargin_4->size[0] * b_varargin_4->size[1];
  b_varargin_4->size[0] = 1;
  b_varargin_4->size[1] = varargin_4->size[1];
  emxEnsureCapacity((emxArray__common *)b_varargin_4, i3, (int)sizeof(char));
  loop_ub = varargin_4->size[0] * varargin_4->size[1];
  for (i3 = 0; i3 < loop_ub; i3++) {
    b_varargin_4->data[i3] = varargin_4->data[i3];
  }

  M2C_printf("### %s with %s as %s preconditioner stopped with flag %d.\n",
             varargin_2, varargin_3, &b_varargin_4->data[0], varargin_5);
  emxFree_char_T(&b_varargin_4);
}

/*
 * function m2c_error(varargin)
 */
static void m_m2c_error(const emxArray_char_T *varargin_3)
{
  emxArray_char_T *b_varargin_3;
  int i2;
  int loop_ub;
  emxInit_char_T(&b_varargin_3, 2);

  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  i2 = b_varargin_3->size[0] * b_varargin_3->size[1];
  b_varargin_3->size[0] = 1;
  b_varargin_3->size[1] = varargin_3->size[1];
  emxEnsureCapacity((emxArray__common *)b_varargin_3, i2, (int)sizeof(char));
  loop_ub = varargin_3->size[0] * varargin_3->size[1];
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_varargin_3->data[i2] = varargin_3->data[i2];
  }

  M2C_error("MPI:RuntimeError", "MPI_Barrier failed with error message %s\n",
            &b_varargin_3->data[0]);
  emxFree_char_T(&b_varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void mb_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "VecGetValues returned error code %d\n",
            varargin_3);
}

/*
 * function [info, toplevel] = mpi_Barrier(comm)
 */
static void mpi_Barrier(MPI_Comm comm)
{
  int info;
  emxArray_uint8_T *varargin_1;
  emxArray_char_T *b_varargin_1;
  int flag;
  unsigned char msg0[1024];
  char * ptr;
  int resultlen;
  int loop_ub;

  /* mpi_Barrier   Blocks until all processes in the communicator have reached this routine. */
  /*  */
  /*   info = mpi_Barrier (comm) */
  /*  */
  /*   comm         Opaque MPI_Comm object. */
  /*  */
  /*   info (int)	return code */
  /*  */
  /*   SEE ALSO: mpi_Bcast, mpi_Scatter, mpi_Gather, mpi_Reduce */
  /*  */
  /*   mpi_Barrier is a collective operation on comm (all ranks must call it) */
  /*  */
  /*  C interface: */
  /*     int MPI_Barrier(MPI_Comm comm) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Barrier.html */
  /* 'mpi_Barrier:20' info = int32(0); */
  /* 'mpi_Barrier:21' info = coder.ceval('MPI_Barrier', MPI_Comm(comm)); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  info = MPI_Barrier(comm);

  /* 'mpi_Barrier:23' toplevel = nargout>1; */
  /* 'mpi_Barrier:24' if info && (toplevel || m2c_debug) */
  emxInit_uint8_T(&varargin_1, 2);
  emxInit_char_T(&b_varargin_1, 2);
  if (info != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    flag = (M2C_DEBUG);
    if (flag != 0) {
      /* 'mpi_Barrier:25' m2c_error('MPI:RuntimeError', 'MPI_Barrier failed with error message %s\n', mpi_Error_string(info)) */
      /* Returns a string for a given error code. */
      /*  */
      /*  [msg, info] = mpi_Error_string(errcode) */
      /*  */
      /*  C interface: */
      /*      int MPI_Error_string(int errorcode, char *string, int *resultlen) */
      /*  http://mpi.deino.net/mpi_functions/MPI_Error_string.html */
      /* 'mpi_Error_string:12' coder.inline('always'); */
      /* 'mpi_Error_string:14' msg0 = zeros(1, 1024, 'uint8'); */
      memset(&msg0[0], 0, sizeof(unsigned char) << 10);

      /* 'mpi_Error_string:16' ptr = coder.opaque('char *'); */
      /* 'mpi_Error_string:17' ptr = coder.ceval('(char *)', coder.ref(msg0)); */
      ptr = (char *)(msg0);

      /* 'mpi_Error_string:19' info = int32(0); */
      /* 'mpi_Error_string:20' resultlen = int32(0); */
      resultlen = 0;

      /* 'mpi_Error_string:21' info = coder.ceval('MPI_Error_string', errcode, ptr, coder.ref(resultlen)); */
      info = MPI_Error_string(info, ptr, &resultlen);

      /* 'mpi_Error_string:22' msg = char(msg0(1:resultlen)); */
      if (1 > resultlen) {
        loop_ub = 0;
      } else {
        loop_ub = resultlen;
      }

      flag = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 1;
      varargin_1->size[1] = loop_ub;
      emxEnsureCapacity((emxArray__common *)varargin_1, flag, (int)sizeof
                        (unsigned char));
      for (flag = 0; flag < loop_ub; flag++) {
        varargin_1->data[varargin_1->size[0] * flag] = msg0[flag];
      }

      /* 'mpi_Error_string:24' toplevel = nargout>2; */
      /* 'mpi_Error_string:25' if info && (toplevel || m2c_debug) */
      if (info != 0) {
        /* Flag indicating whether m2c_debug is on. */
        /* It is always true within MATLAB. In the generated C code, it is */
        /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
        /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
        /* 'm2c_debug:7' coder.inline('always'); */
        /* 'm2c_debug:9' if isempty(coder.target) */
        /* 'm2c_debug:11' else */
        /* 'm2c_debug:12' flag = int32(1); */
        /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
        flag = (M2C_DEBUG);
        if (flag != 0) {
          /* 'mpi_Error_string:26' m2c_error('MPI:RuntimeError', 'MPI_Error_string with error code %d\n', info); */
          l_m2c_error(info);
        }
      }

      flag = b_varargin_1->size[0] * b_varargin_1->size[1];
      b_varargin_1->size[0] = 1;
      b_varargin_1->size[1] = (short)loop_ub;
      emxEnsureCapacity((emxArray__common *)b_varargin_1, flag, (int)sizeof(char));
      loop_ub = (short)loop_ub;
      for (flag = 0; flag < loop_ub; flag++) {
        b_varargin_1->data[flag] = (signed char)varargin_1->data[flag];
      }

      m_m2c_error(b_varargin_1);
    }
  }

  emxFree_char_T(&b_varargin_1);
  emxFree_uint8_T(&varargin_1);
}

/*
 * function [ksp, time, toplevel] = mptKSPSetup(Amat, ksptype, pctype, pcopt)
 */
static void mptKSPSetup(Mat Amat, const emxArray_char_T *ksptype, KSP *ksp,
  double *time)
{
  PetscObject t_obj;
  MPI_Comm t_comm;
  int errCode;
  int flag;
  KSP t_ksp;
  double t;
  emxArray_char_T *ksptype0;
  int loop_ub;
  double secs;

  /*  Sets up KSP using the given matrix (matrices). */
  /*  */
  /*  Syntax: */
  /*   ksp = mptKSPSetup(A) */
  /*   ksp = mptKSPSetup(A, ksptype) */
  /*   ksp = mptKSPSetup(A, ksptype, pctype) */
  /*   ksp = mptKSPSetup(A, ksptype, pctype, pcopt) */
  /*  */
  /*  Description: */
  /*   ksp = mptKSPSetup(A) sets up a KSP using matrix A. */
  /*  */
  /*   ksp = mptKSPSetup(A, ksptype) uses the specified type of the KSP. */
  /*  */
  /*   ksp = mptKSPSetup(A, ksptype, pctype) also sets the type of the KSP */
  /*     and the preconditioner. Note that pctype can be NULL. */
  /*  */
  /*   ksp = mptKSPSetup(A, ksptype, pctype, pcopt) aspecifies additional */
  /*     control options for the preconditioner. It can be PETSC_MATSOLVER*, */
  /*     which is useful when the ksptype is PETSC_KSPPREONLY, and the pctype */
  /*     is a direct method (such as PETSC_PCLU or PETSC_PCCHOLESKY). Otherwise, */
  /*     it may be 'left', 'right', or 'symmetric' (without null-terminator) */
  /*     to choose to use left, right, or symmetric preconditioners. By */
  /*     default, PETSc uses left preconditioners. */
  /*  */
  /*  See Also: mptKSPSolve, mptKSPCleanup */
  /* 'mptKSPSetup:33' t_Amat = Amat; */
  /* 'mptKSPSetup:34' t_ksp = petscKSPCreate(petscObjectGetComm(t_Amat)); */
  /* Gets the MPI communicator for any PetscObject, regardless of the type.  */
  /*  */
  /*   [comm, errCode] = petscObjectGetComm(obj) */
  /*  */
  /*   obtains the MPI_Comm associated with the PetscObject. */
  /*  */
  /*   SEE ALSO: petscMatSetType, petscMatSetFromOptions */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  PetscObjectGetComm(PetscObject obj,MPI_Comm *comm) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscObjectGetComm.html */
  /* 'petscObjectGetComm:16' errCode = int32(-1); */
  /* 'petscObjectGetComm:18' if ~isempty(coder.target) */
  /* 'petscObjectGetComm:19' t_obj = PetscObject(obj); */
  /* Map an opaque object into a PETSc PetscObject object */
  /*  */
  /*   obj = PetscObject() simply returns a definition of the */
  /*   m2c_opaque_type definition, suitable in the argument */
  /*   specification for codegen. */
  /*  */
  /*   obj = PetscObject(arg) or obj = PetscObject(arg, false) converts */
  /*   arg into a PETSc Object object. */
  /*  */
  /*   obj = PetscObject(arg, 'wrap') or obj = PetscObject(arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the  */
  /*   object needs to be returned to MATLAB. Note that the value of  */
  /*   opaque must be determined at compile time. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscObject:18' coder.inline('always'); */
  /* 'PetscObject:20' if nargin==0 && isempty(coder.target) */
  /* 'PetscObject:25' if isstruct(arg) && ~isequal(arg.type, 'PetscObject') && ... */
  /* 'PetscObject:26'         ~isequal(arg.type, 'Mat') && ~isequal(arg.type, 'Vec') && ... */
  /* 'PetscObject:27'         ~isequal(arg.type, 'KSP') && ~isequal(arg.type, 'PC') */
  /* 'PetscObject:32' if ~isstruct(arg) || isempty(coder.target) */
  /* 'PetscObject:33' if nargin==1 || ischar(wrap) || ~wrap */
  /* 'PetscObject:34' obj = coder.opaque('PetscObject'); */
  /* 'PetscObject:35' obj = coder.ceval('(PetscObject)', arg); */
  t_obj = (PetscObject)(Amat);

  /* 'petscObjectGetComm:20' t_comm = coder.opaque('MPI_Comm'); */
  /* 'petscObjectGetComm:22' errCode = coder.ceval('PetscObjectGetComm', t_obj, coder.wref(t_comm)); */
  errCode = PetscObjectGetComm(t_obj, &t_comm);

  /* 'petscObjectGetComm:24' toplevel = nargout>2; */
  /* 'petscObjectGetComm:25' comm = MPI_Comm(t_comm, toplevel); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscObjectGetComm:27' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    flag = (M2C_DEBUG);
    if (flag != 0) {
      /* 'petscObjectGetComm:28' m2c_error('petsc:RuntimeError', 'PetscObjectGetComm returned error code %d\n', errCode) */
      j_m2c_error(errCode);
    }
  }

  /* Creates a preconditioner context. */
  /*  */
  /*   [ksp, errCode] = petscKSPCreate */
  /*       creates a PETSc KSP using PETSC_COMM_WORLD */
  /*  */
  /*   [ksp, errCode] = petscKSPCreate(comm) */
  /*       comm: MPI Communicator */
  /*  */
  /*   SEE ALSO: petscKSPSetUp, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPCreate(MPI_Comm comm,KSP *ksp) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPCreate.html */
  /* 'petscKSPCreate:18' errCode = int32(-1); */
  /* 'petscKSPCreate:20' if ~isempty(coder.target) */
  /* 'petscKSPCreate:21' t_ksp = coder.opaque('KSP'); */
  /* 'petscKSPCreate:23' if nargin==0 */
  /* 'petscKSPCreate:25' else */
  /* 'petscKSPCreate:26' t_comm = MPI_Comm(comm); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPCreate:29' errCode = coder.ceval('KSPCreate', t_comm, coder.wref(t_ksp)); */
  errCode = KSPCreate(t_comm, &t_ksp);

  /* 'petscKSPCreate:31' toplevel = nargout>2; */
  /* 'petscKSPCreate:32' ksp = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPCreate:34' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    flag = (M2C_DEBUG);
    if (flag != 0) {
      /* 'petscKSPCreate:35' m2c_error('petsc:RuntimeError', 'KSPCreate returned error code %d\n', errCode) */
      k_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:36' if nargout>1 */
  /* 'mptKSPSetup:37' time = 0; */
  /* 'mptKSPSetup:38' comm = petscObjectGetComm(t_ksp); */
  /* Gets the MPI communicator for any PetscObject, regardless of the type.  */
  /*  */
  /*   [comm, errCode] = petscObjectGetComm(obj) */
  /*  */
  /*   obtains the MPI_Comm associated with the PetscObject. */
  /*  */
  /*   SEE ALSO: petscMatSetType, petscMatSetFromOptions */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  PetscObjectGetComm(PetscObject obj,MPI_Comm *comm) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscObjectGetComm.html */
  /* 'petscObjectGetComm:16' errCode = int32(-1); */
  /* 'petscObjectGetComm:18' if ~isempty(coder.target) */
  /* 'petscObjectGetComm:19' t_obj = PetscObject(obj); */
  /* Map an opaque object into a PETSc PetscObject object */
  /*  */
  /*   obj = PetscObject() simply returns a definition of the */
  /*   m2c_opaque_type definition, suitable in the argument */
  /*   specification for codegen. */
  /*  */
  /*   obj = PetscObject(arg) or obj = PetscObject(arg, false) converts */
  /*   arg into a PETSc Object object. */
  /*  */
  /*   obj = PetscObject(arg, 'wrap') or obj = PetscObject(arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the  */
  /*   object needs to be returned to MATLAB. Note that the value of  */
  /*   opaque must be determined at compile time. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscObject:18' coder.inline('always'); */
  /* 'PetscObject:20' if nargin==0 && isempty(coder.target) */
  /* 'PetscObject:25' if isstruct(arg) && ~isequal(arg.type, 'PetscObject') && ... */
  /* 'PetscObject:26'         ~isequal(arg.type, 'Mat') && ~isequal(arg.type, 'Vec') && ... */
  /* 'PetscObject:27'         ~isequal(arg.type, 'KSP') && ~isequal(arg.type, 'PC') */
  /* 'PetscObject:32' if ~isstruct(arg) || isempty(coder.target) */
  /* 'PetscObject:33' if nargin==1 || ischar(wrap) || ~wrap */
  /* 'PetscObject:34' obj = coder.opaque('PetscObject'); */
  /* 'PetscObject:35' obj = coder.ceval('(PetscObject)', arg); */
  t_obj = (PetscObject)(t_ksp);

  /* 'petscObjectGetComm:20' t_comm = coder.opaque('MPI_Comm'); */
  /* 'petscObjectGetComm:22' errCode = coder.ceval('PetscObjectGetComm', t_obj, coder.wref(t_comm)); */
  errCode = PetscObjectGetComm(t_obj, &t_comm);

  /* 'petscObjectGetComm:24' toplevel = nargout>2; */
  /* 'petscObjectGetComm:25' comm = MPI_Comm(t_comm, toplevel); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscObjectGetComm:27' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    flag = (M2C_DEBUG);
    if (flag != 0) {
      /* 'petscObjectGetComm:28' m2c_error('petsc:RuntimeError', 'PetscObjectGetComm returned error code %d\n', errCode) */
      j_m2c_error(errCode);
    }
  }

  /*  When timing the run, use mpi_Barrier for more accurate results. */
  /* 'mptKSPSetup:40' mpi_Barrier(comm); */
  mpi_Barrier(t_comm);

  /* 'mptKSPSetup:41' t = mpi_Wtime(); */
  /* mpi_Wtime    Returns an elapsed time on the calling processor */
  /*  */
  /*   secs = mpi_Wtime */
  /*  */
  /*   secs (double) Time in seconds since an arbitrary time in the past */
  /*  */
  /*   SEE ALSO: mpi_Wtick */
  /*  */
  /*  C interface: */
  /*  double MPI_Wtime(void) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Wtime.html */
  /* 'mpi_Wtime:17' secs = 0; */
  /* 'mpi_Wtime:18' secs = coder.ceval('MPI_Wtime'); */
  t = MPI_Wtime();

  /*  Setup KSP */
  /* 'mptKSPSetup:45' petscKSPSetOperators(t_ksp, PetscMat(t_Amat)); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* Sets the matrix associated with the linear system and a (possibly) */
  /* different one associated with the preconditioner. */
  /*  */
  /*   errCode = petscKSPSetOperators(ksp, Amat) */
  /*  */
  /*   sets the matrix to be Amat and use the same matrix to construct the */
  /*   preconditioner. */
  /*      ksp - iterative context obtained from petscKSPCreate */
  /*      Amat	  - the right hand side vector */
  /*  */
  /*   errCode = petscKSPSetOperators(ksp, Amat, Pmat) */
  /*  */
  /*   uses the matrix Pmat to construct the preconditioner. */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetUp, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetOperators(KSP ksp,Mat Amat,Mat Pmat) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetOperators.html */
  /* 'petscKSPSetOperators:25' errCode = int32(-1); */
  /* 'petscKSPSetOperators:27' if ~isempty(coder.target) */
  /* 'petscKSPSetOperators:28' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetOperators:29' t_Amat = PetscMat(Amat); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetOperators:31' if nargin==2 */
  /* 'petscKSPSetOperators:32' t_Pmat = t_Amat; */
  /* 'petscKSPSetOperators:37' errCode = coder.ceval('KSPSetOperators', t_ksp, t_Amat, t_Pmat); */
  errCode = KSPSetOperators(t_ksp, Amat, Amat);

  /* 'petscKSPSetOperators:39' toplevel = nargout>1; */
  /* 'petscKSPSetOperators:40' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    flag = (M2C_DEBUG);
    if (flag != 0) {
      /* 'petscKSPSetOperators:41' m2c_error('petsc:RuntimeError', 'KSPSetOperators returned error code %d\n', errCode) */
      n_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:47' if nargin>1 */
  /* 'mptKSPSetup:48' if nargin>2 */
  /* 'mptKSPSetup:49' hasPC = ~ischar(pctype) || ~isempty(pctype); */
  /* 'mptKSPSetup:50' hasOpt = nargin>3 && (~ischar(pcopt) || ~isempty(pcopt)); */
  /* 'mptKSPSetup:52' if hasPC || hasOpt */
  /* 'mptKSPSetup:85' if ischar(ksptype) && ~isempty(ksptype) && ksptype(end)~=0 */
  emxInit_char_T(&ksptype0, 2);
  if ((!(ksptype->size[1] == 0)) && ((unsigned char)ksptype->data[ksptype->size
       [1] - 1] != 0)) {
    /*  null-terminate the string if not terminated properly */
    /* 'mptKSPSetup:87' ksptype0 = [ksptype char(0)]; */
    flag = ksptype0->size[0] * ksptype0->size[1];
    ksptype0->size[0] = 1;
    ksptype0->size[1] = ksptype->size[1] + 1;
    emxEnsureCapacity((emxArray__common *)ksptype0, flag, (int)sizeof(char));
    loop_ub = ksptype->size[1];
    for (flag = 0; flag < loop_ub; flag++) {
      ksptype0->data[ksptype0->size[0] * flag] = ksptype->data[ksptype->size[0] *
        flag];
    }

    ksptype0->data[ksptype0->size[0] * ksptype->size[1]] = '\x00';
  } else {
    /* 'mptKSPSetup:88' else */
    /* 'mptKSPSetup:89' ksptype0 = ksptype; */
    flag = ksptype0->size[0] * ksptype0->size[1];
    ksptype0->size[0] = 1;
    ksptype0->size[1] = ksptype->size[1];
    emxEnsureCapacity((emxArray__common *)ksptype0, flag, (int)sizeof(char));
    loop_ub = ksptype->size[0] * ksptype->size[1];
    for (flag = 0; flag < loop_ub; flag++) {
      ksptype0->data[flag] = ksptype->data[flag];
    }
  }

  /* 'mptKSPSetup:91' if ischar(ksptype0) && ~isempty(ksptype0) || ~ischar(ksptype0) */
  if (!(ksptype0->size[1] == 0)) {
    /*  Set KSP Types */
    /* 'mptKSPSetup:93' petscKSPSetType(t_ksp, ksptype0); */
    /* Builds KSP for a particular solver. */
    /*  */
    /*   errCode = petscKSPSetType(ksp, type) sets the type of the KSP */
    /*  */
    /*   SEE ALSO:  PetscPCSetType, petscKSPCreate */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPSetType(KSP ksp, KSPType type) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetType.html */
    /* 'petscKSPSetType:14' errCode = int32(-1); */
    /* 'petscKSPSetType:16' if ~isempty(coder.target) */
    /* 'petscKSPSetType:17' if ischar(type) */
    /* 'petscKSPSetType:18' errCode = coder.ceval('KSPSetType', PetscKSP(ksp), coder.rref(type)); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPSetType(t_ksp, &ksptype0->data[0]);

    /* 'petscKSPSetType:23' toplevel = nargout>1; */
    /* 'petscKSPSetType:24' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      flag = (M2C_DEBUG);
      if (flag != 0) {
        /* 'petscKSPSetType:25' m2c_error('petsc:RuntimeError', 'KSPSetType returned error code %d\n', errCode) */
        nb_m2c_error(errCode);
      }
    }
  }

  emxFree_char_T(&ksptype0);

  /* 'mptKSPSetup:97' if nargin<=3 || isempty(pcopt) */
  /*  Use right-preconditioner by default */
  /* 'mptKSPSetup:99' petscKSPSetPCSide(t_ksp, PETSC_PC_RIGHT); */
  /*  Obtain PETSC constant PC_RIGHT */
  /* 'PETSC_PC_RIGHT:4' coder.inline('always'); */
  /* 'PETSC_PC_RIGHT:6' val = petscGetEnum('PC_RIGHT'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:181' case 'PC_RIGHT' */
  /* 'petscGetEnum:182' [val, toplevel] = get_val('PetscInt', 'PC_RIGHT', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  flag = (PC_RIGHT);

  /* Sets the preconditioning side. */
  /*  */
  /*   errCode = petscKSPSetPCSide(ksp, side) sets the side of the KSP */
  /*  */
  /*   SEE ALSO:  petscKSPGetPCSide */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetPCSide(KSP ksp, PCSide side) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetPCSide.html */
  /* 'petscKSPSetPCSide:14' errCode = int32(-1); */
  /* 'petscKSPSetPCSide:16' if ~isempty(coder.target) */
  /* 'petscKSPSetPCSide:17' errCode = coder.ceval('KSPSetPCSide', PetscKSP(ksp), side); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  errCode = KSPSetPCSide(t_ksp, flag);

  /* 'petscKSPSetPCSide:19' toplevel = nargout>1; */
  /* 'petscKSPSetPCSide:20' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    flag = (M2C_DEBUG);
    if (flag != 0) {
      /* 'petscKSPSetPCSide:21' m2c_error('petsc:RuntimeError', 'KSPSetPCSide returned error code %d\n', errCode) */
      o_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:102' petscKSPSetFromOptions(t_ksp); */
  /* Sets KSP options from the options database. This routine must be called */
  /* before KSPSetUp() if the user is to be allowed to set the Krylov type. */
  /*  */
  /*   errCode = petscKSPSetFromOptions(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetOperators, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPSetFromOptions(KSP ksp) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetFromOptions.html */
  /* 'petscKSPSetFromOptions:15' errCode = int32(-1); */
  /* 'petscKSPSetFromOptions:17' if ~isempty(coder.target) */
  /* 'petscKSPSetFromOptions:18' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetFromOptions:20' errCode = coder.ceval('KSPSetFromOptions', t_ksp); */
  errCode = KSPSetFromOptions(t_ksp);

  /* 'petscKSPSetFromOptions:22' toplevel = nargout>1; */
  /* 'petscKSPSetFromOptions:23' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    flag = (M2C_DEBUG);
    if (flag != 0) {
      /* 'petscKSPSetFromOptions:24' m2c_error('petsc:RuntimeError', 'KSPSetFromOptions returned error code %d\n', errCode) */
      p_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:104' petscKSPSetUp(t_ksp); */
  /* Sets up the internal data structures for the later use of an iterative solver. */
  /*  */
  /*   errCode = petscKSPSetUp(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetOperators, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPSetUp(KSP ksp) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetUp.html */
  /* 'petscKSPSetUp:14' errCode = int32(-1); */
  /* 'petscKSPSetUp:16' if ~isempty(coder.target) */
  /* 'petscKSPSetUp:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetUp:19' errCode = coder.ceval('KSPSetUp', t_ksp); */
  errCode = KSPSetUp(t_ksp);

  /* 'petscKSPSetUp:21' toplevel = nargout>1; */
  /* 'petscKSPSetUp:22' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    flag = (M2C_DEBUG);
    if (flag != 0) {
      /* 'petscKSPSetUp:23' m2c_error('petsc:RuntimeError', 'KSPSetUp returned error code %d\n', errCode) */
      q_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:106' if nargout>1 */
  /*  When timing the run, use mpi_Barrier for more accurate results. */
  /* 'mptKSPSetup:108' mpi_Barrier(comm); */
  mpi_Barrier(t_comm);

  /* 'mptKSPSetup:109' time = mpi_Wtime()-t; */
  /* mpi_Wtime    Returns an elapsed time on the calling processor */
  /*  */
  /*   secs = mpi_Wtime */
  /*  */
  /*   secs (double) Time in seconds since an arbitrary time in the past */
  /*  */
  /*   SEE ALSO: mpi_Wtick */
  /*  */
  /*  C interface: */
  /*  double MPI_Wtime(void) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Wtime.html */
  /* 'mpi_Wtime:17' secs = 0; */
  /* 'mpi_Wtime:18' secs = coder.ceval('MPI_Wtime'); */
  secs = MPI_Wtime();
  *time = secs - t;

  /* 'mptKSPSetup:112' toplevel = nargout>2; */
  /* 'mptKSPSetup:113' ksp = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  *ksp = t_ksp;
}

/*
 * function [flag,relres,iter,reshis,time] = mptKSPSolve(ksp, b, x, rtol, maxits, x0)
 */
static void mptKSPSolve(KSP ksp, Vec b, Vec x, Vec x0, int *flag, double *relres,
  int *iter, emxArray_real_T *reshis, double *time)
{
  int val;
  double bnrm;
  int errCode;
  int b_flag;
  PetscObject t_obj;
  MPI_Comm t_comm;
  double t;
  int maxits;
  int b_val;
  boolean_T b0;
  double secs;
  double res;
  double rtol;
  double abstol;
  double dtol;
  emxArray_char_T *side;
  PC t_pc;
  PetscReal * a;
  int na;
  int b_side;
  static const char cv0[9] = { 's', 'y', 'm', 'm', 'e', 't', 'r', 'i', 'c' };

  static const char cv1[4] = { 'l', 'e', 'f', 't' };

  static const char cv2[5] = { 'r', 'i', 'g', 'h', 't' };

  KSPType t_type;
  PCType b_t_type;

  /*  Solves linear system. */
  /*  */
  /*  Syntax: */
  /*     mptKSPSolve(ksp, b) */
  /*     mptKSPSolve(ksp, b, x) */
  /*     mptKSPSolve(ksp, b, x, rtol) */
  /*     mptKSPSolve(ksp, b, x, rtol, maxits) */
  /*     mptKSPSolve(ksp, b, x, rtol, maxits, x0) */
  /*  */
  /*     [flag, relres, iter, reshis, time] = mptKSPSolve(...) returns the flag */
  /*        (KSPConvergedReason), relative residual, number of iterations,  */
  /*     history of residual used in convergence test (typically preconditioned  */
  /*     residual), and execution times. */
  /*  */
  /*  Description: */
  /*     mptKSPSolve(ksp, b) solves the linear system using the tolerances */
  /*     that have been set previously by the user. The solution overwrites b. */
  /*  */
  /*     mptKSPSolve(ksp, b, x) solves the linear system and saves the solution */
  /*     into x. */
  /*  */
  /*     mptKSPSolve(ksp, b, x, rtol) solves with the given relative tolerance. */
  /*  */
  /*     mptKSPSolve(ksp, b, x, rtol, maxits) solves with the given relative */
  /*     tolerances and maximum iteration count. */
  /*  */
  /*     mptKSPSolve(ksp, b, rtol, maxits, x0) uses x0 as the initial guess */
  /*  */
  /*  See also mptKSPSetup, mptKSPCleanup */
  /*  Compute norm of b before it is overwritten */
  /* 'mptKSPSolve:39' bnrm = petscVecNorm(b, PETSC_NORM_2); */
  /*  Obtain PETSC constant NORM_2 */
  /* 'PETSC_NORM_2:4' coder.inline('always'); */
  /* 'PETSC_NORM_2:6' val = petscGetEnum('NORM_2'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:161' case 'NORM_2' */
  /* 'petscGetEnum:162' [val, toplevel] = get_val('NormType', 'NORM_2', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  val = (NORM_2);

  /* Computes the vector norm. */
  /*  */
  /*   [nrm, errCode, toplevel] = petscVecNorm(x, type) computes the norm of */
  /*      vector x of the given type, where type can be PETSC_NORM_1, */
  /*      PETSC_NORM_2 or PETSC_NORM_INFINITY. */
  /*  */
  /*   [nrm, errCode, toplevel] = petscVecNorm(x, type, nrm) allows also */
  /*      use PETSC_NORM_1_AND_2. In this case, nrm must be given as an input */
  /*      of size 2-by-1. */
  /*  */
  /*   SEE ALSO: petscMatNorm */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  VecNorm(Vec x,NormType type,PetscReal *val) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecNorm.html */
  /* 'petscVecNorm:21' errCode = int32(-1); */
  /* 'petscVecNorm:23' if ~isempty(coder.target) */
  /* 'petscVecNorm:24' if nargin==2 */
  /* 'petscVecNorm:25' nrm = double(0); */
  /* 'petscVecNorm:27' errCode = coder.ceval('VecNorm', PetscVec(x), type, coder.wref(nrm)); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  errCode = VecNorm(b, val, &bnrm);

  /* 'petscVecNorm:29' toplevel = nargout>2; */
  /* 'petscVecNorm:30' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecNorm:31' m2c_error('petsc:RuntimeError', 'VecNorm returned error code %d\n', errCode) */
      r_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:40' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'mptKSPSolve:42' if nargout>4 */
  /* 'mptKSPSolve:43' time = 0; */
  /* 'mptKSPSolve:44' comm = petscObjectGetComm(t_ksp); */
  /* Gets the MPI communicator for any PetscObject, regardless of the type.  */
  /*  */
  /*   [comm, errCode] = petscObjectGetComm(obj) */
  /*  */
  /*   obtains the MPI_Comm associated with the PetscObject. */
  /*  */
  /*   SEE ALSO: petscMatSetType, petscMatSetFromOptions */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  PetscObjectGetComm(PetscObject obj,MPI_Comm *comm) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscObjectGetComm.html */
  /* 'petscObjectGetComm:16' errCode = int32(-1); */
  /* 'petscObjectGetComm:18' if ~isempty(coder.target) */
  /* 'petscObjectGetComm:19' t_obj = PetscObject(obj); */
  /* Map an opaque object into a PETSc PetscObject object */
  /*  */
  /*   obj = PetscObject() simply returns a definition of the */
  /*   m2c_opaque_type definition, suitable in the argument */
  /*   specification for codegen. */
  /*  */
  /*   obj = PetscObject(arg) or obj = PetscObject(arg, false) converts */
  /*   arg into a PETSc Object object. */
  /*  */
  /*   obj = PetscObject(arg, 'wrap') or obj = PetscObject(arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the  */
  /*   object needs to be returned to MATLAB. Note that the value of  */
  /*   opaque must be determined at compile time. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscObject:18' coder.inline('always'); */
  /* 'PetscObject:20' if nargin==0 && isempty(coder.target) */
  /* 'PetscObject:25' if isstruct(arg) && ~isequal(arg.type, 'PetscObject') && ... */
  /* 'PetscObject:26'         ~isequal(arg.type, 'Mat') && ~isequal(arg.type, 'Vec') && ... */
  /* 'PetscObject:27'         ~isequal(arg.type, 'KSP') && ~isequal(arg.type, 'PC') */
  /* 'PetscObject:32' if ~isstruct(arg) || isempty(coder.target) */
  /* 'PetscObject:33' if nargin==1 || ischar(wrap) || ~wrap */
  /* 'PetscObject:34' obj = coder.opaque('PetscObject'); */
  /* 'PetscObject:35' obj = coder.ceval('(PetscObject)', arg); */
  t_obj = (PetscObject)(ksp);

  /* 'petscObjectGetComm:20' t_comm = coder.opaque('MPI_Comm'); */
  /* 'petscObjectGetComm:22' errCode = coder.ceval('PetscObjectGetComm', t_obj, coder.wref(t_comm)); */
  errCode = PetscObjectGetComm(t_obj, &t_comm);

  /* 'petscObjectGetComm:24' toplevel = nargout>2; */
  /* 'petscObjectGetComm:25' comm = MPI_Comm(t_comm, toplevel); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscObjectGetComm:27' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscObjectGetComm:28' m2c_error('petsc:RuntimeError', 'PetscObjectGetComm returned error code %d\n', errCode) */
      j_m2c_error(errCode);
    }
  }

  /*  When timing the run, use mpi_Barrier for more accurate results. */
  /* 'mptKSPSolve:46' mpi_Barrier(comm); */
  mpi_Barrier(t_comm);

  /* 'mptKSPSolve:47' t = mpi_Wtime(); */
  /* mpi_Wtime    Returns an elapsed time on the calling processor */
  /*  */
  /*   secs = mpi_Wtime */
  /*  */
  /*   secs (double) Time in seconds since an arbitrary time in the past */
  /*  */
  /*   SEE ALSO: mpi_Wtick */
  /*  */
  /*  C interface: */
  /*  double MPI_Wtime(void) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Wtime.html */
  /* 'mpi_Wtime:17' secs = 0; */
  /* 'mpi_Wtime:18' secs = coder.ceval('MPI_Wtime'); */
  t = MPI_Wtime();

  /* 'mptKSPSolve:50' if nargin<5 || maxits==0 */
  /* 'mptKSPSolve:51' maxits = PETSC_DEFAULT; */
  /*  Obtain PETSC constant PETSC_DEFAULT */
  /* 'PETSC_DEFAULT:4' coder.inline('always'); */
  /* 'PETSC_DEFAULT:6' val = petscGetEnum('PETSC_DEFAULT'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:189' case 'PETSC_DEFAULT' */
  /* 'petscGetEnum:190' [val, toplevel] = get_val('PetscInt', 'PETSC_DEFAULT', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  maxits = (PETSC_DEFAULT);

  /*  Solve the linear system */
  /* 'mptKSPSolve:55' if nargin==2 */
  /* 'mptKSPSolve:58' else */
  /*  Set tolerances */
  /* 'mptKSPSolve:60' if nargin>=4 */
  /* 'mptKSPSolve:61' if rtol==0 */
  /* 'mptKSPSolve:62' rtol = double(PETSC_DEFAULT); */
  /*  Obtain PETSC constant PETSC_DEFAULT */
  /* 'PETSC_DEFAULT:4' coder.inline('always'); */
  /* 'PETSC_DEFAULT:6' val = petscGetEnum('PETSC_DEFAULT'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:189' case 'PETSC_DEFAULT' */
  /* 'petscGetEnum:190' [val, toplevel] = get_val('PetscInt', 'PETSC_DEFAULT', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  val = (PETSC_DEFAULT);

  /* 'mptKSPSolve:64' petscKSPSetTolerances(t_ksp, double(rtol), double(PETSC_DEFAULT), ... */
  /* 'mptKSPSolve:65'             double(PETSC_DEFAULT), int32(maxits)); */
  /*  Obtain PETSC constant PETSC_DEFAULT */
  /* 'PETSC_DEFAULT:4' coder.inline('always'); */
  /* 'PETSC_DEFAULT:6' val = petscGetEnum('PETSC_DEFAULT'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:189' case 'PETSC_DEFAULT' */
  /* 'petscGetEnum:190' [val, toplevel] = get_val('PetscInt', 'PETSC_DEFAULT', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  b_val = (PETSC_DEFAULT);

  /*  Obtain PETSC constant PETSC_DEFAULT */
  /* 'PETSC_DEFAULT:4' coder.inline('always'); */
  /* 'PETSC_DEFAULT:6' val = petscGetEnum('PETSC_DEFAULT'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:189' case 'PETSC_DEFAULT' */
  /* 'petscGetEnum:190' [val, toplevel] = get_val('PetscInt', 'PETSC_DEFAULT', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  b_flag = (PETSC_DEFAULT);

  /* Sets the iteration tolerances used by the default KSP convergence testers. */
  /*  */
  /*  Syntax: */
  /*  */
  /*   [errCode, toplevel] = petscKSPSetTolerances(ksp, rtol) */
  /*   [errCode, toplevel] = petscKSPSetTolerances(ksp, rtol, abstol, dtol, maxits) */
  /*  */
  /*  Description */
  /*  */
  /*   errCode = petscKSPSetTolerances(ksp, rtol) sets the relative tolerance */
  /*        and let PETSc decides the rest. */
  /*  */
  /*   errCode = petscKSPSetTolerances(ksp, rtol, abstol, dtol, maxits) sets  */
  /*        the relative, absolute, divergence tolerances and the max-iteration count. */
  /*  */
  /*   uses the matrix Pmat to construct the preconditioner. */
  /*  */
  /*   SEE ALSO: petscKSPGetTolerances */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetTolerances(KSP ksp,PetscReal rtol,PetscReal abstol,PetscReal dtol,PetscInt maxits) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetTolerances.html */
  /* 'petscKSPSetTolerances:28' errCode = int32(-1); */
  /* 'petscKSPSetTolerances:30' if ~isempty(coder.target) */
  /* 'petscKSPSetTolerances:31' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetTolerances:33' if nargin==2 */
  /* 'petscKSPSetTolerances:39' errCode = coder.ceval('KSPSetTolerances', t_ksp, rtol, abstol, dtol, maxits); */
  errCode = KSPSetTolerances(ksp, (double)val, (double)b_val, (double)b_flag,
    maxits);

  /* 'petscKSPSetTolerances:41' toplevel = nargout>1; */
  /* 'petscKSPSetTolerances:42' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSetTolerances:43' m2c_error('petsc:RuntimeError', 'KSPSetTolerances returned error code %d\n', errCode) */
      s_m2c_error(errCode);
    }
  }

  /*  Process initial guess */
  /* 'mptKSPSolve:69' nonzeroGuess = int32(nargin>=6 && ~petscIsNULL(x0)); */
  /*  Determine whether a given object is a null opointer of a particular type. */
  /*  */
  /*     isn = petscIsNULL(obj) */
  /* 'petscIsNULL:6' if ischar(obj) */
  /* 'petscIsNULL:8' elseif ~isstruct(obj) */
  /* 'petscIsNULL:9' isn = int32(0); */
  /* 'petscIsNULL:10' isn = coder.ceval('!', obj); */
  b_flag = !(x0);
  b0 = !(b_flag != 0);

  /* 'mptKSPSolve:70' if nonzeroGuess */
  if (b0) {
    /* 'mptKSPSolve:71' petscVecCopy(x0, x); */
    /* Creates a vector from x to y. */
    /*  */
    /*   errCode = petscVecCopy(x, y) copies the entries from x to y. Both */
    /*   x and y must be distributed in the same manner; local copies are done. */
    /*  */
    /*   SEE ALSO: petscVecDuplicate */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  VecCopy(Vec x, Vec y) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecCopy.html */
    /* 'petscVecCopy:15' errCode = int32(-1); */
    /* 'petscVecCopy:17' if ~isempty(coder.target) */
    /* 'petscVecCopy:18' errCode = coder.ceval('VecCopy', PetscVec(x), PetscVec(y)); */
    /* Map an opaque object into a PETSc Vec object */
    /*  */
    /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
    /*  */
    /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
    /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscMat */
    /* 'PetscVec:14' coder.inline('always'); */
    /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    /* Map an opaque object into a PETSc Vec object */
    /*  */
    /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
    /*  */
    /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
    /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscMat */
    /* 'PetscVec:14' coder.inline('always'); */
    /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = VecCopy(x0, x);

    /* 'petscVecCopy:20' toplevel = nargout>2; */
    /* 'petscVecCopy:21' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      b_flag = (M2C_DEBUG);
      if (b_flag != 0) {
        /* 'petscVecCopy:22' m2c_error('petsc:RuntimeError', 'VecCopy returned error code %d\n', errCode) */
        t_m2c_error(errCode);
      }
    }
  }

  /* 'mptKSPSolve:75' if nargout>3 */
  /* 'mptKSPSolve:76' petscKSPSetResidualHistory(t_ksp, maxits, PETSC_TRUE); */
  /*  Obtain PETSC constant PETSC_TRUE */
  /* 'PETSC_TRUE:4' coder.inline('always'); */
  /* 'PETSC_TRUE:6' val = petscGetEnum('PETSC_TRUE'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:57' case 'PETSC_TRUE' */
  /* 'petscGetEnum:58' [val, toplevel] = get_val('PetscBool', 'PETSC_TRUE', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  val = (PETSC_TRUE);

  /*  Sets the array used to hold the residual history. If set, this array */
  /*  will contain the residual norms computed at each iteration of the solver. */
  /*  */
  /*   errCode = petscKSPSetResidualHistory(ksp) */
  /*   errCode = petscKSPSetResidualHistory(ksp, na) */
  /*   errCode = petscKSPSetResidualHistory(ksp, na, reset) sets the maximum */
  /*   size of the residual history. The argument reset indicates whether */
  /*   the history counter should be reset to zero for each new linear solve. */
  /*   The space for the residual history will be allocated by PETSc and can be */
  /*   retrieved by petscKSPGetResidualHistory. */
  /*  */
  /*   SEE ALSO: petscKSPGetResidualHistory */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetResidualHistory(KSP ksp,PetscReal a[],PetscInt na,PetscBool reset) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetResidualHistory.htm */
  /* 'petscKSPSetResidualHistory:23' errCode = int32(-1); */
  /* 'petscKSPSetResidualHistory:25' if ~isempty(coder.target) */
  /* 'petscKSPSetResidualHistory:26' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetResidualHistory:27' if nargin>=2 */
  /* 'petscKSPSetResidualHistory:27' na = int32(varargin{1}); */
  /* 'petscKSPSetResidualHistory:28' if nargin>=3 */
  /* 'petscKSPSetResidualHistory:28' reset = int32(varargin{2}); */
  /* 'petscKSPSetResidualHistory:30' a = coder.opaque('PetscReal *', 'NULL'); */
  /* 'petscKSPSetResidualHistory:31' errCode = coder.ceval('KSPSetResidualHistory', t_ksp, ... */
  /* 'petscKSPSetResidualHistory:32'         a, na, reset); */
  errCode = KSPSetResidualHistory(ksp, NULL, maxits, val);

  /* 'petscKSPSetResidualHistory:34' toplevel = nargout>1; */
  /* 'petscKSPSetResidualHistory:35' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSetResidualHistory:36' m2c_error('petsc:RuntimeError', ... */
      /* 'petscKSPSetResidualHistory:37'             'petscKSPSetResidualHistory returned error code %d\n', errCode) */
      u_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:79' petscKSPSetInitialGuessNonzero(t_ksp, nonzeroGuess); */
  /* Tells the iterative solver that the initial guess is nonzero; otherwise  */
  /* KSP assumes the initial guess is to be zero (and thus zeros it out before solving). */
  /*  */
  /*   errCode = petscKSPSetInitialGuessNonzero(ksp, flag) */
  /*   indicates the initial guess is non-zero if flag is PETSC_TRUE, and */
  /*   is zeo if flag is PETSC_FALSE (0). */
  /*  */
  /*   SEE ALSO: petscKSPGetInitialGuessNonzero */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetInitialGuessNonzero(KSP ksp,PetscBool flg) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetInitialGuessNonzero.html */
  /* 'petscKSPSetInitialGuessNonzero:17' errCode = int32(-1); */
  /* 'petscKSPSetInitialGuessNonzero:19' if ~isempty(coder.target) */
  /* 'petscKSPSetInitialGuessNonzero:20' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetInitialGuessNonzero:22' errCode = coder.ceval('KSPSetInitialGuessNonzero', t_ksp, flag); */
  errCode = KSPSetInitialGuessNonzero(ksp, (int)b0);

  /* 'petscKSPSetInitialGuessNonzero:24' toplevel = nargout>1; */
  /* 'petscKSPSetInitialGuessNonzero:25' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSetInitialGuessNonzero:26' m2c_error('petsc:RuntimeError', 'KSPSetInitialGuessNonzero returned error code %d\n', errCode) */
      v_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:80' petscKSPSolve(t_ksp, b, x); */
  /* Solves linear system. */
  /*  */
  /*   errCode = petscKSPSolve(ksp, b) */
  /*  */
  /*   solves the linear system with b as the RHS and saves the solution into b. */
  /*      ksp - iterative context obtained from petscKSPCreate() */
  /*      b	  - the right hand side vector */
  /*  */
  /*   errCode = petscKSPSolve(ksp, b, x) */
  /*  */
  /*   solves the linear system and saves the solution into vector x. */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetOperators, petscKSPSetUp, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPSolve(KSP ksp,Vec b,Vec x) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSolve.html */
  /* 'petscKSPSolve:23' errCode = int32(-1); */
  /* 'petscKSPSolve:25' if ~isempty(coder.target) */
  /* 'petscKSPSolve:26' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSolve:27' t_b = PetscVec(b); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSolve:29' if nargin==2 */
  /* 'petscKSPSolve:31' else */
  /* 'petscKSPSolve:32' t_x = PetscVec(x); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSolve:35' errCode = coder.ceval('KSPSolve', t_ksp, t_b, t_x); */
  errCode = KSPSolve(ksp, b, x);

  /* 'petscKSPSolve:37' toplevel = nargout>1; */
  /* 'petscKSPSolve:38' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSolve:39' m2c_error('petsc:RuntimeError', 'KSPSolve returned error code %d\n', errCode) */
      w_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:82' if nargout>4 */
  /*  When timing the run, use mpi_Barrier for more accurate results. */
  /* 'mptKSPSolve:84' mpi_Barrier(comm); */
  mpi_Barrier(t_comm);

  /* 'mptKSPSolve:85' time = mpi_Wtime()-t; */
  /* mpi_Wtime    Returns an elapsed time on the calling processor */
  /*  */
  /*   secs = mpi_Wtime */
  /*  */
  /*   secs (double) Time in seconds since an arbitrary time in the past */
  /*  */
  /*   SEE ALSO: mpi_Wtick */
  /*  */
  /*  C interface: */
  /*  double MPI_Wtime(void) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Wtime.html */
  /* 'mpi_Wtime:17' secs = 0; */
  /* 'mpi_Wtime:18' secs = coder.ceval('MPI_Wtime'); */
  secs = MPI_Wtime();
  *time = secs - t;

  /* 'mptKSPSolve:88' flag = petscKSPGetConvergedReason(t_ksp); */
  /* Gets the reason the KSP iteration was stopped. */
  /*  */
  /*   [flag, errCode] = petscKSPGetConvergedReason(ksp) */
  /*  */
  /*   SEE ALSO: KSPGetResidualNorm, petscKSPGetIterationNumber */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetConvergedReason(KSP ksp,KSPConvergedReason *reason) */
  /*  http://www.mcs.anl.gov/petsc/petsc-3.7/docs/manualpages/KSP/KSPGetConvergedReason.html */
  /* 'petscKSPGetConvergedReason:14' errCode = int32(-1); */
  /* 'petscKSPGetConvergedReason:16' if ~isempty(coder.target) */
  /* 'petscKSPGetConvergedReason:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetConvergedReason:19' flag = int32(0); */
  /* 'petscKSPGetConvergedReason:20' errCode = coder.ceval('KSPGetConvergedReason', t_ksp, coder.wref(flag)); */
  errCode = KSPGetConvergedReason(ksp, flag);

  /* 'petscKSPGetConvergedReason:22' toplevel = nargout>2; */
  /* 'petscKSPGetConvergedReason:23' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPGetConvergedReason:24' m2c_error('petsc:RuntimeError', 'KSPGetConvergedReason returned error code %d\n', errCode) */
      x_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:89' res = petscKSPGetResidualNorm(t_ksp); */
  /* Gets the last (approximate preconditioned) residual norm that has been computed. */
  /*  */
  /*   [rnorm, errCode] = petscKSPGetResidualNorm(ksp) */
  /*  */
  /*   SEE ALSO: KSPGetResidualNorm, petscKSPGetIterationNumber */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetResidualNorm(KSP ksp,PetscInt *rnorm) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetResidualNorm.html */
  /* 'petscKSPGetResidualNorm:14' errCode = int32(-1); */
  /* 'petscKSPGetResidualNorm:16' if ~isempty(coder.target) */
  /* 'petscKSPGetResidualNorm:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetResidualNorm:19' rnorm = 0; */
  /* 'petscKSPGetResidualNorm:20' errCode = coder.ceval('KSPGetResidualNorm', t_ksp, coder.wref(rnorm)); */
  errCode = KSPGetResidualNorm(ksp, &res);

  /* 'petscKSPGetResidualNorm:22' toplevel = nargout>2; */
  /* 'petscKSPGetResidualNorm:23' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPGetResidualNorm:24' m2c_error('petsc:RuntimeError', 'KSPGetResidualNorm returned error code %d\n', errCode) */
      y_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:90' iter = petscKSPGetIterationNumber(t_ksp); */
  /* Gets the current iteration number. */
  /*  */
  /*   [its, errCode] = petscKSPGetIterationNumber(ksp) */
  /*  */
  /*   gets the current iteration number; if the KSPSolve() is complete,  */
  /*   returns the number of iterations used.  */
  /*  */
  /*   SEE ALSO: petscKSPGetConvergedReason, KSPGetResidualNorm, petscKSPGetTotalIterations */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetIterationNumber(KSP ksp,PetscInt *its) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetIterationNumber.html */
  /* 'petscKSPGetIterationNumber:17' errCode = int32(-1); */
  /* 'petscKSPGetIterationNumber:19' if ~isempty(coder.target) */
  /* 'petscKSPGetIterationNumber:20' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetIterationNumber:22' its = int32(0); */
  /* 'petscKSPGetIterationNumber:23' errCode = coder.ceval('KSPGetIterationNumber', t_ksp, coder.wref(its)); */
  errCode = KSPGetIterationNumber(ksp, iter);

  /* 'petscKSPGetIterationNumber:25' toplevel = nargout>2; */
  /* 'petscKSPGetIterationNumber:26' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPGetIterationNumber:27' m2c_error('petsc:RuntimeError', 'KSPGetIterationNumber returned error code %d\n', errCode) */
      ab_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:91' relres = res/bnrm; */
  *relres = res / bnrm;

  /* 'mptKSPSolve:93' [rtol, abstol, dtol, maxits] = petscKSPGetTolerances(t_ksp); */
  /* Gets the relative, absolute, divergence, and maximum iteration tolerances */
  /* used by the default KSP convergence tests. */
  /*  */
  /*  Syntax: */
  /*  */
  /*   [rtol, arg2, dtol, maxits, errCode, toplevel] = petscKSPGetTolerances(ksp) */
  /*   obtains the relative, absolute, divergence tolerances and the max-iteration count. */
  /*  */
  /*   SEE ALSO: petscKSPSetTolerances */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetTolerances(KSP ksp,PetscReal *rtol,PetscReal *abstol,PetscReal *dtol,PetscInt *maxits) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetTolerances.html */
  /* 'petscKSPGetTolerances:18' errCode = int32(-1); */
  /* 'petscKSPGetTolerances:20' if ~isempty(coder.target) */
  /* 'petscKSPGetTolerances:21' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetTolerances:23' rtol = double(0); */
  /* 'petscKSPGetTolerances:24' abstol = double(0); */
  /* 'petscKSPGetTolerances:25' dtol = double(0); */
  /* 'petscKSPGetTolerances:26' maxits = int32(0); */
  /* 'petscKSPGetTolerances:28' errCode = coder.ceval('KSPGetTolerances', t_ksp, coder.wref(rtol), ... */
  /* 'petscKSPGetTolerances:29'         coder.wref(abstol), coder.wref(dtol), coder.wref(maxits)); */
  errCode = KSPGetTolerances(ksp, &rtol, &abstol, &dtol, &maxits);

  /* 'petscKSPGetTolerances:31' toplevel = nargout>5; */
  /* 'petscKSPGetTolerances:32' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPGetTolerances:33' m2c_error('petsc:RuntimeError', 'KSPGetTolerances returned error code %d\n', errCode) */
      bb_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:95' if flag < 0 || relres>rtol */
  emxInit_char_T(&side, 2);
  if ((*flag < 0) || (*relres > rtol)) {
    /* 'mptKSPSolve:96' pc = petscKSPGetPC(t_ksp); */
    /* Returns a pointer to the preconditioner context set with petscKSPSetPC. */
    /*  */
    /*   [pc, errCode] = petscKSPGetPC(ksp) gets the PC of the KSP */
    /*  */
    /*   SEE ALSO:  petscKSPSetPC */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPGetPC(KSP ksp,PC *pc) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetPC.html */
    /* 'petscKSPGetPC:14' errCode = int32(-1); */
    /* 'petscKSPGetPC:16' if ~isempty(coder.target) */
    /* 'petscKSPGetPC:17' t_pc = coder.opaque('PC'); */
    /* 'petscKSPGetPC:18' errCode = coder.ceval('KSPGetPC', PetscKSP(ksp), coder.wref(t_pc)); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPGetPC(ksp, &t_pc);

    /* 'petscKSPGetPC:20' toplevel = nargout>2; */
    /* 'petscKSPGetPC:21' pc = PetscPC(t_pc, toplevel); */
    /* Map an opaque object into a PETSc PC object */
    /*  */
    /*   PetscPC() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscPC(obj) or PetscPC(obj, false) converts arg into a PETSc PC object. */
    /*  */
    /*   PetscPC(arg, 'wrap') or PetscPC(obj, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscPC:14' coder.inline('always'); */
    /* 'PetscPC:16' pc = m2c_opaque_obj('PC', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    /* 'petscKSPGetPC:23' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      b_flag = (M2C_DEBUG);
      if (b_flag != 0) {
        /* 'petscKSPGetPC:24' m2c_error('petsc:RuntimeError', 'KSPGetPC returned error code %d\n', errCode) */
        cb_m2c_error(errCode);
      }
    }

    /* 'mptKSPSolve:97' switch petscKSPGetPCSide(t_ksp) */
    /* Gets the preconditioning side. */
    /*  */
    /*   [side, errCode] = petscKSPGetPCSide(ksp) returns the side of the KSP. */
    /*  */
    /*   SEE ALSO:  petscKSPSetPCSide */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPGetPCSide(KSP ksp,PCSide *side) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetPCSide.html */
    /* 'petscKSPGetPCSide:14' errCode = int32(-1); */
    /* 'petscKSPGetPCSide:16' if ~isempty(coder.target) */
    /* 'petscKSPGetPCSide:17' side = int32(0); */
    /* 'petscKSPGetPCSide:18' errCode = coder.ceval('KSPGetPCSide', PetscKSP(ksp), coder.wref(side)); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPGetPCSide(ksp, &b_side);

    /* 'petscKSPGetPCSide:20' toplevel = nargout>2; */
    /* 'petscKSPGetPCSide:21' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      b_flag = (M2C_DEBUG);
      if (b_flag != 0) {
        /* 'petscKSPGetPCSide:22' m2c_error('petsc:RuntimeError', 'KSPGetPCSide returned error code %d\n', errCode) */
        db_m2c_error(errCode);
      }
    }

    /*  Obtain PETSC constant PC_LEFT */
    /* 'PETSC_PC_LEFT:4' coder.inline('always'); */
    /* 'PETSC_PC_LEFT:6' val = petscGetEnum('PC_LEFT'); */
    /* petscGetEnum Obtain an enumerate value in PETSC */
    /*  */
    /*     val = petscGetEnum(name) */
    /*  */
    /* The supported names include: */
    /*  */
    /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
    /*  */
    /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
    /*       VEC_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
    /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
    /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
    /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
    /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
    /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
    /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
    /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
    /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
    /*       MAT_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
    /*  */
    /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
    /*  */
    /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
    /*  */
    /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
    /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
    /*  */
    /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
    /*  */
    /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
    /*  */
    /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
    /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
    /*  */
    /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
    /*  */
    /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
    /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
    /*  */
    /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
    /*  */
    /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
    /* 'petscGetEnum:51' if isempty(coder.target) */
    /* % InsertMode */
    /* 'petscGetEnum:56' switch name */
    /* 'petscGetEnum:179' case 'PC_LEFT' */
    /* 'petscGetEnum:180' [val, toplevel] = get_val('PetscInt', 'PC_LEFT', nargin>1); */
    /* 'petscGetEnum:201' coder.inline('always'); */
    /* 'petscGetEnum:203' val = int32(intmin); */
    /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
    val = (PC_LEFT);

    /*  Obtain PETSC constant PC_RIGHT */
    /* 'PETSC_PC_RIGHT:4' coder.inline('always'); */
    /* 'PETSC_PC_RIGHT:6' val = petscGetEnum('PC_RIGHT'); */
    /* petscGetEnum Obtain an enumerate value in PETSC */
    /*  */
    /*     val = petscGetEnum(name) */
    /*  */
    /* The supported names include: */
    /*  */
    /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
    /*  */
    /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
    /*       VEC_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
    /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
    /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
    /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
    /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
    /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
    /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
    /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
    /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
    /*       MAT_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
    /*  */
    /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
    /*  */
    /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
    /*  */
    /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
    /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
    /*  */
    /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
    /*  */
    /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
    /*  */
    /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
    /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
    /*  */
    /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
    /*  */
    /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
    /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
    /*  */
    /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
    /*  */
    /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
    /* 'petscGetEnum:51' if isempty(coder.target) */
    /* % InsertMode */
    /* 'petscGetEnum:56' switch name */
    /* 'petscGetEnum:181' case 'PC_RIGHT' */
    /* 'petscGetEnum:182' [val, toplevel] = get_val('PetscInt', 'PC_RIGHT', nargin>1); */
    /* 'petscGetEnum:201' coder.inline('always'); */
    /* 'petscGetEnum:203' val = int32(intmin); */
    /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
    b_val = (PC_RIGHT);
    if (val == b_side) {
      b_flag = 0;
    } else if (b_val == b_side) {
      b_flag = 1;
    } else {
      b_flag = -1;
    }

    switch (b_flag) {
     case 0:
      /* 'mptKSPSolve:98' case PETSC_PC_LEFT */
      /* 'mptKSPSolve:99' side = 'left'; */
      b_flag = side->size[0] * side->size[1];
      side->size[0] = 1;
      side->size[1] = 4;
      emxEnsureCapacity((emxArray__common *)side, b_flag, (int)sizeof(char));
      for (b_flag = 0; b_flag < 4; b_flag++) {
        side->data[b_flag] = cv1[b_flag];
      }
      break;

     case 1:
      /* 'mptKSPSolve:100' case PETSC_PC_RIGHT */
      /* 'mptKSPSolve:101' side = 'right'; */
      b_flag = side->size[0] * side->size[1];
      side->size[0] = 1;
      side->size[1] = 5;
      emxEnsureCapacity((emxArray__common *)side, b_flag, (int)sizeof(char));
      for (b_flag = 0; b_flag < 5; b_flag++) {
        side->data[b_flag] = cv2[b_flag];
      }
      break;

     default:
      /* 'mptKSPSolve:102' otherwise */
      /* 'mptKSPSolve:103' side = 'symmetric'; */
      b_flag = side->size[0] * side->size[1];
      side->size[0] = 1;
      side->size[1] = 9;
      emxEnsureCapacity((emxArray__common *)side, b_flag, (int)sizeof(char));
      for (b_flag = 0; b_flag < 9; b_flag++) {
        side->data[b_flag] = cv0[b_flag];
      }
      break;
    }

    /* 'mptKSPSolve:106' m2c_printf('### %s with %s as %s preconditioner stopped with flag %d.\n', ... */
    /* 'mptKSPSolve:107'         petscKSPGetType(t_ksp), petscPCGetType(pc), side, flag); */
    /* Gets the KSP type as a KSPType object from the KSP object. */
    /*  */
    /*   [type, errCode] = petscKSPGetType(ksp) gets the type of the KSP */
    /*  */
    /*   SEE ALSO:  petscKSPSetType */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPGetType(KSP ksp, KSPType *type) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetType.html */
    /* 'petscKSPGetType:14' errCode = int32(-1); */
    /* 'petscKSPGetType:16' if ~isempty(coder.target) */
    /* 'petscKSPGetType:17' t_type = coder.opaque('KSPType'); */
    /* 'petscKSPGetType:18' errCode = coder.ceval('KSPGetType', PetscKSP(ksp), coder.wref(t_type)); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPGetType(ksp, &t_type);

    /* 'petscKSPGetType:20' toplevel = nargout>2; */
    /* 'petscKSPGetType:21' type = PetscKSPType(t_type, toplevel); */
    /* Map a null-terminated C string into a PETSc KSPType handle */
    /*  */
    /*   PetscKSPType() simply returns a definition of a string, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscKSPType(arg) or PetscKSPType(arg, false) converts arg into */
    /*   a PETSc KSPType object. */
    /*  */
    /*   PetscKSPType(arg, 'wrap') or PetscKSPType(arg, true) copies the  */
    /*   arg into a MATLAB string. This should be used if the object */
    /*   needs to be returned to MATLAB. Note that the value of the */
    /*   second argument must be determined at compile time. */
    /*  */
    /*  See also PetscPCType, PETSC_KSP* */
    /* 'PetscKSPType:17' coder.inline('always'); */
    /* 'PetscKSPType:19' if nargin==0 && isempty(coder.target) */
    /* 'PetscKSPType:24' if isempty(coder.target) && ~ischar(arg) */
    /* 'PetscKSPType:29' if nargin==1 || ~ischar(wrap) && ~wrap */
    /* 'PetscKSPType:30' type = arg; */
    /* 'petscKSPGetType:23' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      b_flag = (M2C_DEBUG);
      if (b_flag != 0) {
        /* 'petscKSPGetType:24' m2c_error('petsc:RuntimeError', 'KSPGetType returned error code %d\n', errCode) */
        eb_m2c_error(errCode);
      }
    }

    /* Gets the PC type as a PCType object from the PC object. */
    /*  */
    /*   [type, errCode] = petscPCGetType(pc) gets the type of the PC */
    /*  */
    /*   SEE ALSO:  petscPCSetType */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  PCGetType(PC pc, PCType *type) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/PC/PCGetType.html */
    /* 'petscPCGetType:14' errCode = int32(-1); */
    /* 'petscPCGetType:16' if ~isempty(coder.target) */
    /* 'petscPCGetType:17' t_type = coder.opaque('PCType'); */
    /* 'petscPCGetType:18' errCode = coder.ceval('PCGetType', PetscPC(pc), coder.wref(t_type)); */
    /* Map an opaque object into a PETSc PC object */
    /*  */
    /*   PetscPC() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscPC(obj) or PetscPC(obj, false) converts arg into a PETSc PC object. */
    /*  */
    /*   PetscPC(arg, 'wrap') or PetscPC(obj, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscPC:14' coder.inline('always'); */
    /* 'PetscPC:16' pc = m2c_opaque_obj('PC', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = PCGetType(t_pc, &b_t_type);

    /* 'petscPCGetType:20' toplevel = nargout>2; */
    /* 'petscPCGetType:21' type = PetscPCType(t_type, toplevel); */
    /* Map a null-terminated C string into a PETSc PCType handle */
    /*  */
    /*   PetscPCType() simply returns a definition of a string, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscPCType(arg) or PetscPCType(arg, false) converts arg into a */
    /*   PETSc PCType object. */
    /*  */
    /*   PetscPCType(arg, 'wrap') or PetscPCType(arg, true) copies the */
    /*   arg into a MATLAB string. This should be used if the object */
    /*   needs to be returned to MATLAB. Note that the value of the */
    /*   second argument must be determined at compile time. */
    /*  */
    /*  See also PetscKSPType, PETSC_PC* */
    /* 'PetscPCType:17' coder.inline('always'); */
    /* 'PetscPCType:19' if nargin==0 && isempty(coder.target) */
    /* 'PetscPCType:24' if isempty(coder.target) && ~ischar(arg) */
    /* 'PetscPCType:29' if nargin==1 || ~ischar(wrap) && ~wrap */
    /* 'PetscPCType:30' type = arg; */
    /* 'petscPCGetType:23' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      b_flag = (M2C_DEBUG);
      if (b_flag != 0) {
        /* 'petscPCGetType:24' m2c_error('petsc:RuntimeError', 'PCGetType returned error code %d\n', errCode) */
        fb_m2c_error(errCode);
      }
    }

    m2c_printf(t_type, b_t_type, side, *flag);

    /* 'mptKSPSolve:108' m2c_printf('### The relative residual was %g after %d iterations.\n', relres, iter); */
    b_m2c_printf(*relres, *iter);

    /* 'mptKSPSolve:109' m2c_printf('### The relative and absolute tolerances were %g and %g.\n', rtol, abstol); */
    c_m2c_printf(rtol, abstol);

    /* 'mptKSPSolve:110' m2c_printf('### The divergence and max-iter tolerances were %d and %g.\n', maxits, dtol); */
    d_m2c_printf(maxits, dtol);

    /* 'mptKSPSolve:111' m2c_printf(['### For explanation of the flag, see http://www.mcs.anl.gov/petsc/' ... */
    /* 'mptKSPSolve:112'         'petsc-current/docs/manualpages/KSP/KSPConvergedReason.html.\n']); */
    e_m2c_printf();
  }

  emxFree_char_T(&side);

  /* 'mptKSPSolve:115' if nargout>3 */
  /*  Obtain convergence history */
  /* 'mptKSPSolve:117' reshis = petscKSPGetResidualHistory(t_ksp); */
  /* Gets the array used to hold the residual history and the number of */
  /* residuals it contains. */
  /*  */
  /*   [rehis, errCode] = KSPGetResidualHistory(ksp) returns a real array */
  /*   containing the residual history. */
  /*  */
  /*   SEE ALSO: petscKSPSetResidualHistory */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetResidualHistory(KSP ksp,PetscReal *a[], PetscInt *na) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetResidualHistory.html */
  /* 'petscKSPGetResidualHistory:16' errCode = int32(-1); */
  /* 'petscKSPGetResidualHistory:18' if ~isempty(coder.target) */
  /* 'petscKSPGetResidualHistory:19' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetResidualHistory:21' a = coder.opaque('PetscReal *', 'NULL'); */
  /* 'petscKSPGetResidualHistory:22' na = int32(0); */
  /* 'petscKSPGetResidualHistory:23' errCode = coder.ceval('KSPGetResidualHistory', t_ksp, ... */
  /* 'petscKSPGetResidualHistory:24'         coder.wref(a), coder.wref(na)); */
  errCode = KSPGetResidualHistory(ksp, &a, &na);

  /* 'petscKSPGetResidualHistory:26' reshis = zeros(na, 1); */
  b_flag = reshis->size[0];
  reshis->size[0] = na;
  emxEnsureCapacity((emxArray__common *)reshis, b_flag, (int)sizeof(double));
  for (b_flag = 0; b_flag < na; b_flag++) {
    reshis->data[b_flag] = 0.0;
  }

  /* 'petscKSPGetResidualHistory:27' coder.ceval('memcpy', coder.ref(reshis), a, int32(na*8)); */
  memcpy(&reshis->data[0], a, na << 3);

  /* 'petscKSPGetResidualHistory:29' toplevel = nargout>2; */
  /* 'petscKSPGetResidualHistory:30' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPGetResidualHistory:31' m2c_error('petsc:RuntimeError', 'KSPGetResidualHistory returned error code %d\n', errCode) */
      gb_m2c_error(errCode);
    }
  }
}

/*
 * function [mat_out, toplevel] = mptMatCreateAIJFromCRS(row_ptr, col_ind, val, varargin)
 */
static Mat mptMatCreateAIJFromCRS(const emxArray_int32_T *row_ptr, const
  emxArray_int32_T *col_ind, const emxArray_real_T *val)
{
  emxArray_int32_T *nnz;
  int n;
  int i0;
  int i;
  int b_val;
  Mat t_mat;
  int errCode;
  emxArray_int32_T *jidx;
  emxArray_real_T *rowval;
  int i1;
  int iroa;
  int type;
  emxInit_int32_T(&nnz, 1);

  /*  Creates a sparse matrix in PETSc using AIJ format from the CRS arrays format. */
  /*  */
  /*     mat = mptMatCreateAIJFromCRS(row_ptr, col_ind, val) */
  /*       creates a PETSc matrix using the default AIJ format. If there is only */
  /*       one processor, it uses the sequential AIJ format. If there are more */
  /*       than one processors, it uses the MPIAIJ format in PETSC_COMM_WORLD. */
  /*  */
  /*       row_ptr:   starting pointers for each row (1-based) */
  /*       col_ind:   column indices in each row (1-based) */
  /*       vals:      values in each row */
  /*  */
  /*     mat = mptMatCreateAIJFromCRS(row_ptr, col_ind, val, ncols, prefix) */
  /*       ncols:     the global number of columns */
  /*       prefix:    a character string specifics the prefix for the options. */
  /*            If specified and is nonempty, the function will call */
  /*            petscMatSetOptionsPrefix and then petscMatSetFromOptions */
  /*            to set the matrix type. This can be used to created a parallel */
  /*            matrix in PETSC_COMM_WORLD and set the local portion. */
  /*  */
  /*   The matrix must be deallocated by calling petscMatDestroy after use. */
  /*  */
  /*  SEE ALSO: petscMatDestroy, mptMatAIJToCRS, mptOptionsInsert */
  /* 'mptMatCreateAIJFromCRS:32' if nargin<3 */
  /* 'mptMatCreateAIJFromCRS:36' n = int32(length(row_ptr)-1); */
  n = row_ptr->size[0] - 1;

  /* 'mptMatCreateAIJFromCRS:38' if nargin<4 */
  /* 'mptMatCreateAIJFromCRS:39' ncols = n; */
  /*  Count the number of nonzeros per row */
  /* 'mptMatCreateAIJFromCRS:45' nnz = coder.nullcopy(zeros(n, 1, 'int32')); */
  i0 = nnz->size[0];
  nnz->size[0] = n;
  emxEnsureCapacity((emxArray__common *)nnz, i0, (int)sizeof(int));

  /* 'mptMatCreateAIJFromCRS:46' for i=1:n */
  for (i = 1; i <= n; i++) {
    /* 'mptMatCreateAIJFromCRS:47' nnz(i) = row_ptr(i+1)-row_ptr(i); */
    nnz->data[i - 1] = row_ptr->data[i] - row_ptr->data[i - 1];
  }

  /* 'mptMatCreateAIJFromCRS:50' if nargin<5 */
  /*  Create default matrix using petscMatCreateSeqAIJ */
  /* 'mptMatCreateAIJFromCRS:52' mat = petscMatCreateSeqAIJ(n, ncols, PETSC_DEFAULT, nnz); */
  /*  Obtain PETSC constant PETSC_DEFAULT */
  /* 'PETSC_DEFAULT:4' coder.inline('always'); */
  /* 'PETSC_DEFAULT:6' val = petscGetEnum('PETSC_DEFAULT'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:189' case 'PETSC_DEFAULT' */
  /* 'petscGetEnum:190' [val, toplevel] = get_val('PetscInt', 'PETSC_DEFAULT', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  b_val = (PETSC_DEFAULT);

  /* Creates a sparse matrix in AIJ (compressed row) format. */
  /*  */
  /*   [mat, errCode] = petscMatCreateSeqAIJ(m, n, nz) */
  /*  */
  /*    m   - number of rows */
  /*    n   - number of columns */
  /*    nz  - number of nonzeros per row (same for all rows) */
  /*  */
  /*   [Mat, errCode] = petscMatCreateSeqAIJ(m, n, ~, nnz) */
  /*  */
  /*    nnz - a column vector containing the number of nonzeros in the various  */
  /*          rows (possibly different for each row) */
  /*  */
  /*   [Mat, errCode] = petscMatCreateSeqAIJ(m, n, nz, [], ~) */
  /*   [Mat, errCode] = petscMatCreateSeqAIJ(m, n, ~, nnz, ~) */
  /*   This is an optimized version for returning an opaque PETSc Mat object */
  /*   instead of a MATLAB PetscMat object. It should be used when */
  /*   petscMatCreateSeqAIJ is not a top-level function for code generation. */
  /*  */
  /*   Note that for good matrix assembly performance, the user should preallocate the */
  /*   matrix storage by setting the parameter nz (or the array nnz). By setting */
  /*   these parameters accurately. Performance during matrix assembly can be */
  /*   increased by more than a factor of 50. */
  /*  */
  /*   SEE ALSO: petscAssembleMat, petscMatDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  MatCreateSeqAIJ(comm,PetscInt m,PetscInt n,PetscInt nz,const PetscInt nnz[],Mat *A) */
  /*          where comm should always be PETSC_COMM_SELF. */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Mat/MatCreateSeqAIJ.html */
  /* 'petscMatCreateSeqAIJ:36' errCode = int32(-1); */
  /* 'petscMatCreateSeqAIJ:38' if ~isempty(coder.target) */
  /* 'petscMatCreateSeqAIJ:39' t_mat = coder.opaque('Mat'); */
  /* 'petscMatCreateSeqAIJ:41' comm = MPI_Comm(PETSC_COMM_SELF); */
  /*  Obtain PETSC constant PETSC_COMM_SELF */
  /* 'PETSC_COMM_SELF:4' coder.inline('always'); */
  /* 'PETSC_COMM_SELF:6' val = petscGetObject('PETSC_COMM_SELF'); */
  /* petscGetObject Obtain an opaque object in PETSC */
  /*  */
  /*     obj = petscGetObject(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  MPI_Comm: PETSC_COMM_SELF, PETSC_COMM_WORLD, MPI_COMM_SELF, MPI_COMM_WORLD */
  /*  */
  /*  Other: */
  /*      PETSC_IGNORE, PETSC_NULL_OPTION, PETSC_NULL_MAT, PETSC_NULL_VEC, */
  /*      PETSC_NULL_INT, PETSC_NULL_REAL */
  /* 'petscGetObject:16' if isempty(coder.target) */
  /* 'petscGetObject:20' switch name */
  /* 'petscGetObject:25' case 'PETSC_COMM_SELF' */
  /* 'petscGetObject:26' [obj, toplevel] = get_obj('MPI_Comm', 'PETSC_COMM_SELF', nargout>1); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscMatCreateSeqAIJ:42' if nargin==3 */
  /* 'petscMatCreateSeqAIJ:48' else */
  /* 'petscMatCreateSeqAIJ:49' errCode = coder.ceval('MatCreateSeqAIJ', comm, m, n, nz, coder.rref(nnz), coder.wref(t_mat)); */
  errCode = MatCreateSeqAIJ(PETSC_COMM_SELF, n, n, b_val, &nnz->data[0], &t_mat);

  /* 'petscMatCreateSeqAIJ:52' toplevel = nargout>2; */
  /* 'petscMatCreateSeqAIJ:53' mat = PetscMat(t_mat, toplevel); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscMatCreateSeqAIJ:55' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_val = (M2C_DEBUG);
    if (b_val != 0) {
      /* 'petscMatCreateSeqAIJ:56' m2c_error('petsc:RuntimeError', 'MatCreateSeqAIJ returned error code %d\n', errCode) */
      m2c_error(errCode);
    }
  }

  /* 'mptMatCreateAIJFromCRS:53' first_row = int32(0); */
  /*  Set values row by row */
  /* 'mptMatCreateAIJFromCRS:71' for i=1:n */
  i = 0;
  emxInit_int32_T(&jidx, 1);
  emxInit_real_T(&rowval, 1);
  while (i + 1 <= n) {
    /* 'mptMatCreateAIJFromCRS:72' jidx = col_ind(row_ptr(i):row_ptr(i+1)-1)-1; */
    i0 = row_ptr->data[i + 1] - 1;
    if (row_ptr->data[i] > i0) {
      i1 = 0;
      i0 = 0;
    } else {
      i1 = row_ptr->data[i] - 1;
    }

    b_val = jidx->size[0];
    jidx->size[0] = i0 - i1;
    emxEnsureCapacity((emxArray__common *)jidx, b_val, (int)sizeof(int));
    b_val = i0 - i1;
    for (i0 = 0; i0 < b_val; i0++) {
      jidx->data[i0] = col_ind->data[i1 + i0] - 1;
    }

    /* 'mptMatCreateAIJFromCRS:73' rowval = val(row_ptr(i):row_ptr(i+1)-1); */
    i0 = row_ptr->data[i + 1] - 1;
    if (row_ptr->data[i] > i0) {
      i1 = 0;
      i0 = 0;
    } else {
      i1 = row_ptr->data[i] - 1;
    }

    b_val = rowval->size[0];
    rowval->size[0] = i0 - i1;
    emxEnsureCapacity((emxArray__common *)rowval, b_val, (int)sizeof(double));
    b_val = i0 - i1;
    for (i0 = 0; i0 < b_val; i0++) {
      rowval->data[i0] = val->data[i1 + i0];
    }

    /* 'mptMatCreateAIJFromCRS:75' petscMatSetValues(mat, int32(1), i+first_row-1, nnz(i), jidx, rowval); */
    /* Inserts or adds a block of values into a matrix. These values may be cached, */
    /* so MatAssemblyBegin() and MatAssemblyEnd() must be called after all calls */
    /* to MatSetValues() have been completed. */
    /*  */
    /*   errCode = petscMatSetValues(mat, ni, ix, nj, jx, v) */
    /*   	mat   - the matrix to insert in */
    /*    ni,ix - the number of rows and their global (0-based) indices */
    /*    nj,jx - the number of columns and their global (0-based) indices */
    /*    v     - a logically two-dimensional array of values (by default it is */
    /*            row majored but can be changed by calling petscMatSetOption.) */
    /*  */
    /*   errCode = petscMatSetValues(mat, ni, ix, nj, jx, v, iora) */
    /*    iora  - either INSERT_VALUES or ADD_VALUES, where INSERT_VALUES */
    /*            replaces existing entries with new values and */
    /*            ADD_VALUES adds values to any existing entries. */
    /*  */
    /*   SEE ALSO: petscMatSetOption, petscMatAssemblyBegin, petscMatAssemblyEnd */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode MatSetValues(Mat mat,PetscInt m,const PetscInt idxm[], */
    /*        PetscInt n,const PetscInt idxn[],const PetscScalar v[],InsertMode addv) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Mat/MatSetValues.html */
    /* 'petscMatSetValues:30' errCode = int32(-1); */
    /* 'petscMatSetValues:31' if nargin<7 */
    /* 'petscMatSetValues:32' iroa = PETSC_INSERT_VALUES; */
    /*  Obtain PETSC constant INSERT_VALUES */
    /* 'PETSC_INSERT_VALUES:4' coder.inline('always'); */
    /* 'PETSC_INSERT_VALUES:6' val = petscGetEnum('INSERT_VALUES'); */
    /* petscGetEnum Obtain an enumerate value in PETSC */
    /*  */
    /*     val = petscGetEnum(name) */
    /*  */
    /* The supported names include: */
    /*  */
    /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
    /*  */
    /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
    /*       VEC_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
    /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
    /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
    /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
    /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
    /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
    /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
    /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
    /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
    /*       MAT_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
    /*  */
    /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
    /*  */
    /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
    /*  */
    /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
    /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
    /*  */
    /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
    /*  */
    /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
    /*  */
    /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
    /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
    /*  */
    /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
    /*  */
    /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
    /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
    /*  */
    /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
    /*  */
    /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
    /* 'petscGetEnum:51' if isempty(coder.target) */
    /* % InsertMode */
    /* 'petscGetEnum:56' switch name */
    /* 'petscGetEnum:83' case 'INSERT_VALUES' */
    /* 'petscGetEnum:84' [val, toplevel] = get_val('InsertMode', 'INSERT_VALUES', nargin>1); */
    /* 'petscGetEnum:201' coder.inline('always'); */
    /* 'petscGetEnum:203' val = int32(intmin); */
    /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
    iroa = (INSERT_VALUES);

    /* 'petscMatSetValues:35' if ~isempty(coder.target) */
    /* 'petscMatSetValues:36' t_mat = PetscMat(mat); */
    /* Map an opaque object into a PETSc Mat object */
    /*  */
    /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
    /*  */
    /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscVec */
    /* 'PetscMat:14' coder.inline('always'); */
    /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    /* 'petscMatSetValues:38' errCode = coder.ceval('MatSetValues', t_mat, ni, coder.rref(ix), ... */
    /* 'petscMatSetValues:39'         nj, coder.rref(jx), coder.rref(v), iroa); */
    errCode = MatSetValues(t_mat, 1, &i, nnz->data[i], &jidx->data[0],
      &rowval->data[0], iroa);

    /* 'petscMatSetValues:41' toplevel = nargout>1; */
    /* 'petscMatSetValues:42' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      b_val = (M2C_DEBUG);
      if (b_val != 0) {
        /* 'petscMatSetValues:43' m2c_error('petsc:RuntimeError', 'MatSetValues returned error code %d\n', errCode) */
        b_m2c_error(errCode);
      }
    }

    i++;
  }

  emxFree_real_T(&rowval);
  emxFree_int32_T(&jidx);
  emxFree_int32_T(&nnz);

  /*  Call assembly */
  /* 'mptMatCreateAIJFromCRS:79' petscMatAssemblyBegin(mat); */
  /* Begins assembling the matrix. This routine should be called after  */
  /* completing all calls to petscMatSetValues(). */
  /*  */
  /*   errCode = petscMatAssemblyBegin(mat, [type=petscMAT_FINAL_ASSEMBLY]) */
  /*  */
  /*   SEE ALSO: petscAssembleMat, petscMatAssemblyEnd, petscMatSetValues */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode MatAssemblyBegin(Mat mat,MatAssemblyType type) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Mat/MatAssemblyBegin.html */
  /* 'petscMatAssemblyBegin:15' errCode = int32(-1); */
  /* 'petscMatAssemblyBegin:17' if ~isempty(coder.target) */
  /* 'petscMatAssemblyBegin:18' t_mat = PetscMat(mat); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscMatAssemblyBegin:20' if nargin<2 */
  /* 'petscMatAssemblyBegin:20' type = PETSC_MAT_FINAL_ASSEMBLY; */
  /*  Obtain PETSC constant MAT_FINAL_ASSEMBLY */
  /* 'PETSC_MAT_FINAL_ASSEMBLY:4' coder.inline('always'); */
  /* 'PETSC_MAT_FINAL_ASSEMBLY:6' val = petscGetEnum('MAT_FINAL_ASSEMBLY'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:97' case 'MAT_FINAL_ASSEMBLY' */
  /* 'petscGetEnum:98' [val, toplevel] = get_val('MatAssemblyType', 'MAT_FINAL_ASSEMBLY', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  type = (MAT_FINAL_ASSEMBLY);

  /* 'petscMatAssemblyBegin:22' errCode = coder.ceval('MatAssemblyBegin',t_mat,type); */
  errCode = MatAssemblyBegin(t_mat, type);

  /* 'petscMatAssemblyBegin:24' toplevel = nargout>1; */
  /* 'petscMatAssemblyBegin:25' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_val = (M2C_DEBUG);
    if (b_val != 0) {
      /* 'petscMatAssemblyBegin:26' m2c_error('petsc:RuntimeError', 'MatAssemblyBegin returned error code %d\n', errCode) */
      c_m2c_error(errCode);
    }
  }

  /* 'mptMatCreateAIJFromCRS:80' petscMatAssemblyEnd(mat); */
  /* Completes assembling the matrix. This routine should be called after  */
  /* petscMatAssemblyBegin(). */
  /*  */
  /*   errCode = petscMatAssemblyEnd(mat, [type=petscMAT_FINAL_ASSEMBLY]) */
  /*  */
  /*   SEE ALSO: petscAssembleMat, petscMatAssemblyBegin, petscMatSetValues */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode MatAssemblyEnd(Mat mat,MatAssemblyType type) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Mat/MatAssemblyEnd.html */
  /* 'petscMatAssemblyEnd:15' errCode = int32(-1); */
  /* 'petscMatAssemblyEnd:17' if ~isempty(coder.target) */
  /* 'petscMatAssemblyEnd:18' t_mat = PetscMat(mat); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscMatAssemblyEnd:20' if nargin<2 */
  /* 'petscMatAssemblyEnd:20' type = PETSC_MAT_FINAL_ASSEMBLY; */
  /*  Obtain PETSC constant MAT_FINAL_ASSEMBLY */
  /* 'PETSC_MAT_FINAL_ASSEMBLY:4' coder.inline('always'); */
  /* 'PETSC_MAT_FINAL_ASSEMBLY:6' val = petscGetEnum('MAT_FINAL_ASSEMBLY'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:97' case 'MAT_FINAL_ASSEMBLY' */
  /* 'petscGetEnum:98' [val, toplevel] = get_val('MatAssemblyType', 'MAT_FINAL_ASSEMBLY', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  type = (MAT_FINAL_ASSEMBLY);

  /* 'petscMatAssemblyEnd:22' errCode = coder.ceval('MatAssemblyEnd', t_mat, type); */
  errCode = MatAssemblyEnd(t_mat, type);

  /* 'petscMatAssemblyEnd:24' toplevel = nargout>1; */
  /* 'petscMatAssemblyEnd:25' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_val = (M2C_DEBUG);
    if (b_val != 0) {
      /* 'petscMatAssemblyEnd:26' m2c_error('petsc:RuntimeError', 'MatAssemblyEnd returned error code %d\n', errCode) */
      d_m2c_error(errCode);
    }
  }

  /* 'mptMatCreateAIJFromCRS:82' toplevel = nargout>1; */
  /* 'mptMatCreateAIJFromCRS:83' mat_out = PetscMat(mat, toplevel); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  return t_mat;
}

/*
 * function [flag, relres, iter, reshis, times] = mptSolve(A, b, x, solver, ...
 *     rtol, maxit, pctype, pcopt, x0, opts)
 */
static void mptSolve(Mat A, Vec b, Vec x, const emxArray_char_T *solver, double
                     rtol, int maxit, const emxArray_char_T *pctype, const
                     emxArray_char_T *pcopt, Vec x0, int *flag, double *relres,
                     int *iter, emxArray_real_T *reshis, double times[2])
{
  KSP ksp;
  double time_setup;
  double time_solve;
  KSP t_ksp;
  int errCode;
  int b_flag;

  /*  Solves a linear system using a given solver in PETSc. */
  /*  */
  /*  Syntax: */
  /*     mptSolve(A_hdl, b_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, x0_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, x0_hdl, opts) */
  /*  */
  /*     [flag, relres, iter, reshis, times] = mptSolve(A_hdl, b_hdl, x_hdl, ...) */
  /*     returns the flag (KSPConvergedReason), relative residual, number of  */
  /*     iterations, history of residual used in convergence test (typically  */
  /*     preconditioned residual), and the execution times spent in its core steps. */
  /*  */
  /*     The handles are PetscMat or PetscVec objects. */
  /*  */
  /*  Description: */
  /*     mptSolve(A_hdl, b_hdl) solves the linear system without preconditioners, */
  /*     using the default tolerances or those that have been set previously in */
  /*     the option databases. A_hdl is a PetscMat object, and b_hdl is a */
  /*     PetscVec object. The solution is stored into b. The QMRCGS can be */
  /*     controlled using the options database for KSPQMRCGS. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl) solves the linear system and saves the */
  /*     result into x. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver) uses the specified solver, where */
  /*     solver is one of PETSC_KSP*. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol) uses the given relative tolerarance. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit) solves with the given */
  /*      relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype) uses the */
  /*     specified preconditioner (PETSC_PC*). The preconditioner can be */
  /*     controlled by the PETSc option database. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt) */
  /*     aspecifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, */
  /*     x0_handle) usee x0 for the initial guess. x0 can be the same as x or */
  /*     be PETSC_NULL_VEC. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, */
  /*     x0_handle, opts) can pass command-line options in a string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolveCRS, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptOptionsInsert, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* This function is codegen compatbile, but no need to a top-level function */
  /*  Setup KSP */
  /* 'mptSolve:66' if nargin<3 */
  /* 'mptSolve:67' if nargin<4 */
  /* 'mptSolve:68' if nargin<5 */
  /* 'mptSolve:69' if nargin<6 */
  /* 'mptSolve:70' if nargin<7 */
  /* 'mptSolve:71' if nargin<8 */
  /* 'mptSolve:72' if nargin<9 */
  /* 'mptSolve:74' if nargin==10 && ~isempty(opts) */
  /* 'mptSolve:78' [ksp, time_setup] = mptKSPSetup(A, solver, pctype, pcopt); */
  b_mptKSPSetup(A, solver, pctype, pcopt, &ksp, &time_setup);

  /* 'mptSolve:80' [flag, relres, iter, reshis, time_solve] = mptKSPSolve(ksp, b, x, ... */
  /* 'mptSolve:81'     double(rtol), int32(maxit), x0); */
  b_mptKSPSolve(ksp, b, x, rtol, maxit, x0, flag, relres, iter, reshis,
                &time_solve);

  /* 'mptSolve:83' if nargout>4 */
  /* 'mptSolve:84' times = [time_setup; time_solve]; */
  times[0] = time_setup;
  times[1] = time_solve;

  /* 'mptSolve:87' mptKSPCleanup(ksp); */
  /*  Cleans up the KSP. */
  /*  */
  /*    ksp = mptKSPCleanup(ksp) destropys the given KSP object. */
  /*    It should be called whtn the KSP object is no longer needed, and  */
  /*    no calls should be made to this KSP after this. */
  /*  */
  /*  See Also: mptKSPSetup, mptKSPSolve */
  /*  Destroy the KSP and solution vector */
  /* 'mptKSPCleanup:13' t_ksp = petscKSPDestroy(ksp); */
  /* Destroys KSP context. */
  /*  */
  /*   [ksp, errCode] = petscKSPDestroy(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetUp, petscKSPSolve */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPDestroy(KSP *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPDestroy.html */
  /* 'petscKSPDestroy:14' errCode = int32(-1); */
  /* 'petscKSPDestroy:16' if ~isempty(coder.target) */
  /* 'petscKSPDestroy:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_ksp = ksp;

  /* 'petscKSPDestroy:19' errCode = coder.ceval('KSPDestroy', coder.ref(t_ksp)); */
  errCode = KSPDestroy(&t_ksp);

  /* 'petscKSPDestroy:21' toplevel = nargout>2; */
  /* 'petscKSPDestroy:22' ksp_out = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPDestroy:25' m2c_error('petsc:RuntimeError', 'KSPDestroy returned error code %d\n', errCode) */
      hb_m2c_error(errCode);
    }
  }

  /* 'mptKSPCleanup:15' toplevel = nargout>1; */
  /* 'mptKSPCleanup:16' ksp = PetscKSP(t_ksp, toplevel); */
}

/*
 * function [vec_out, toplevel] = mptVecCreateFromArray(arr, varargin)
 */
static Vec mptVecCreateFromArray(const emxArray_real_T *arr)
{
  int n;
  Vec t_vec;
  int errCode;
  int b_n;
  emxArray_int32_T *y;
  int k;
  int yk;
  emxArray_int32_T *idx;
  int iroa;

  /* Creates a vector in PETSc from a MATLAB column vector. */
  /*  */
  /*   vec = mptVecCreateFromArray(arr) */
  /*      arr:   A column vector in MATLAB */
  /*  */
  /*   vec = petscVecCreateFromArray(arr, prefix) */
  /*      prefix: if present, set options of the vector from the options database. */
  /*  */
  /*   The vector must be deallocated by calling petscVecDestroy after use. */
  /*  */
  /*   SEE ALSO: petscVecDestroy, mptVecToArray, mptOptionsInsert */
  /* 'mptVecCreateFromArray:17' if nargin<1 */
  /* 'mptVecCreateFromArray:21' n = int32(length(arr)); */
  n = arr->size[0];

  /* 'mptVecCreateFromArray:23' if nargin==1 */
  /* 'mptVecCreateFromArray:24' vec = petscVecCreateSeq(n); */
  /* Creates a standard, sequential array-style vector. */
  /*  */
  /*   [vec, errCode] = petscVecCreateSeq(n) */
  /*   n - the vector length */
  /*  */
  /*   SEE ALSO: petscAssembleVec, petscVecDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  VecCreateSeq(MPI_Comm comm,PetscInt n,Vec *v) */
  /*          where comm should always be PETSC_COMM_SELF. */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecCreateSeq.html */
  /* 'petscVecCreateSeq:16' errCode = int32(-1); */
  /* 'petscVecCreateSeq:18' if ~isempty(coder.target) */
  /* 'petscVecCreateSeq:19' t_vec = coder.opaque('Vec'); */
  /* 'petscVecCreateSeq:21' comm = MPI_Comm(PETSC_COMM_SELF); */
  /*  Obtain PETSC constant PETSC_COMM_SELF */
  /* 'PETSC_COMM_SELF:4' coder.inline('always'); */
  /* 'PETSC_COMM_SELF:6' val = petscGetObject('PETSC_COMM_SELF'); */
  /* petscGetObject Obtain an opaque object in PETSC */
  /*  */
  /*     obj = petscGetObject(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  MPI_Comm: PETSC_COMM_SELF, PETSC_COMM_WORLD, MPI_COMM_SELF, MPI_COMM_WORLD */
  /*  */
  /*  Other: */
  /*      PETSC_IGNORE, PETSC_NULL_OPTION, PETSC_NULL_MAT, PETSC_NULL_VEC, */
  /*      PETSC_NULL_INT, PETSC_NULL_REAL */
  /* 'petscGetObject:16' if isempty(coder.target) */
  /* 'petscGetObject:20' switch name */
  /* 'petscGetObject:25' case 'PETSC_COMM_SELF' */
  /* 'petscGetObject:26' [obj, toplevel] = get_obj('MPI_Comm', 'PETSC_COMM_SELF', nargout>1); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscVecCreateSeq:22' errCode = coder.ceval('VecCreateSeq', comm, n, coder.wref(t_vec)); */
  errCode = VecCreateSeq(PETSC_COMM_SELF, n, &t_vec);

  /* 'petscVecCreateSeq:24' toplevel = nargout>2; */
  /* 'petscVecCreateSeq:25' vec = PetscVec(t_vec, toplevel); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscVecCreateSeq:27' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    yk = (M2C_DEBUG);
    if (yk != 0) {
      /* 'petscVecCreateSeq:28' m2c_error('petsc:RuntimeError', 'VecCreateSeq returned error code %d\n', errCode) */
      e_m2c_error(errCode);
    }
  }

  /*  Set values */
  /* 'mptVecCreateFromArray:40' idx = (0:int32(n)-1)'; */
  if (n - 1 < 0) {
    b_n = 0;
  } else {
    b_n = n;
  }

  emxInit_int32_T1(&y, 2);
  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = b_n;
  emxEnsureCapacity((emxArray__common *)y, k, (int)sizeof(int));
  if (b_n > 0) {
    y->data[0] = 0;
    yk = 0;
    for (k = 2; k <= b_n; k++) {
      yk++;
      y->data[k - 1] = yk;
    }
  }

  emxInit_int32_T(&idx, 1);
  k = idx->size[0];
  idx->size[0] = y->size[1];
  emxEnsureCapacity((emxArray__common *)idx, k, (int)sizeof(int));
  yk = y->size[1];
  for (k = 0; k < yk; k++) {
    idx->data[k] = y->data[y->size[0] * k];
  }

  emxFree_int32_T(&y);

  /* 'mptVecCreateFromArray:41' petscVecSetValues(vec, n, idx, arr); */
  /* Inserts or adds values into certain locations of a vector. */
  /*  */
  /*   errCode = petscVecSetValues(vec, ni, ix, y) */
  /*   	vec  - vector to insert in */
  /*    ni   - number of elements to be inserted */
  /*    ix   - (0-based) indices where to insert */
  /*    y    - array of values */
  /*  */
  /*    errCode = petscVecSetValues(vec, ni, ix, y, iora) */
  /*    iora  - either INSERT_VALUES or ADD_VALUES, where INSERT_VALUES */
  /*            replaces existing entries with new values (as above) and */
  /*            ADD_VALUES adds values to any existing entries. */
  /*  */
  /*   SEE ALSO: petscAssembleVec, VecAssemblyBegin(), VecAssemblyEnd(), */
  /*             petscVecSet, petscVecCreate, petscVecDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  VecSetValues(Vec x,PetscInt ni,const PetscInt ix[],const PetscScalar y[],InsertMode iora) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecSetValues.html */
  /* 'petscVecSetValues:25' errCode = int32(-1); */
  /* 'petscVecSetValues:27' if ~isempty(coder.target) */
  /* 'petscVecSetValues:28' if nargin<5 */
  /* 'petscVecSetValues:29' iroa = PETSC_INSERT_VALUES; */
  /*  Obtain PETSC constant INSERT_VALUES */
  /* 'PETSC_INSERT_VALUES:4' coder.inline('always'); */
  /* 'PETSC_INSERT_VALUES:6' val = petscGetEnum('INSERT_VALUES'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:83' case 'INSERT_VALUES' */
  /* 'petscGetEnum:84' [val, toplevel] = get_val('InsertMode', 'INSERT_VALUES', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  iroa = (INSERT_VALUES);

  /* 'petscVecSetValues:32' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscVecSetValues:34' errCode = coder.ceval('VecSetValues', t_vec, ni, coder.rref(ix), coder.rref(y), iroa); */
  errCode = VecSetValues(t_vec, n, &idx->data[0], &arr->data[0], iroa);

  /* 'petscVecSetValues:36' toplevel = nargout>1; */
  /* 'petscVecSetValues:37' if errCode && (toplevel || m2c_debug) */
  emxFree_int32_T(&idx);
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    yk = (M2C_DEBUG);
    if (yk != 0) {
      /* 'petscVecSetValues:38' m2c_error('petsc:RuntimeError', 'VecSetValues returned error code %d\n', errCode); */
      f_m2c_error(errCode);
    }
  }

  /*  Call assembly */
  /* 'mptVecCreateFromArray:44' petscVecAssemblyBegin(vec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   errCode = petscVecAssemblyBegin(vec) */
  /*  */
  /*   SEE ALSO: petscAssembleVec, petscVecAssemblyEnd, petscVecSetValues */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecAssemblyBegin(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecAssemblyBegin.html */
  /* 'petscVecAssemblyBegin:14' errCode = int32(-1); */
  /* 'petscVecAssemblyBegin:16' if ~isempty(coder.target) */
  /* 'petscVecAssemblyBegin:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscVecAssemblyBegin:19' errCode = coder.ceval('VecAssemblyBegin', t_vec); */
  errCode = VecAssemblyBegin(t_vec);

  /* 'petscVecAssemblyBegin:21' toplevel = nargout>1; */
  /* 'petscVecAssemblyBegin:22' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    yk = (M2C_DEBUG);
    if (yk != 0) {
      /* 'petscVecAssemblyBegin:23' m2c_error('petsc:RuntimeError', 'VecAssemblyBegin returned error code %d\n', errCode) */
      g_m2c_error(errCode);
    }
  }

  /* 'mptVecCreateFromArray:45' petscVecAssemblyEnd(vec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   errCode = petscVecAssemblyEnd(vec) */
  /*  */
  /*   SEE ALSO: petscAssembleVec, petscVecAssemblyBegin, petscVecSetValues */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecAssemblyEnd(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecAssemblyEnd.html */
  /* 'petscVecAssemblyEnd:14' errCode = int32(-1); */
  /* 'petscVecAssemblyEnd:16' if ~isempty(coder.target) */
  /* 'petscVecAssemblyEnd:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscVecAssemblyEnd:19' errCode = coder.ceval('VecAssemblyEnd', t_vec); */
  errCode = VecAssemblyEnd(t_vec);

  /* 'petscVecAssemblyEnd:21' toplevel = nargout>1; */
  /* 'petscVecAssemblyEnd:22' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    yk = (M2C_DEBUG);
    if (yk != 0) {
      /* 'petscVecAssemblyEnd:23' m2c_error('petsc:RuntimeError', 'VecAssemblyEnd returned error code %d\n', errCode) */
      h_m2c_error(errCode);
    }
  }

  /* 'mptVecCreateFromArray:47' toplevel = nargout>1; */
  /* 'mptVecCreateFromArray:48' vec_out = PetscVec(vec, toplevel); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  return t_vec;
}

/*
 * function arr = mptVecToArray(vec)
 */
static void mptVecToArray(Vec vec, emxArray_real_T *arr)
{
  int n;
  int errCode;
  int k;
  int b_n;
  int yk;
  emxArray_int32_T *y;
  emxArray_int32_T *idx;

  /* Export the local portion of a vector in PETSc to a MATLAB array. */
  /*  */
  /*   arr = mptVecToArray(vec) */
  /*      exports the PETSc vector vec into an array arr */
  /*  */
  /*   SEE ALSO: mptVecCreateFromArray */
  /* 'mptVecToArray:11' if nargin<1 */
  /* 'mptVecToArray:15' n = petscVecGetLocalSize(vec); */
  /* Returns the local number of elements of the vector. */
  /*  */
  /* [n, errCode] = petscVecGetLocalSize(vec) */
  /*   	vec   - the vector */
  /*    n     - the number of elements */
  /*  */
  /*   SEE ALSO: petscVecSetSizes, petscVecGetSize */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecGetLocalSize(Vec vec,PetscInt *n) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecGetLocalSize.html */
  /* 'petscVecGetLocalSize:16' errCode = int32(-1); */
  /* 'petscVecGetLocalSize:18' if ~isempty(coder.target) */
  /* 'petscVecGetLocalSize:19' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscVecGetLocalSize:21' n = int32(0); */
  /* 'petscVecGetLocalSize:22' errCode = coder.ceval('VecGetLocalSize', t_vec, coder.wref(n)); */
  errCode = VecGetLocalSize(vec, &n);

  /* 'petscVecGetLocalSize:24' toplevel = nargout>2; */
  /* 'petscVecGetLocalSize:25' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    yk = (M2C_DEBUG);
    if (yk != 0) {
      /* 'petscVecGetLocalSize:26' m2c_error('petsc:RuntimeError', 'VecGetLocalSize returned error code %d\n', errCode) */
      kb_m2c_error(errCode);
    }
  }

  /* 'mptVecToArray:16' arr = coder.nullcopy(zeros(n, 1)); */
  k = arr->size[0];
  arr->size[0] = n;
  emxEnsureCapacity((emxArray__common *)arr, k, (int)sizeof(double));

  /*  Obtain values */
  /* 'mptVecToArray:19' idx = (0:int32(n)-1)'; */
  if (n - 1 < 0) {
    b_n = 0;
  } else {
    b_n = n;
  }

  emxInit_int32_T1(&y, 2);
  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = b_n;
  emxEnsureCapacity((emxArray__common *)y, k, (int)sizeof(int));
  if (b_n > 0) {
    y->data[0] = 0;
    yk = 0;
    for (k = 2; k <= b_n; k++) {
      yk++;
      y->data[k - 1] = yk;
    }
  }

  emxInit_int32_T(&idx, 1);
  k = idx->size[0];
  idx->size[0] = y->size[1];
  emxEnsureCapacity((emxArray__common *)idx, k, (int)sizeof(int));
  yk = y->size[1];
  for (k = 0; k < yk; k++) {
    idx->data[k] = y->data[y->size[0] * k];
  }

  emxFree_int32_T(&y);

  /* 'mptVecToArray:20' arr = petscVecGetValues(vec, n, idx, arr); */
  /* Gets values from certain locations of a vector.  */
  /* Currently can only get values on the same processor */
  /*  */
  /*   [y, errCode] = petscVecGetValues(vec, ni, ix) */
  /*   	  vec - vector to get values from */
  /*      ni  - number of elements to get */
  /*      ix  - indices where to get them from (0-based in global 1d numbering) */
  /*  */
  /*   [y, errCode] = petscVecGetValues(vec, ni, ix, y) */
  /*      Use preallocated storage in y */
  /*  */
  /*   SEE ALSO: petscVecAssemblyBegin, petscVecAssemblyEnd, petscVecSetValues */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  VecGetValues(Vec x,PetscInt ni,const PetscInt ix[],PetscScalar y[]) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecGetValues.html */
  /* 'petscVecGetValues:22' errCode = int32(-1); */
  /* 'petscVecGetValues:24' if ~isempty(coder.target) */
  /* 'petscVecGetValues:25' if nargin<4 */
  if (arr->size[0] < n) {
    /* 'petscVecGetValues:27' elseif length(y) < ni */
    /* 'petscVecGetValues:28' m2c_error('Output array y is too small.'); */
    lb_m2c_error();
  }

  /* 'petscVecGetValues:31' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscVecGetValues:32' errCode = coder.ceval('VecGetValues', t_vec, ni, coder.rref(ix), coder.ref(y)); */
  errCode = VecGetValues(vec, n, &idx->data[0], &arr->data[0]);

  /* 'petscVecGetValues:34' toplevel = nargout>2; */
  /* 'petscVecGetValues:35' if errCode && (toplevel || m2c_debug) */
  emxFree_int32_T(&idx);
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    yk = (M2C_DEBUG);
    if (yk != 0) {
      /* 'petscVecGetValues:36' m2c_error('petsc:RuntimeError', 'VecGetValues returned error code %d\n', errCode) */
      mb_m2c_error(errCode);
    }
  }
}

/*
 * function m2c_error(varargin)
 */
static void n_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "KSPSetOperators returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void nb_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "KSPSetType returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void o_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "KSPSetPCSide returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void ob_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "PCSetType returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void p_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "KSPSetFromOptions returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void pb_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError",
            "petscPCFactorSetMatSolverPackage returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void q_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "KSPSetUp returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void qb_m2c_error(void)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("MPETSc:petscOptionsInsertString:InputError",
            "The argument must be a null-terminated string.");
}

/*
 * function m2c_error(varargin)
 */
static void r_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "VecNorm returned error code %d\n", varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void rb_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError",
            "PetscOptionsInsertString returned error code %d\n", varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void s_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "KSPSetTolerances returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void t_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "VecCopy returned error code %d\n", varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void u_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError",
            "petscKSPSetResidualHistory returned error code %d\n", varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void v_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError",
            "KSPSetInitialGuessNonzero returned error code %d\n", varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void w_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "KSPSolve returned error code %d\n",
            varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void x_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError",
            "KSPGetConvergedReason returned error code %d\n", varargin_3);
}

/*
 * function m2c_error(varargin)
 */
static void y_m2c_error(int varargin_3)
{
  /* m2c_error Issue a fatal error message. */
  /*   */
  /*  m2c_error(msg); */
  /*  m2c_error(fmt, null_terminated_char, number, ...); */
  /*  m2c_error(msg_id, fmt, null_terminated_char, number, ...); */
  /*  */
  /*  Note that the character strings associated with %s in the format must */
  /*  be null-terminated character strings. */
  /*  */
  /*  Example usage: */
  /*     m2c_error('Error message in a constant string does not need to be null-terminated.'); */
  /*     m2c_error('Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*     m2c_error('error:ID', 'Error ID %d - message %s.', int32(10), ['Need to be null-terminated' char(0)]); */
  /*  */
  /*  SEE ALSO: m2c_print, m2c_warn */
  /* 'm2c_error:18' coder.inline('never'); */
  /* 'm2c_error:20' if isempty(coder.target) */
  /* 'm2c_error:22' else */
  /* 'm2c_error:23' if isequal(coder.target, 'mex') */
  /* 'm2c_error:25' else */
  /* 'm2c_error:26' cmd = 'M2C_error'; */
  /* 'm2c_error:29' if nargin==1 || ischar(varargin{1}) && ~ischar(varargin{2}) */
  /* 'm2c_error:35' else */
  /* 'm2c_error:36' msgid = coder.opaque('const char *', ['"' varargin{1} '"']); */
  /* 'm2c_error:38' fmt = coder.opaque('const char *', ['"' varargin{2} '"']); */
  /* 'm2c_error:39' coder.ceval(cmd, msgid, fmt, varargin{3:end}); */
  M2C_error("petsc:RuntimeError", "KSPGetResidualNorm returned error code %d\n",
            varargin_3);
}

void emxInitArray_char_T(emxArray_char_T **pEmxArray, int numDimensions)
{
  emxInit_char_T(pEmxArray, numDimensions);
}

void emxInitArray_int32_T(emxArray_int32_T **pEmxArray, int numDimensions)
{
  emxInit_int32_T(pEmxArray, numDimensions);
}

void emxInitArray_real_T(emxArray_real_T **pEmxArray, int numDimensions)
{
  emxInit_real_T(pEmxArray, numDimensions);
}

/*
 * function [x, flag, relres, iter, reshis, times] = mptSolveCRS(varargin)
 */
void mptSolveCRS(int *flag, double *relres, int *iter, double times[2])
{
  int i;

  /*  Solves a linear system using any PETSc solver for matrix in CRS format. */
  /*  */
  /*  Syntax: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0, opts) */
  /*  */
  /*     [x, flag, relres, iter, reshis, times] = mptSolveCRS(Arows, Acols, Avals, b, ...) */
  /*     returns the solution vector x, the flag (KSPConvergedReason), relative */
  /*     residual, number of iterations, history of residual used in convergence */
  /*     test (typically preconditioned residual), and the execution times in */
  /*     setup and solve. */
  /*  */
  /*     A is a sparse matrix in CRS format. b, x and resvec are all regular */
  /*     vectors. Solver is a value of PETSC_KSP*. pctype is a value of */
  /*     PETSC_PC*, and pcopt is a value of PETSC_MATSOLVER*. */
  /*  */
  /*     For rtol, maxit, use 0 to use default values. */
  /*     For solver, pctype, pcopt and opts, use empty string ('') to use default. */
  /*     For x0, use zeros(0, 1) to disable initial guess. */
  /*  */
  /*     When times is given, it returns a 2-vector contaning the times spent */
  /*     in setup and in solve separately. */
  /*  */
  /*  Description: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) solves the linear system without */
  /*     preconditioners, using the default tolerances or those that have been */
  /*     set previously in the option databases. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) specifies to use a */
  /*     specific solver, such as PETSC_KSPGMRES, PETSC_KSPBCGS, etc. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) uses the given number */
  /*         of solvers and the relative tolerarance. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) solves with */
  /*         the given relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     uses the specified preconditioner (those give by PETSC_PC*). */
  /*     The preconditioner can be controlled by the PETSc option database. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt) specifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0) usee x0 for the initial guess. x0 can be the same as x. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0, opts) can pass additional command-line options in a */
  /*     string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolve, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptVecToArray, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* 'mptSolveCRS:88' if nargin==0 */
  /* 'mptSolveCRS:89' x = zeros(0,1); */
  /* 'mptSolveCRS:89' flag=int32(-1); */
  *flag = -1;

  /* 'mptSolveCRS:89' relres=realmax; */
  *relres = 1.7976931348623157E+308;

  /* 'mptSolveCRS:90' iter=int32(0); */
  *iter = 0;

  /* 'mptSolveCRS:90' reshis = zeros(0,1); */
  /* 'mptSolveCRS:90' times=[0;0]; */
  for (i = 0; i < 2; i++) {
    times[i] = 0.0;
  }
}

/*
 * function [x,flag,relres,iter,reshis,times] = mptSolveCRS_10args(Arows, Acols, Avals, b, solver, rtol, maxiter, pctype, solpack, x0)
 */
void mptSolveCRS_10args(const emxArray_int32_T *Arows, const emxArray_int32_T
  *Acols, const emxArray_real_T *Avals, const emxArray_real_T *b, const
  emxArray_char_T *solver, double rtol, int maxiter, const emxArray_char_T
  *pctype, const emxArray_char_T *solpack, const emxArray_real_T *x0,
  emxArray_real_T *x, int *flag, double *relres, int *iter, emxArray_real_T
  *reshis, double times[2])
{
  Mat AMat;
  Vec bVec;
  Vec x0Vec;
  Vec xVec;
  int b_flag;
  double b_relres;
  int b_iter;
  Vec t_vec_out;
  Mat t_mat;
  int errCode;
  int c_flag;
  Vec t_vec;

  /* 'mptSolveCRS_10args:2' [x,flag,relres,iter,reshis,times] = mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxiter, pctype, solpack, x0); */
  /*  Solves a linear system using any PETSc solver for matrix in CRS format. */
  /*  */
  /*  Syntax: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0, opts) */
  /*  */
  /*     [x, flag, relres, iter, reshis, times] = mptSolveCRS(Arows, Acols, Avals, b, ...) */
  /*     returns the solution vector x, the flag (KSPConvergedReason), relative */
  /*     residual, number of iterations, history of residual used in convergence */
  /*     test (typically preconditioned residual), and the execution times in */
  /*     setup and solve. */
  /*  */
  /*     A is a sparse matrix in CRS format. b, x and resvec are all regular */
  /*     vectors. Solver is a value of PETSC_KSP*. pctype is a value of */
  /*     PETSC_PC*, and pcopt is a value of PETSC_MATSOLVER*. */
  /*  */
  /*     For rtol, maxit, use 0 to use default values. */
  /*     For solver, pctype, pcopt and opts, use empty string ('') to use default. */
  /*     For x0, use zeros(0, 1) to disable initial guess. */
  /*  */
  /*     When times is given, it returns a 2-vector contaning the times spent */
  /*     in setup and in solve separately. */
  /*  */
  /*  Description: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) solves the linear system without */
  /*     preconditioners, using the default tolerances or those that have been */
  /*     set previously in the option databases. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) specifies to use a */
  /*     specific solver, such as PETSC_KSPGMRES, PETSC_KSPBCGS, etc. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) uses the given number */
  /*         of solvers and the relative tolerarance. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) solves with */
  /*         the given relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     uses the specified preconditioner (those give by PETSC_PC*). */
  /*     The preconditioner can be controlled by the PETSc option database. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt) specifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0) usee x0 for the initial guess. x0 can be the same as x. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0, opts) can pass additional command-line options in a */
  /*     string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolve, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptVecToArray, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* 'mptSolveCRS:88' if nargin==0 */
  /* 'mptSolveCRS:94' if isempty(coder.target) && ~exist(['mptSolveCRS.' mexext], 'file') && ... */
  /* 'mptSolveCRS:95'         exist('run_mptSolveCRS_exe', 'file') */
  /* 'mptSolveCRS:104' Arows = varargin{1}; */
  /* 'mptSolveCRS:105' Acols = varargin{2}; */
  /* 'mptSolveCRS:106' Avals = varargin{3}; */
  /* 'mptSolveCRS:107' b = varargin{4}; */
  /*  Setup KSP */
  /* 'mptSolveCRS:110' if nargin<5 */
  /* 'mptSolveCRS:110' else */
  /* 'mptSolveCRS:110' solver = varargin{5}; */
  /*  Use default */
  /* 'mptSolveCRS:111' if nargin<6 */
  /* 'mptSolveCRS:111' else */
  /* 'mptSolveCRS:111' rtol = varargin{6}; */
  /* 'mptSolveCRS:112' if nargin<7 */
  /* 'mptSolveCRS:112' else */
  /* 'mptSolveCRS:112' maxit = varargin{7}; */
  /* 'mptSolveCRS:113' if nargin<8 */
  /* 'mptSolveCRS:113' else */
  /* 'mptSolveCRS:113' pctype = varargin{8}; */
  /* 'mptSolveCRS:114' if nargin<9 */
  /* 'mptSolveCRS:114' else */
  /* 'mptSolveCRS:114' pcopt = varargin{9}; */
  /* 'mptSolveCRS:116' AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals); */
  AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals);

  /* 'mptSolveCRS:117' bVec = mptVecCreateFromArray(b); */
  bVec = mptVecCreateFromArray(b);

  /* 'mptSolveCRS:119' if nargin<10 || isempty(varargin{10}) */
  if (x0->size[0] == 0) {
    /* 'mptSolveCRS:120' x0Vec = PETSC_NULL_VEC; */
    /*  Obtain PETSC constant NULL of type Vec */
    /* 'PETSC_NULL_VEC:4' coder.inline('always'); */
    /* 'PETSC_NULL_VEC:6' obj = petscGetObject('PETSC_NULL_VEC'); */
    /* petscGetObject Obtain an opaque object in PETSC */
    /*  */
    /*     obj = petscGetObject(name) */
    /*  */
    /* The supported names include: */
    /*  */
    /*  MPI_Comm: PETSC_COMM_SELF, PETSC_COMM_WORLD, MPI_COMM_SELF, MPI_COMM_WORLD */
    /*  */
    /*  Other: */
    /*      PETSC_IGNORE, PETSC_NULL_OPTION, PETSC_NULL_MAT, PETSC_NULL_VEC, */
    /*      PETSC_NULL_INT, PETSC_NULL_REAL */
    /* 'petscGetObject:16' if isempty(coder.target) */
    /* 'petscGetObject:20' switch name */
    /* 'petscGetObject:35' case 'PETSC_NULL_VEC' */
    /* 'petscGetObject:36' [obj, toplevel] = get_obj('Vec', 'NULL', nargout>1); */
    x0Vec = NULL;

    /* 'mptSolveCRS:121' xVec = petscVecDuplicate(bVec); */
    /* Creates a new vector of the same type as an existing vector. */
    /*  */
    /*   [vec_out, errCode] = petscVecDuplicate(vec_in) creates a new vector, but */
    /*      it does not copy the entries of the input vector. The user is */
    /*      responsible freeing the memory by calling petscVecDestroy. */
    /*  */
    /*   SEE ALSO: petscVecCopy, petscVecDestroy, petscVecCreate */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  VecDuplicate(Vec vec_in, Vec *vec_out) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDuplicate.html */
    /* 'petscVecDuplicate:16' errCode = int32(-1); */
    /* 'petscVecDuplicate:18' if ~isempty(coder.target) */
    /* 'petscVecDuplicate:19' t_vec_out = coder.opaque('Vec'); */
    /* 'petscVecDuplicate:21' errCode = coder.ceval('VecDuplicate', PetscVec(vec_in), coder.wref(t_vec_out)); */
    /* Map an opaque object into a PETSc Vec object */
    /*  */
    /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
    /*  */
    /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
    /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscMat */
    /* 'PetscVec:14' coder.inline('always'); */
    /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = VecDuplicate(bVec, &t_vec_out);

    /* 'petscVecDuplicate:23' toplevel = nargout>2; */
    /* 'petscVecDuplicate:24' vec_out = PetscVec(t_vec_out, toplevel); */
    /* Map an opaque object into a PETSc Vec object */
    /*  */
    /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
    /*  */
    /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
    /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscMat */
    /* 'PetscVec:14' coder.inline('always'); */
    /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    xVec = t_vec_out;

    /* 'petscVecDuplicate:26' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      c_flag = (M2C_DEBUG);
      if (c_flag != 0) {
        /* 'petscVecDuplicate:27' m2c_error('petsc:RuntimeError', 'VecDuplicate returned error code %d\n', errCode) */
        i_m2c_error(errCode);
      }
    }
  } else {
    /* 'mptSolveCRS:122' else */
    /* 'mptSolveCRS:123' x0 = varargin{10}; */
    /* 'mptSolveCRS:124' x0Vec = mptVecCreateFromArray(x0); */
    x0Vec = mptVecCreateFromArray(x0);

    /* 'mptSolveCRS:125' xVec = x0Vec; */
    xVec = x0Vec;
  }

  /* 'mptSolveCRS:128' if nargin<11 */
  /* 'mptSolveCRS:128' opts = ''; */
  /* 'mptSolveCRS:130' [flag, relres, iter, reshis, times] = mptSolve(AMat, bVec, xVec, solver, ... */
  /* 'mptSolveCRS:131'     double(rtol), int32(maxit), pctype, pcopt, x0Vec, opts); */
  mptSolve(AMat, bVec, xVec, solver, rtol, maxiter, pctype, solpack, x0Vec,
           &b_flag, &b_relres, &b_iter, reshis, times);

  /* 'mptSolveCRS:133' petscMatDestroy(AMat); */
  /* Frees space taken by a matrix. */
  /*  */
  /*   [mat, errCode] = petscMatDestroy(mat) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleMat, petscVecDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode MatDestroy(Mat *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Mat/MatDestroy.html */
  /* 'petscMatDestroy:14' errCode = int32(-1); */
  /* 'petscMatDestroy:16' if ~isempty(coder.target) */
  /* 'petscMatDestroy:17' t_mat = PetscMat(mat); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_mat = AMat;

  /* 'petscMatDestroy:19' errCode = coder.ceval('MatDestroy', coder.ref(t_mat)); */
  errCode = MatDestroy(&t_mat);

  /* 'petscMatDestroy:21' toplevel = nargout>2; */
  /* 'petscMatDestroy:22' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    c_flag = (M2C_DEBUG);
    if (c_flag != 0) {
      /* 'petscMatDestroy:23' m2c_error('petsc:RuntimeError', 'MatDestroy returned error code %d\n', errCode) */
      ib_m2c_error(errCode);
    }
  }

  /* 'petscMatDestroy:26' mat = PetscMat(t_mat, toplevel); */
  /* 'mptSolveCRS:134' petscVecDestroy(bVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = bVec;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    c_flag = (M2C_DEBUG);
    if (c_flag != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  /* 'mptSolveCRS:136' x = mptVecToArray(xVec); */
  mptVecToArray(xVec, x);

  /* 'mptSolveCRS:137' petscVecDestroy(xVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = xVec;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    c_flag = (M2C_DEBUG);
    if (c_flag != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  *flag = b_flag;
  *relres = b_relres;
  *iter = b_iter;
}

/*
 * function [x,flag,relres,iter,reshis,times] = mptSolveCRS_11args(Arows, Acols, Avals, b, solver, rtol, maxiter, pctype, solpack, x0, opts)
 */
void mptSolveCRS_11args(const emxArray_int32_T *Arows, const emxArray_int32_T
  *Acols, const emxArray_real_T *Avals, const emxArray_real_T *b, const
  emxArray_char_T *solver, double rtol, int maxiter, const emxArray_char_T
  *pctype, const emxArray_char_T *solpack, const emxArray_real_T *x0, const
  emxArray_char_T *opts, emxArray_real_T *x, int *flag, double *relres, int
  *iter, emxArray_real_T *reshis, double times[2])
{
  Mat AMat;
  Vec bVec;
  Vec x0Vec;
  Vec xVec;
  Vec t_vec_out;
  int errCode;
  emxArray_char_T *b_opts;
  KSP ksp;
  double time_setup;
  int b_flag;
  int c_flag;
  double b_relres;
  int b_iter;
  double time_solve;
  int loop_ub;
  KSP t_ksp;
  Mat t_mat;
  Vec t_vec;

  /* 'mptSolveCRS_11args:2' [x,flag,relres,iter,reshis,times] = mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxiter, pctype, solpack, x0, opts); */
  /*  Solves a linear system using any PETSc solver for matrix in CRS format. */
  /*  */
  /*  Syntax: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0, opts) */
  /*  */
  /*     [x, flag, relres, iter, reshis, times] = mptSolveCRS(Arows, Acols, Avals, b, ...) */
  /*     returns the solution vector x, the flag (KSPConvergedReason), relative */
  /*     residual, number of iterations, history of residual used in convergence */
  /*     test (typically preconditioned residual), and the execution times in */
  /*     setup and solve. */
  /*  */
  /*     A is a sparse matrix in CRS format. b, x and resvec are all regular */
  /*     vectors. Solver is a value of PETSC_KSP*. pctype is a value of */
  /*     PETSC_PC*, and pcopt is a value of PETSC_MATSOLVER*. */
  /*  */
  /*     For rtol, maxit, use 0 to use default values. */
  /*     For solver, pctype, pcopt and opts, use empty string ('') to use default. */
  /*     For x0, use zeros(0, 1) to disable initial guess. */
  /*  */
  /*     When times is given, it returns a 2-vector contaning the times spent */
  /*     in setup and in solve separately. */
  /*  */
  /*  Description: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) solves the linear system without */
  /*     preconditioners, using the default tolerances or those that have been */
  /*     set previously in the option databases. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) specifies to use a */
  /*     specific solver, such as PETSC_KSPGMRES, PETSC_KSPBCGS, etc. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) uses the given number */
  /*         of solvers and the relative tolerarance. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) solves with */
  /*         the given relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     uses the specified preconditioner (those give by PETSC_PC*). */
  /*     The preconditioner can be controlled by the PETSc option database. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt) specifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0) usee x0 for the initial guess. x0 can be the same as x. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0, opts) can pass additional command-line options in a */
  /*     string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolve, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptVecToArray, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* 'mptSolveCRS:88' if nargin==0 */
  /* 'mptSolveCRS:94' if isempty(coder.target) && ~exist(['mptSolveCRS.' mexext], 'file') && ... */
  /* 'mptSolveCRS:95'         exist('run_mptSolveCRS_exe', 'file') */
  /* 'mptSolveCRS:104' Arows = varargin{1}; */
  /* 'mptSolveCRS:105' Acols = varargin{2}; */
  /* 'mptSolveCRS:106' Avals = varargin{3}; */
  /* 'mptSolveCRS:107' b = varargin{4}; */
  /*  Setup KSP */
  /* 'mptSolveCRS:110' if nargin<5 */
  /* 'mptSolveCRS:110' else */
  /* 'mptSolveCRS:110' solver = varargin{5}; */
  /*  Use default */
  /* 'mptSolveCRS:111' if nargin<6 */
  /* 'mptSolveCRS:111' else */
  /* 'mptSolveCRS:111' rtol = varargin{6}; */
  /* 'mptSolveCRS:112' if nargin<7 */
  /* 'mptSolveCRS:112' else */
  /* 'mptSolveCRS:112' maxit = varargin{7}; */
  /* 'mptSolveCRS:113' if nargin<8 */
  /* 'mptSolveCRS:113' else */
  /* 'mptSolveCRS:113' pctype = varargin{8}; */
  /* 'mptSolveCRS:114' if nargin<9 */
  /* 'mptSolveCRS:114' else */
  /* 'mptSolveCRS:114' pcopt = varargin{9}; */
  /* 'mptSolveCRS:116' AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals); */
  AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals);

  /* 'mptSolveCRS:117' bVec = mptVecCreateFromArray(b); */
  bVec = mptVecCreateFromArray(b);

  /* 'mptSolveCRS:119' if nargin<10 || isempty(varargin{10}) */
  if (x0->size[0] == 0) {
    /* 'mptSolveCRS:120' x0Vec = PETSC_NULL_VEC; */
    /*  Obtain PETSC constant NULL of type Vec */
    /* 'PETSC_NULL_VEC:4' coder.inline('always'); */
    /* 'PETSC_NULL_VEC:6' obj = petscGetObject('PETSC_NULL_VEC'); */
    /* petscGetObject Obtain an opaque object in PETSC */
    /*  */
    /*     obj = petscGetObject(name) */
    /*  */
    /* The supported names include: */
    /*  */
    /*  MPI_Comm: PETSC_COMM_SELF, PETSC_COMM_WORLD, MPI_COMM_SELF, MPI_COMM_WORLD */
    /*  */
    /*  Other: */
    /*      PETSC_IGNORE, PETSC_NULL_OPTION, PETSC_NULL_MAT, PETSC_NULL_VEC, */
    /*      PETSC_NULL_INT, PETSC_NULL_REAL */
    /* 'petscGetObject:16' if isempty(coder.target) */
    /* 'petscGetObject:20' switch name */
    /* 'petscGetObject:35' case 'PETSC_NULL_VEC' */
    /* 'petscGetObject:36' [obj, toplevel] = get_obj('Vec', 'NULL', nargout>1); */
    x0Vec = NULL;

    /* 'mptSolveCRS:121' xVec = petscVecDuplicate(bVec); */
    /* Creates a new vector of the same type as an existing vector. */
    /*  */
    /*   [vec_out, errCode] = petscVecDuplicate(vec_in) creates a new vector, but */
    /*      it does not copy the entries of the input vector. The user is */
    /*      responsible freeing the memory by calling petscVecDestroy. */
    /*  */
    /*   SEE ALSO: petscVecCopy, petscVecDestroy, petscVecCreate */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  VecDuplicate(Vec vec_in, Vec *vec_out) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDuplicate.html */
    /* 'petscVecDuplicate:16' errCode = int32(-1); */
    /* 'petscVecDuplicate:18' if ~isempty(coder.target) */
    /* 'petscVecDuplicate:19' t_vec_out = coder.opaque('Vec'); */
    /* 'petscVecDuplicate:21' errCode = coder.ceval('VecDuplicate', PetscVec(vec_in), coder.wref(t_vec_out)); */
    /* Map an opaque object into a PETSc Vec object */
    /*  */
    /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
    /*  */
    /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
    /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscMat */
    /* 'PetscVec:14' coder.inline('always'); */
    /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = VecDuplicate(bVec, &t_vec_out);

    /* 'petscVecDuplicate:23' toplevel = nargout>2; */
    /* 'petscVecDuplicate:24' vec_out = PetscVec(t_vec_out, toplevel); */
    /* Map an opaque object into a PETSc Vec object */
    /*  */
    /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
    /*  */
    /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
    /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscMat */
    /* 'PetscVec:14' coder.inline('always'); */
    /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    xVec = t_vec_out;

    /* 'petscVecDuplicate:26' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      b_flag = (M2C_DEBUG);
      if (b_flag != 0) {
        /* 'petscVecDuplicate:27' m2c_error('petsc:RuntimeError', 'VecDuplicate returned error code %d\n', errCode) */
        i_m2c_error(errCode);
      }
    }
  } else {
    /* 'mptSolveCRS:122' else */
    /* 'mptSolveCRS:123' x0 = varargin{10}; */
    /* 'mptSolveCRS:124' x0Vec = mptVecCreateFromArray(x0); */
    x0Vec = mptVecCreateFromArray(x0);

    /* 'mptSolveCRS:125' xVec = x0Vec; */
    xVec = x0Vec;
  }

  /* 'mptSolveCRS:128' if nargin<11 */
  /* 'mptSolveCRS:128' else */
  /* 'mptSolveCRS:128' opts = varargin{11}; */
  /* 'mptSolveCRS:130' [flag, relres, iter, reshis, times] = mptSolve(AMat, bVec, xVec, solver, ... */
  /* 'mptSolveCRS:131'     double(rtol), int32(maxit), pctype, pcopt, x0Vec, opts); */
  /*  Solves a linear system using a given solver in PETSc. */
  /*  */
  /*  Syntax: */
  /*     mptSolve(A_hdl, b_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, x0_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, x0_hdl, opts) */
  /*  */
  /*     [flag, relres, iter, reshis, times] = mptSolve(A_hdl, b_hdl, x_hdl, ...) */
  /*     returns the flag (KSPConvergedReason), relative residual, number of  */
  /*     iterations, history of residual used in convergence test (typically  */
  /*     preconditioned residual), and the execution times spent in its core steps. */
  /*  */
  /*     The handles are PetscMat or PetscVec objects. */
  /*  */
  /*  Description: */
  /*     mptSolve(A_hdl, b_hdl) solves the linear system without preconditioners, */
  /*     using the default tolerances or those that have been set previously in */
  /*     the option databases. A_hdl is a PetscMat object, and b_hdl is a */
  /*     PetscVec object. The solution is stored into b. The QMRCGS can be */
  /*     controlled using the options database for KSPQMRCGS. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl) solves the linear system and saves the */
  /*     result into x. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver) uses the specified solver, where */
  /*     solver is one of PETSC_KSP*. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol) uses the given relative tolerarance. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit) solves with the given */
  /*      relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype) uses the */
  /*     specified preconditioner (PETSC_PC*). The preconditioner can be */
  /*     controlled by the PETSc option database. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt) */
  /*     aspecifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, */
  /*     x0_handle) usee x0 for the initial guess. x0 can be the same as x or */
  /*     be PETSC_NULL_VEC. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, */
  /*     x0_handle, opts) can pass command-line options in a string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolveCRS, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptOptionsInsert, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* This function is codegen compatbile, but no need to a top-level function */
  /*  Setup KSP */
  /* 'mptSolve:66' if nargin<3 */
  /* 'mptSolve:67' if nargin<4 */
  /* 'mptSolve:68' if nargin<5 */
  /* 'mptSolve:69' if nargin<6 */
  /* 'mptSolve:70' if nargin<7 */
  /* 'mptSolve:71' if nargin<8 */
  /* 'mptSolve:72' if nargin<9 */
  /* 'mptSolve:74' if nargin==10 && ~isempty(opts) */
  if (!(opts->size[1] == 0)) {
    emxInit_char_T(&b_opts, 2);

    /* 'mptSolve:75' mptOptionsInsert(opts); */
    b_flag = b_opts->size[0] * b_opts->size[1];
    b_opts->size[0] = 1;
    b_opts->size[1] = opts->size[1];
    emxEnsureCapacity((emxArray__common *)b_opts, b_flag, (int)sizeof(char));
    loop_ub = opts->size[0] * opts->size[1];
    for (b_flag = 0; b_flag < loop_ub; b_flag++) {
      b_opts->data[b_flag] = opts->data[b_flag];
    }

    /* Inserts options into the PETSc optoins database from a string */
    /*    errCode = mptOptionsInsert(opts) */
    /*  */
    /*    opts - string that contains options separated by blanks */
    /*    errCode(int) return code (0 indicates OK) */
    /*  */
    /*  SEE ALSO: sys/petscOptionsInsertFile, sys/petscOptionsSetValue, */
    /*    sys/petscOptionsSetInt, sys/petscOptionsGetReal, */
    /*    sys/petscOptionsHasName, sys/petscOptionsGetInt, */
    /*    sys/petscOptionsSetReal, sys/petscOptionsGetBool, */
    /*    sys/petscOptionsGetString */
    /* This function is codegen compatbile, but no need to a top-level function */
    /* 'mptOptionsInsert:17' if ~isempty(opts) && opts(end)~=char(0) */
    if (opts->data[opts->size[1] - 1] != '\x00') {
      /* 'mptOptionsInsert:18' opts = [opts char(0)]; */
      b_flag = b_opts->size[0] * b_opts->size[1];
      b_opts->size[0] = 1;
      b_opts->size[1] = opts->size[1] + 1;
      emxEnsureCapacity((emxArray__common *)b_opts, b_flag, (int)sizeof(char));
      loop_ub = opts->size[1];
      for (b_flag = 0; b_flag < loop_ub; b_flag++) {
        b_opts->data[b_opts->size[0] * b_flag] = opts->data[opts->size[0] *
          b_flag];
      }

      b_opts->data[b_opts->size[0] * opts->size[1]] = '\x00';
    }

    /*  Insert into options database and enforce error checking */
    /* 'mptOptionsInsert:22' [errCode,~] = petscOptionsInsertString(opts); */
    /* Inserts options into the database from a string */
    /*    errCode = petscOptionsInsertString(in_str) */
    /*  */
    /*    in_str -string that contains options separated by blanks and */
    /*            must be null-terminated */
    /*    errCode(int) return code (0 indicates OK) */
    /*  */
    /*  SEE ALSO: petscOptionsInsertFile */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  PetscOptionsInsertString(PetscOptions options,const char in_str[]) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscOptionsInsertString.html */
    /* 'petscOptionsInsertString:17' errCode = int32(-1); */
    /* 'petscOptionsInsertString:19' if ~isempty(coder.target) */
    /* 'petscOptionsInsertString:20' toplevel = nargout>1; */
    /* 'petscOptionsInsertString:21' if ~isempty(in_str) && in_str(end) && (toplevel || m2c_debug) */
    if (b_opts->data[b_opts->size[1] - 1] != '\x00') {
      /* 'petscOptionsInsertString:22' m2c_error('MPETSc:petscOptionsInsertString:InputError', ... */
      /* 'petscOptionsInsertString:23'             'The argument must be a null-terminated string.') */
      qb_m2c_error();
    }

    /* 'petscOptionsInsertString:26' errCode = coder.ceval('PetscOptionsInsertString', PETSC_NULL_OPTIONS, coder.rref(in_str)); */
    /*  Obtain PETSC constant NULL of type PetscOptions */
    /* 'PETSC_NULL_OPTIONS:4' coder.inline('always'); */
    /* 'PETSC_NULL_OPTIONS:6' obj = petscGetObject('PETSC_NULL_OPTIONS'); */
    /* petscGetObject Obtain an opaque object in PETSC */
    /*  */
    /*     obj = petscGetObject(name) */
    /*  */
    /* The supported names include: */
    /*  */
    /*  MPI_Comm: PETSC_COMM_SELF, PETSC_COMM_WORLD, MPI_COMM_SELF, MPI_COMM_WORLD */
    /*  */
    /*  Other: */
    /*      PETSC_IGNORE, PETSC_NULL_OPTION, PETSC_NULL_MAT, PETSC_NULL_VEC, */
    /*      PETSC_NULL_INT, PETSC_NULL_REAL */
    /* 'petscGetObject:16' if isempty(coder.target) */
    /* 'petscGetObject:20' switch name */
    /* 'petscGetObject:31' case 'PETSC_NULL_OPTIONS' */
    /* 'petscGetObject:32' [obj, toplevel] = get_obj('PetscOptions', 'NULL', nargout>1); */
    errCode = PetscOptionsInsertString(NULL, &b_opts->data[0]);

    /* 'petscOptionsInsertString:28' if errCode && (toplevel || m2c_debug) */
    emxFree_char_T(&b_opts);
    if (errCode != 0) {
      /* 'petscOptionsInsertString:29' m2c_error('petsc:RuntimeError', 'PetscOptionsInsertString returned error code %d\n', errCode) */
      rb_m2c_error(errCode);
    }

    /* 'mptOptionsInsert:22' ~ */
  }

  /* 'mptSolve:78' [ksp, time_setup] = mptKSPSetup(A, solver, pctype, pcopt); */
  b_mptKSPSetup(AMat, solver, pctype, solpack, &ksp, &time_setup);

  /* 'mptSolve:80' [flag, relres, iter, reshis, time_solve] = mptKSPSolve(ksp, b, x, ... */
  /* 'mptSolve:81'     double(rtol), int32(maxit), x0); */
  b_mptKSPSolve(ksp, bVec, xVec, rtol, maxiter, x0Vec, &c_flag, &b_relres,
                &b_iter, reshis, &time_solve);

  /* 'mptSolve:83' if nargout>4 */
  /* 'mptSolve:84' times = [time_setup; time_solve]; */
  /* 'mptSolve:87' mptKSPCleanup(ksp); */
  /*  Cleans up the KSP. */
  /*  */
  /*    ksp = mptKSPCleanup(ksp) destropys the given KSP object. */
  /*    It should be called whtn the KSP object is no longer needed, and  */
  /*    no calls should be made to this KSP after this. */
  /*  */
  /*  See Also: mptKSPSetup, mptKSPSolve */
  /*  Destroy the KSP and solution vector */
  /* 'mptKSPCleanup:13' t_ksp = petscKSPDestroy(ksp); */
  /* Destroys KSP context. */
  /*  */
  /*   [ksp, errCode] = petscKSPDestroy(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetUp, petscKSPSolve */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPDestroy(KSP *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPDestroy.html */
  /* 'petscKSPDestroy:14' errCode = int32(-1); */
  /* 'petscKSPDestroy:16' if ~isempty(coder.target) */
  /* 'petscKSPDestroy:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_ksp = ksp;

  /* 'petscKSPDestroy:19' errCode = coder.ceval('KSPDestroy', coder.ref(t_ksp)); */
  errCode = KSPDestroy(&t_ksp);

  /* 'petscKSPDestroy:21' toplevel = nargout>2; */
  /* 'petscKSPDestroy:22' ksp_out = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPDestroy:25' m2c_error('petsc:RuntimeError', 'KSPDestroy returned error code %d\n', errCode) */
      hb_m2c_error(errCode);
    }
  }

  /* 'mptKSPCleanup:15' toplevel = nargout>1; */
  /* 'mptKSPCleanup:16' ksp = PetscKSP(t_ksp, toplevel); */
  /* 'mptSolveCRS:133' petscMatDestroy(AMat); */
  /* Frees space taken by a matrix. */
  /*  */
  /*   [mat, errCode] = petscMatDestroy(mat) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleMat, petscVecDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode MatDestroy(Mat *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Mat/MatDestroy.html */
  /* 'petscMatDestroy:14' errCode = int32(-1); */
  /* 'petscMatDestroy:16' if ~isempty(coder.target) */
  /* 'petscMatDestroy:17' t_mat = PetscMat(mat); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_mat = AMat;

  /* 'petscMatDestroy:19' errCode = coder.ceval('MatDestroy', coder.ref(t_mat)); */
  errCode = MatDestroy(&t_mat);

  /* 'petscMatDestroy:21' toplevel = nargout>2; */
  /* 'petscMatDestroy:22' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscMatDestroy:23' m2c_error('petsc:RuntimeError', 'MatDestroy returned error code %d\n', errCode) */
      ib_m2c_error(errCode);
    }
  }

  /* 'petscMatDestroy:26' mat = PetscMat(t_mat, toplevel); */
  /* 'mptSolveCRS:134' petscVecDestroy(bVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = bVec;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  /* 'mptSolveCRS:136' x = mptVecToArray(xVec); */
  mptVecToArray(xVec, x);

  /* 'mptSolveCRS:137' petscVecDestroy(xVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = xVec;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  *flag = c_flag;
  *relres = b_relres;
  *iter = b_iter;
  times[0] = time_setup;
  times[1] = time_solve;
}

/*
 * function [x,flag,relres,iter,reshis,times] = mptSolveCRS_4args(Arows, Acols, Avals, b)
 */
void mptSolveCRS_4args(const emxArray_int32_T *Arows, const emxArray_int32_T
  *Acols, const emxArray_real_T *Avals, const emxArray_real_T *b,
  emxArray_real_T *x, int *flag, double *relres, int *iter, emxArray_real_T
  *reshis, double times[2])
{
  Mat AMat;
  Vec bVec;
  Vec t_vec_out;
  int errCode;
  int b_flag;
  PetscObject t_obj;
  MPI_Comm t_comm;
  KSP t_ksp;
  double t;
  double secs;
  int c_flag;
  double b_relres;
  int b_iter;
  double time_solve;
  Mat t_mat;
  Vec t_vec;

  /* 'mptSolveCRS_4args:2' [x,flag,relres,iter,reshis,times] = mptSolveCRS(Arows, Acols, Avals, b); */
  /*  Solves a linear system using any PETSc solver for matrix in CRS format. */
  /*  */
  /*  Syntax: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0, opts) */
  /*  */
  /*     [x, flag, relres, iter, reshis, times] = mptSolveCRS(Arows, Acols, Avals, b, ...) */
  /*     returns the solution vector x, the flag (KSPConvergedReason), relative */
  /*     residual, number of iterations, history of residual used in convergence */
  /*     test (typically preconditioned residual), and the execution times in */
  /*     setup and solve. */
  /*  */
  /*     A is a sparse matrix in CRS format. b, x and resvec are all regular */
  /*     vectors. Solver is a value of PETSC_KSP*. pctype is a value of */
  /*     PETSC_PC*, and pcopt is a value of PETSC_MATSOLVER*. */
  /*  */
  /*     For rtol, maxit, use 0 to use default values. */
  /*     For solver, pctype, pcopt and opts, use empty string ('') to use default. */
  /*     For x0, use zeros(0, 1) to disable initial guess. */
  /*  */
  /*     When times is given, it returns a 2-vector contaning the times spent */
  /*     in setup and in solve separately. */
  /*  */
  /*  Description: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) solves the linear system without */
  /*     preconditioners, using the default tolerances or those that have been */
  /*     set previously in the option databases. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) specifies to use a */
  /*     specific solver, such as PETSC_KSPGMRES, PETSC_KSPBCGS, etc. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) uses the given number */
  /*         of solvers and the relative tolerarance. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) solves with */
  /*         the given relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     uses the specified preconditioner (those give by PETSC_PC*). */
  /*     The preconditioner can be controlled by the PETSc option database. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt) specifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0) usee x0 for the initial guess. x0 can be the same as x. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0, opts) can pass additional command-line options in a */
  /*     string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolve, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptVecToArray, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* 'mptSolveCRS:88' if nargin==0 */
  /* 'mptSolveCRS:94' if isempty(coder.target) && ~exist(['mptSolveCRS.' mexext], 'file') && ... */
  /* 'mptSolveCRS:95'         exist('run_mptSolveCRS_exe', 'file') */
  /* 'mptSolveCRS:104' Arows = varargin{1}; */
  /* 'mptSolveCRS:105' Acols = varargin{2}; */
  /* 'mptSolveCRS:106' Avals = varargin{3}; */
  /* 'mptSolveCRS:107' b = varargin{4}; */
  /*  Setup KSP */
  /* 'mptSolveCRS:110' if nargin<5 */
  /* 'mptSolveCRS:110' solver = ''; */
  /*  Use default */
  /* 'mptSolveCRS:111' if nargin<6 */
  /* 'mptSolveCRS:111' rtol = 0; */
  /* 'mptSolveCRS:112' if nargin<7 */
  /* 'mptSolveCRS:112' maxit = int32(0); */
  /* 'mptSolveCRS:113' if nargin<8 */
  /* 'mptSolveCRS:113' pctype = ''; */
  /* 'mptSolveCRS:114' if nargin<9 */
  /* 'mptSolveCRS:114' pcopt = ''; */
  /* 'mptSolveCRS:116' AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals); */
  AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals);

  /* 'mptSolveCRS:117' bVec = mptVecCreateFromArray(b); */
  bVec = mptVecCreateFromArray(b);

  /* 'mptSolveCRS:119' if nargin<10 || isempty(varargin{10}) */
  /* 'mptSolveCRS:120' x0Vec = PETSC_NULL_VEC; */
  /*  Obtain PETSC constant NULL of type Vec */
  /* 'PETSC_NULL_VEC:4' coder.inline('always'); */
  /* 'PETSC_NULL_VEC:6' obj = petscGetObject('PETSC_NULL_VEC'); */
  /* petscGetObject Obtain an opaque object in PETSC */
  /*  */
  /*     obj = petscGetObject(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  MPI_Comm: PETSC_COMM_SELF, PETSC_COMM_WORLD, MPI_COMM_SELF, MPI_COMM_WORLD */
  /*  */
  /*  Other: */
  /*      PETSC_IGNORE, PETSC_NULL_OPTION, PETSC_NULL_MAT, PETSC_NULL_VEC, */
  /*      PETSC_NULL_INT, PETSC_NULL_REAL */
  /* 'petscGetObject:16' if isempty(coder.target) */
  /* 'petscGetObject:20' switch name */
  /* 'petscGetObject:35' case 'PETSC_NULL_VEC' */
  /* 'petscGetObject:36' [obj, toplevel] = get_obj('Vec', 'NULL', nargout>1); */
  /* 'mptSolveCRS:121' xVec = petscVecDuplicate(bVec); */
  /* Creates a new vector of the same type as an existing vector. */
  /*  */
  /*   [vec_out, errCode] = petscVecDuplicate(vec_in) creates a new vector, but */
  /*      it does not copy the entries of the input vector. The user is */
  /*      responsible freeing the memory by calling petscVecDestroy. */
  /*  */
  /*   SEE ALSO: petscVecCopy, petscVecDestroy, petscVecCreate */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  VecDuplicate(Vec vec_in, Vec *vec_out) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDuplicate.html */
  /* 'petscVecDuplicate:16' errCode = int32(-1); */
  /* 'petscVecDuplicate:18' if ~isempty(coder.target) */
  /* 'petscVecDuplicate:19' t_vec_out = coder.opaque('Vec'); */
  /* 'petscVecDuplicate:21' errCode = coder.ceval('VecDuplicate', PetscVec(vec_in), coder.wref(t_vec_out)); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  errCode = VecDuplicate(bVec, &t_vec_out);

  /* 'petscVecDuplicate:23' toplevel = nargout>2; */
  /* 'petscVecDuplicate:24' vec_out = PetscVec(t_vec_out, toplevel); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscVecDuplicate:26' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDuplicate:27' m2c_error('petsc:RuntimeError', 'VecDuplicate returned error code %d\n', errCode) */
      i_m2c_error(errCode);
    }
  }

  /* 'mptSolveCRS:128' if nargin<11 */
  /* 'mptSolveCRS:128' opts = ''; */
  /* 'mptSolveCRS:130' [flag, relres, iter, reshis, times] = mptSolve(AMat, bVec, xVec, solver, ... */
  /* 'mptSolveCRS:131'     double(rtol), int32(maxit), pctype, pcopt, x0Vec, opts); */
  /*  Solves a linear system using a given solver in PETSc. */
  /*  */
  /*  Syntax: */
  /*     mptSolve(A_hdl, b_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, x0_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, x0_hdl, opts) */
  /*  */
  /*     [flag, relres, iter, reshis, times] = mptSolve(A_hdl, b_hdl, x_hdl, ...) */
  /*     returns the flag (KSPConvergedReason), relative residual, number of  */
  /*     iterations, history of residual used in convergence test (typically  */
  /*     preconditioned residual), and the execution times spent in its core steps. */
  /*  */
  /*     The handles are PetscMat or PetscVec objects. */
  /*  */
  /*  Description: */
  /*     mptSolve(A_hdl, b_hdl) solves the linear system without preconditioners, */
  /*     using the default tolerances or those that have been set previously in */
  /*     the option databases. A_hdl is a PetscMat object, and b_hdl is a */
  /*     PetscVec object. The solution is stored into b. The QMRCGS can be */
  /*     controlled using the options database for KSPQMRCGS. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl) solves the linear system and saves the */
  /*     result into x. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver) uses the specified solver, where */
  /*     solver is one of PETSC_KSP*. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol) uses the given relative tolerarance. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit) solves with the given */
  /*      relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype) uses the */
  /*     specified preconditioner (PETSC_PC*). The preconditioner can be */
  /*     controlled by the PETSc option database. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt) */
  /*     aspecifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, */
  /*     x0_handle) usee x0 for the initial guess. x0 can be the same as x or */
  /*     be PETSC_NULL_VEC. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, */
  /*     x0_handle, opts) can pass command-line options in a string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolveCRS, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptOptionsInsert, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* This function is codegen compatbile, but no need to a top-level function */
  /*  Setup KSP */
  /* 'mptSolve:66' if nargin<3 */
  /* 'mptSolve:67' if nargin<4 */
  /* 'mptSolve:68' if nargin<5 */
  /* 'mptSolve:69' if nargin<6 */
  /* 'mptSolve:70' if nargin<7 */
  /* 'mptSolve:71' if nargin<8 */
  /* 'mptSolve:72' if nargin<9 */
  /* 'mptSolve:74' if nargin==10 && ~isempty(opts) */
  /* 'mptSolve:78' [ksp, time_setup] = mptKSPSetup(A, solver, pctype, pcopt); */
  /*  Sets up KSP using the given matrix (matrices). */
  /*  */
  /*  Syntax: */
  /*   ksp = mptKSPSetup(A) */
  /*   ksp = mptKSPSetup(A, ksptype) */
  /*   ksp = mptKSPSetup(A, ksptype, pctype) */
  /*   ksp = mptKSPSetup(A, ksptype, pctype, pcopt) */
  /*  */
  /*  Description: */
  /*   ksp = mptKSPSetup(A) sets up a KSP using matrix A. */
  /*  */
  /*   ksp = mptKSPSetup(A, ksptype) uses the specified type of the KSP. */
  /*  */
  /*   ksp = mptKSPSetup(A, ksptype, pctype) also sets the type of the KSP */
  /*     and the preconditioner. Note that pctype can be NULL. */
  /*  */
  /*   ksp = mptKSPSetup(A, ksptype, pctype, pcopt) aspecifies additional */
  /*     control options for the preconditioner. It can be PETSC_MATSOLVER*, */
  /*     which is useful when the ksptype is PETSC_KSPPREONLY, and the pctype */
  /*     is a direct method (such as PETSC_PCLU or PETSC_PCCHOLESKY). Otherwise, */
  /*     it may be 'left', 'right', or 'symmetric' (without null-terminator) */
  /*     to choose to use left, right, or symmetric preconditioners. By */
  /*     default, PETSc uses left preconditioners. */
  /*  */
  /*  See Also: mptKSPSolve, mptKSPCleanup */
  /* 'mptKSPSetup:33' t_Amat = Amat; */
  /* 'mptKSPSetup:34' t_ksp = petscKSPCreate(petscObjectGetComm(t_Amat)); */
  /* Gets the MPI communicator for any PetscObject, regardless of the type.  */
  /*  */
  /*   [comm, errCode] = petscObjectGetComm(obj) */
  /*  */
  /*   obtains the MPI_Comm associated with the PetscObject. */
  /*  */
  /*   SEE ALSO: petscMatSetType, petscMatSetFromOptions */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  PetscObjectGetComm(PetscObject obj,MPI_Comm *comm) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscObjectGetComm.html */
  /* 'petscObjectGetComm:16' errCode = int32(-1); */
  /* 'petscObjectGetComm:18' if ~isempty(coder.target) */
  /* 'petscObjectGetComm:19' t_obj = PetscObject(obj); */
  /* Map an opaque object into a PETSc PetscObject object */
  /*  */
  /*   obj = PetscObject() simply returns a definition of the */
  /*   m2c_opaque_type definition, suitable in the argument */
  /*   specification for codegen. */
  /*  */
  /*   obj = PetscObject(arg) or obj = PetscObject(arg, false) converts */
  /*   arg into a PETSc Object object. */
  /*  */
  /*   obj = PetscObject(arg, 'wrap') or obj = PetscObject(arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the  */
  /*   object needs to be returned to MATLAB. Note that the value of  */
  /*   opaque must be determined at compile time. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscObject:18' coder.inline('always'); */
  /* 'PetscObject:20' if nargin==0 && isempty(coder.target) */
  /* 'PetscObject:25' if isstruct(arg) && ~isequal(arg.type, 'PetscObject') && ... */
  /* 'PetscObject:26'         ~isequal(arg.type, 'Mat') && ~isequal(arg.type, 'Vec') && ... */
  /* 'PetscObject:27'         ~isequal(arg.type, 'KSP') && ~isequal(arg.type, 'PC') */
  /* 'PetscObject:32' if ~isstruct(arg) || isempty(coder.target) */
  /* 'PetscObject:33' if nargin==1 || ischar(wrap) || ~wrap */
  /* 'PetscObject:34' obj = coder.opaque('PetscObject'); */
  /* 'PetscObject:35' obj = coder.ceval('(PetscObject)', arg); */
  t_obj = (PetscObject)(AMat);

  /* 'petscObjectGetComm:20' t_comm = coder.opaque('MPI_Comm'); */
  /* 'petscObjectGetComm:22' errCode = coder.ceval('PetscObjectGetComm', t_obj, coder.wref(t_comm)); */
  errCode = PetscObjectGetComm(t_obj, &t_comm);

  /* 'petscObjectGetComm:24' toplevel = nargout>2; */
  /* 'petscObjectGetComm:25' comm = MPI_Comm(t_comm, toplevel); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscObjectGetComm:27' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscObjectGetComm:28' m2c_error('petsc:RuntimeError', 'PetscObjectGetComm returned error code %d\n', errCode) */
      j_m2c_error(errCode);
    }
  }

  /* Creates a preconditioner context. */
  /*  */
  /*   [ksp, errCode] = petscKSPCreate */
  /*       creates a PETSc KSP using PETSC_COMM_WORLD */
  /*  */
  /*   [ksp, errCode] = petscKSPCreate(comm) */
  /*       comm: MPI Communicator */
  /*  */
  /*   SEE ALSO: petscKSPSetUp, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPCreate(MPI_Comm comm,KSP *ksp) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPCreate.html */
  /* 'petscKSPCreate:18' errCode = int32(-1); */
  /* 'petscKSPCreate:20' if ~isempty(coder.target) */
  /* 'petscKSPCreate:21' t_ksp = coder.opaque('KSP'); */
  /* 'petscKSPCreate:23' if nargin==0 */
  /* 'petscKSPCreate:25' else */
  /* 'petscKSPCreate:26' t_comm = MPI_Comm(comm); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPCreate:29' errCode = coder.ceval('KSPCreate', t_comm, coder.wref(t_ksp)); */
  errCode = KSPCreate(t_comm, &t_ksp);

  /* 'petscKSPCreate:31' toplevel = nargout>2; */
  /* 'petscKSPCreate:32' ksp = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPCreate:34' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPCreate:35' m2c_error('petsc:RuntimeError', 'KSPCreate returned error code %d\n', errCode) */
      k_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:36' if nargout>1 */
  /* 'mptKSPSetup:37' time = 0; */
  /* 'mptKSPSetup:38' comm = petscObjectGetComm(t_ksp); */
  /* Gets the MPI communicator for any PetscObject, regardless of the type.  */
  /*  */
  /*   [comm, errCode] = petscObjectGetComm(obj) */
  /*  */
  /*   obtains the MPI_Comm associated with the PetscObject. */
  /*  */
  /*   SEE ALSO: petscMatSetType, petscMatSetFromOptions */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  PetscObjectGetComm(PetscObject obj,MPI_Comm *comm) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscObjectGetComm.html */
  /* 'petscObjectGetComm:16' errCode = int32(-1); */
  /* 'petscObjectGetComm:18' if ~isempty(coder.target) */
  /* 'petscObjectGetComm:19' t_obj = PetscObject(obj); */
  /* Map an opaque object into a PETSc PetscObject object */
  /*  */
  /*   obj = PetscObject() simply returns a definition of the */
  /*   m2c_opaque_type definition, suitable in the argument */
  /*   specification for codegen. */
  /*  */
  /*   obj = PetscObject(arg) or obj = PetscObject(arg, false) converts */
  /*   arg into a PETSc Object object. */
  /*  */
  /*   obj = PetscObject(arg, 'wrap') or obj = PetscObject(arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the  */
  /*   object needs to be returned to MATLAB. Note that the value of  */
  /*   opaque must be determined at compile time. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscObject:18' coder.inline('always'); */
  /* 'PetscObject:20' if nargin==0 && isempty(coder.target) */
  /* 'PetscObject:25' if isstruct(arg) && ~isequal(arg.type, 'PetscObject') && ... */
  /* 'PetscObject:26'         ~isequal(arg.type, 'Mat') && ~isequal(arg.type, 'Vec') && ... */
  /* 'PetscObject:27'         ~isequal(arg.type, 'KSP') && ~isequal(arg.type, 'PC') */
  /* 'PetscObject:32' if ~isstruct(arg) || isempty(coder.target) */
  /* 'PetscObject:33' if nargin==1 || ischar(wrap) || ~wrap */
  /* 'PetscObject:34' obj = coder.opaque('PetscObject'); */
  /* 'PetscObject:35' obj = coder.ceval('(PetscObject)', arg); */
  t_obj = (PetscObject)(t_ksp);

  /* 'petscObjectGetComm:20' t_comm = coder.opaque('MPI_Comm'); */
  /* 'petscObjectGetComm:22' errCode = coder.ceval('PetscObjectGetComm', t_obj, coder.wref(t_comm)); */
  errCode = PetscObjectGetComm(t_obj, &t_comm);

  /* 'petscObjectGetComm:24' toplevel = nargout>2; */
  /* 'petscObjectGetComm:25' comm = MPI_Comm(t_comm, toplevel); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscObjectGetComm:27' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscObjectGetComm:28' m2c_error('petsc:RuntimeError', 'PetscObjectGetComm returned error code %d\n', errCode) */
      j_m2c_error(errCode);
    }
  }

  /*  When timing the run, use mpi_Barrier for more accurate results. */
  /* 'mptKSPSetup:40' mpi_Barrier(comm); */
  mpi_Barrier(t_comm);

  /* 'mptKSPSetup:41' t = mpi_Wtime(); */
  /* mpi_Wtime    Returns an elapsed time on the calling processor */
  /*  */
  /*   secs = mpi_Wtime */
  /*  */
  /*   secs (double) Time in seconds since an arbitrary time in the past */
  /*  */
  /*   SEE ALSO: mpi_Wtick */
  /*  */
  /*  C interface: */
  /*  double MPI_Wtime(void) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Wtime.html */
  /* 'mpi_Wtime:17' secs = 0; */
  /* 'mpi_Wtime:18' secs = coder.ceval('MPI_Wtime'); */
  t = MPI_Wtime();

  /*  Setup KSP */
  /* 'mptKSPSetup:45' petscKSPSetOperators(t_ksp, PetscMat(t_Amat)); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* Sets the matrix associated with the linear system and a (possibly) */
  /* different one associated with the preconditioner. */
  /*  */
  /*   errCode = petscKSPSetOperators(ksp, Amat) */
  /*  */
  /*   sets the matrix to be Amat and use the same matrix to construct the */
  /*   preconditioner. */
  /*      ksp - iterative context obtained from petscKSPCreate */
  /*      Amat	  - the right hand side vector */
  /*  */
  /*   errCode = petscKSPSetOperators(ksp, Amat, Pmat) */
  /*  */
  /*   uses the matrix Pmat to construct the preconditioner. */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetUp, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetOperators(KSP ksp,Mat Amat,Mat Pmat) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetOperators.html */
  /* 'petscKSPSetOperators:25' errCode = int32(-1); */
  /* 'petscKSPSetOperators:27' if ~isempty(coder.target) */
  /* 'petscKSPSetOperators:28' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetOperators:29' t_Amat = PetscMat(Amat); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetOperators:31' if nargin==2 */
  /* 'petscKSPSetOperators:32' t_Pmat = t_Amat; */
  /* 'petscKSPSetOperators:37' errCode = coder.ceval('KSPSetOperators', t_ksp, t_Amat, t_Pmat); */
  errCode = KSPSetOperators(t_ksp, AMat, AMat);

  /* 'petscKSPSetOperators:39' toplevel = nargout>1; */
  /* 'petscKSPSetOperators:40' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSetOperators:41' m2c_error('petsc:RuntimeError', 'KSPSetOperators returned error code %d\n', errCode) */
      n_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:47' if nargin>1 */
  /* 'mptKSPSetup:48' if nargin>2 */
  /* 'mptKSPSetup:49' hasPC = ~ischar(pctype) || ~isempty(pctype); */
  /* 'mptKSPSetup:50' hasOpt = nargin>3 && (~ischar(pcopt) || ~isempty(pcopt)); */
  /* 'mptKSPSetup:52' if hasPC || hasOpt */
  /* 'mptKSPSetup:85' if ischar(ksptype) && ~isempty(ksptype) && ksptype(end)~=0 */
  /* 'mptKSPSetup:88' else */
  /* 'mptKSPSetup:89' ksptype0 = ksptype; */
  /* 'mptKSPSetup:91' if ischar(ksptype0) && ~isempty(ksptype0) || ~ischar(ksptype0) */
  /* 'mptKSPSetup:97' if nargin<=3 || isempty(pcopt) */
  /*  Use right-preconditioner by default */
  /* 'mptKSPSetup:99' petscKSPSetPCSide(t_ksp, PETSC_PC_RIGHT); */
  /*  Obtain PETSC constant PC_RIGHT */
  /* 'PETSC_PC_RIGHT:4' coder.inline('always'); */
  /* 'PETSC_PC_RIGHT:6' val = petscGetEnum('PC_RIGHT'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:181' case 'PC_RIGHT' */
  /* 'petscGetEnum:182' [val, toplevel] = get_val('PetscInt', 'PC_RIGHT', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  b_flag = (PC_RIGHT);

  /* Sets the preconditioning side. */
  /*  */
  /*   errCode = petscKSPSetPCSide(ksp, side) sets the side of the KSP */
  /*  */
  /*   SEE ALSO:  petscKSPGetPCSide */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetPCSide(KSP ksp, PCSide side) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetPCSide.html */
  /* 'petscKSPSetPCSide:14' errCode = int32(-1); */
  /* 'petscKSPSetPCSide:16' if ~isempty(coder.target) */
  /* 'petscKSPSetPCSide:17' errCode = coder.ceval('KSPSetPCSide', PetscKSP(ksp), side); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  errCode = KSPSetPCSide(t_ksp, b_flag);

  /* 'petscKSPSetPCSide:19' toplevel = nargout>1; */
  /* 'petscKSPSetPCSide:20' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSetPCSide:21' m2c_error('petsc:RuntimeError', 'KSPSetPCSide returned error code %d\n', errCode) */
      o_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:102' petscKSPSetFromOptions(t_ksp); */
  /* Sets KSP options from the options database. This routine must be called */
  /* before KSPSetUp() if the user is to be allowed to set the Krylov type. */
  /*  */
  /*   errCode = petscKSPSetFromOptions(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetOperators, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPSetFromOptions(KSP ksp) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetFromOptions.html */
  /* 'petscKSPSetFromOptions:15' errCode = int32(-1); */
  /* 'petscKSPSetFromOptions:17' if ~isempty(coder.target) */
  /* 'petscKSPSetFromOptions:18' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetFromOptions:20' errCode = coder.ceval('KSPSetFromOptions', t_ksp); */
  errCode = KSPSetFromOptions(t_ksp);

  /* 'petscKSPSetFromOptions:22' toplevel = nargout>1; */
  /* 'petscKSPSetFromOptions:23' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSetFromOptions:24' m2c_error('petsc:RuntimeError', 'KSPSetFromOptions returned error code %d\n', errCode) */
      p_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:104' petscKSPSetUp(t_ksp); */
  /* Sets up the internal data structures for the later use of an iterative solver. */
  /*  */
  /*   errCode = petscKSPSetUp(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetOperators, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPSetUp(KSP ksp) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetUp.html */
  /* 'petscKSPSetUp:14' errCode = int32(-1); */
  /* 'petscKSPSetUp:16' if ~isempty(coder.target) */
  /* 'petscKSPSetUp:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetUp:19' errCode = coder.ceval('KSPSetUp', t_ksp); */
  errCode = KSPSetUp(t_ksp);

  /* 'petscKSPSetUp:21' toplevel = nargout>1; */
  /* 'petscKSPSetUp:22' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSetUp:23' m2c_error('petsc:RuntimeError', 'KSPSetUp returned error code %d\n', errCode) */
      q_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:106' if nargout>1 */
  /*  When timing the run, use mpi_Barrier for more accurate results. */
  /* 'mptKSPSetup:108' mpi_Barrier(comm); */
  mpi_Barrier(t_comm);

  /* 'mptKSPSetup:109' time = mpi_Wtime()-t; */
  /* mpi_Wtime    Returns an elapsed time on the calling processor */
  /*  */
  /*   secs = mpi_Wtime */
  /*  */
  /*   secs (double) Time in seconds since an arbitrary time in the past */
  /*  */
  /*   SEE ALSO: mpi_Wtick */
  /*  */
  /*  C interface: */
  /*  double MPI_Wtime(void) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Wtime.html */
  /* 'mpi_Wtime:17' secs = 0; */
  /* 'mpi_Wtime:18' secs = coder.ceval('MPI_Wtime'); */
  secs = MPI_Wtime();

  /* 'mptKSPSetup:112' toplevel = nargout>2; */
  /* 'mptKSPSetup:113' ksp = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'mptSolve:80' [flag, relres, iter, reshis, time_solve] = mptKSPSolve(ksp, b, x, ... */
  /* 'mptSolve:81'     double(rtol), int32(maxit), x0); */
  mptKSPSolve(t_ksp, bVec, t_vec_out, NULL, &c_flag, &b_relres, &b_iter, reshis,
              &time_solve);

  /* 'mptSolve:83' if nargout>4 */
  /* 'mptSolve:84' times = [time_setup; time_solve]; */
  /* 'mptSolve:87' mptKSPCleanup(ksp); */
  /*  Cleans up the KSP. */
  /*  */
  /*    ksp = mptKSPCleanup(ksp) destropys the given KSP object. */
  /*    It should be called whtn the KSP object is no longer needed, and  */
  /*    no calls should be made to this KSP after this. */
  /*  */
  /*  See Also: mptKSPSetup, mptKSPSolve */
  /*  Destroy the KSP and solution vector */
  /* 'mptKSPCleanup:13' t_ksp = petscKSPDestroy(ksp); */
  /* Destroys KSP context. */
  /*  */
  /*   [ksp, errCode] = petscKSPDestroy(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetUp, petscKSPSolve */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPDestroy(KSP *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPDestroy.html */
  /* 'petscKSPDestroy:14' errCode = int32(-1); */
  /* 'petscKSPDestroy:16' if ~isempty(coder.target) */
  /* 'petscKSPDestroy:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPDestroy:19' errCode = coder.ceval('KSPDestroy', coder.ref(t_ksp)); */
  errCode = KSPDestroy(&t_ksp);

  /* 'petscKSPDestroy:21' toplevel = nargout>2; */
  /* 'petscKSPDestroy:22' ksp_out = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPDestroy:25' m2c_error('petsc:RuntimeError', 'KSPDestroy returned error code %d\n', errCode) */
      hb_m2c_error(errCode);
    }
  }

  /* 'mptKSPCleanup:15' toplevel = nargout>1; */
  /* 'mptKSPCleanup:16' ksp = PetscKSP(t_ksp, toplevel); */
  /* 'mptSolveCRS:133' petscMatDestroy(AMat); */
  /* Frees space taken by a matrix. */
  /*  */
  /*   [mat, errCode] = petscMatDestroy(mat) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleMat, petscVecDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode MatDestroy(Mat *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Mat/MatDestroy.html */
  /* 'petscMatDestroy:14' errCode = int32(-1); */
  /* 'petscMatDestroy:16' if ~isempty(coder.target) */
  /* 'petscMatDestroy:17' t_mat = PetscMat(mat); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_mat = AMat;

  /* 'petscMatDestroy:19' errCode = coder.ceval('MatDestroy', coder.ref(t_mat)); */
  errCode = MatDestroy(&t_mat);

  /* 'petscMatDestroy:21' toplevel = nargout>2; */
  /* 'petscMatDestroy:22' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscMatDestroy:23' m2c_error('petsc:RuntimeError', 'MatDestroy returned error code %d\n', errCode) */
      ib_m2c_error(errCode);
    }
  }

  /* 'petscMatDestroy:26' mat = PetscMat(t_mat, toplevel); */
  /* 'mptSolveCRS:134' petscVecDestroy(bVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = bVec;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  /* 'mptSolveCRS:136' x = mptVecToArray(xVec); */
  mptVecToArray(t_vec_out, x);

  /* 'mptSolveCRS:137' petscVecDestroy(xVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = t_vec_out;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  *flag = c_flag;
  *relres = b_relres;
  *iter = b_iter;
  times[0] = secs - t;
  times[1] = time_solve;
}

/*
 * function [x,flag,relres,iter,reshis,times] = mptSolveCRS_5args(Arows, Acols, Avals, b, solver)
 */
void mptSolveCRS_5args(const emxArray_int32_T *Arows, const emxArray_int32_T
  *Acols, const emxArray_real_T *Avals, const emxArray_real_T *b, const
  emxArray_char_T *solver, emxArray_real_T *x, int *flag, double *relres, int
  *iter, emxArray_real_T *reshis, double times[2])
{
  Mat AMat;
  Vec bVec;
  Vec t_vec_out;
  int errCode;
  int b_flag;
  KSP ksp;
  double time_setup;
  int c_flag;
  double b_relres;
  int b_iter;
  double time_solve;
  KSP t_ksp;
  Mat t_mat;
  Vec t_vec;

  /* 'mptSolveCRS_5args:2' [x,flag,relres,iter,reshis,times] = mptSolveCRS(Arows, Acols, Avals, b, solver); */
  /*  Solves a linear system using any PETSc solver for matrix in CRS format. */
  /*  */
  /*  Syntax: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0, opts) */
  /*  */
  /*     [x, flag, relres, iter, reshis, times] = mptSolveCRS(Arows, Acols, Avals, b, ...) */
  /*     returns the solution vector x, the flag (KSPConvergedReason), relative */
  /*     residual, number of iterations, history of residual used in convergence */
  /*     test (typically preconditioned residual), and the execution times in */
  /*     setup and solve. */
  /*  */
  /*     A is a sparse matrix in CRS format. b, x and resvec are all regular */
  /*     vectors. Solver is a value of PETSC_KSP*. pctype is a value of */
  /*     PETSC_PC*, and pcopt is a value of PETSC_MATSOLVER*. */
  /*  */
  /*     For rtol, maxit, use 0 to use default values. */
  /*     For solver, pctype, pcopt and opts, use empty string ('') to use default. */
  /*     For x0, use zeros(0, 1) to disable initial guess. */
  /*  */
  /*     When times is given, it returns a 2-vector contaning the times spent */
  /*     in setup and in solve separately. */
  /*  */
  /*  Description: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) solves the linear system without */
  /*     preconditioners, using the default tolerances or those that have been */
  /*     set previously in the option databases. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) specifies to use a */
  /*     specific solver, such as PETSC_KSPGMRES, PETSC_KSPBCGS, etc. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) uses the given number */
  /*         of solvers and the relative tolerarance. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) solves with */
  /*         the given relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     uses the specified preconditioner (those give by PETSC_PC*). */
  /*     The preconditioner can be controlled by the PETSc option database. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt) specifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0) usee x0 for the initial guess. x0 can be the same as x. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0, opts) can pass additional command-line options in a */
  /*     string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolve, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptVecToArray, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* 'mptSolveCRS:88' if nargin==0 */
  /* 'mptSolveCRS:94' if isempty(coder.target) && ~exist(['mptSolveCRS.' mexext], 'file') && ... */
  /* 'mptSolveCRS:95'         exist('run_mptSolveCRS_exe', 'file') */
  /* 'mptSolveCRS:104' Arows = varargin{1}; */
  /* 'mptSolveCRS:105' Acols = varargin{2}; */
  /* 'mptSolveCRS:106' Avals = varargin{3}; */
  /* 'mptSolveCRS:107' b = varargin{4}; */
  /*  Setup KSP */
  /* 'mptSolveCRS:110' if nargin<5 */
  /* 'mptSolveCRS:110' else */
  /* 'mptSolveCRS:110' solver = varargin{5}; */
  /*  Use default */
  /* 'mptSolveCRS:111' if nargin<6 */
  /* 'mptSolveCRS:111' rtol = 0; */
  /* 'mptSolveCRS:112' if nargin<7 */
  /* 'mptSolveCRS:112' maxit = int32(0); */
  /* 'mptSolveCRS:113' if nargin<8 */
  /* 'mptSolveCRS:113' pctype = ''; */
  /* 'mptSolveCRS:114' if nargin<9 */
  /* 'mptSolveCRS:114' pcopt = ''; */
  /* 'mptSolveCRS:116' AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals); */
  AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals);

  /* 'mptSolveCRS:117' bVec = mptVecCreateFromArray(b); */
  bVec = mptVecCreateFromArray(b);

  /* 'mptSolveCRS:119' if nargin<10 || isempty(varargin{10}) */
  /* 'mptSolveCRS:120' x0Vec = PETSC_NULL_VEC; */
  /*  Obtain PETSC constant NULL of type Vec */
  /* 'PETSC_NULL_VEC:4' coder.inline('always'); */
  /* 'PETSC_NULL_VEC:6' obj = petscGetObject('PETSC_NULL_VEC'); */
  /* petscGetObject Obtain an opaque object in PETSC */
  /*  */
  /*     obj = petscGetObject(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  MPI_Comm: PETSC_COMM_SELF, PETSC_COMM_WORLD, MPI_COMM_SELF, MPI_COMM_WORLD */
  /*  */
  /*  Other: */
  /*      PETSC_IGNORE, PETSC_NULL_OPTION, PETSC_NULL_MAT, PETSC_NULL_VEC, */
  /*      PETSC_NULL_INT, PETSC_NULL_REAL */
  /* 'petscGetObject:16' if isempty(coder.target) */
  /* 'petscGetObject:20' switch name */
  /* 'petscGetObject:35' case 'PETSC_NULL_VEC' */
  /* 'petscGetObject:36' [obj, toplevel] = get_obj('Vec', 'NULL', nargout>1); */
  /* 'mptSolveCRS:121' xVec = petscVecDuplicate(bVec); */
  /* Creates a new vector of the same type as an existing vector. */
  /*  */
  /*   [vec_out, errCode] = petscVecDuplicate(vec_in) creates a new vector, but */
  /*      it does not copy the entries of the input vector. The user is */
  /*      responsible freeing the memory by calling petscVecDestroy. */
  /*  */
  /*   SEE ALSO: petscVecCopy, petscVecDestroy, petscVecCreate */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  VecDuplicate(Vec vec_in, Vec *vec_out) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDuplicate.html */
  /* 'petscVecDuplicate:16' errCode = int32(-1); */
  /* 'petscVecDuplicate:18' if ~isempty(coder.target) */
  /* 'petscVecDuplicate:19' t_vec_out = coder.opaque('Vec'); */
  /* 'petscVecDuplicate:21' errCode = coder.ceval('VecDuplicate', PetscVec(vec_in), coder.wref(t_vec_out)); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  errCode = VecDuplicate(bVec, &t_vec_out);

  /* 'petscVecDuplicate:23' toplevel = nargout>2; */
  /* 'petscVecDuplicate:24' vec_out = PetscVec(t_vec_out, toplevel); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscVecDuplicate:26' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDuplicate:27' m2c_error('petsc:RuntimeError', 'VecDuplicate returned error code %d\n', errCode) */
      i_m2c_error(errCode);
    }
  }

  /* 'mptSolveCRS:128' if nargin<11 */
  /* 'mptSolveCRS:128' opts = ''; */
  /* 'mptSolveCRS:130' [flag, relres, iter, reshis, times] = mptSolve(AMat, bVec, xVec, solver, ... */
  /* 'mptSolveCRS:131'     double(rtol), int32(maxit), pctype, pcopt, x0Vec, opts); */
  /*  Solves a linear system using a given solver in PETSc. */
  /*  */
  /*  Syntax: */
  /*     mptSolve(A_hdl, b_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, x0_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, x0_hdl, opts) */
  /*  */
  /*     [flag, relres, iter, reshis, times] = mptSolve(A_hdl, b_hdl, x_hdl, ...) */
  /*     returns the flag (KSPConvergedReason), relative residual, number of  */
  /*     iterations, history of residual used in convergence test (typically  */
  /*     preconditioned residual), and the execution times spent in its core steps. */
  /*  */
  /*     The handles are PetscMat or PetscVec objects. */
  /*  */
  /*  Description: */
  /*     mptSolve(A_hdl, b_hdl) solves the linear system without preconditioners, */
  /*     using the default tolerances or those that have been set previously in */
  /*     the option databases. A_hdl is a PetscMat object, and b_hdl is a */
  /*     PetscVec object. The solution is stored into b. The QMRCGS can be */
  /*     controlled using the options database for KSPQMRCGS. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl) solves the linear system and saves the */
  /*     result into x. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver) uses the specified solver, where */
  /*     solver is one of PETSC_KSP*. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol) uses the given relative tolerarance. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit) solves with the given */
  /*      relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype) uses the */
  /*     specified preconditioner (PETSC_PC*). The preconditioner can be */
  /*     controlled by the PETSc option database. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt) */
  /*     aspecifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, */
  /*     x0_handle) usee x0 for the initial guess. x0 can be the same as x or */
  /*     be PETSC_NULL_VEC. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, */
  /*     x0_handle, opts) can pass command-line options in a string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolveCRS, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptOptionsInsert, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* This function is codegen compatbile, but no need to a top-level function */
  /*  Setup KSP */
  /* 'mptSolve:66' if nargin<3 */
  /* 'mptSolve:67' if nargin<4 */
  /* 'mptSolve:68' if nargin<5 */
  /* 'mptSolve:69' if nargin<6 */
  /* 'mptSolve:70' if nargin<7 */
  /* 'mptSolve:71' if nargin<8 */
  /* 'mptSolve:72' if nargin<9 */
  /* 'mptSolve:74' if nargin==10 && ~isempty(opts) */
  /* 'mptSolve:78' [ksp, time_setup] = mptKSPSetup(A, solver, pctype, pcopt); */
  mptKSPSetup(AMat, solver, &ksp, &time_setup);

  /* 'mptSolve:80' [flag, relres, iter, reshis, time_solve] = mptKSPSolve(ksp, b, x, ... */
  /* 'mptSolve:81'     double(rtol), int32(maxit), x0); */
  mptKSPSolve(ksp, bVec, t_vec_out, NULL, &c_flag, &b_relres, &b_iter, reshis,
              &time_solve);

  /* 'mptSolve:83' if nargout>4 */
  /* 'mptSolve:84' times = [time_setup; time_solve]; */
  /* 'mptSolve:87' mptKSPCleanup(ksp); */
  /*  Cleans up the KSP. */
  /*  */
  /*    ksp = mptKSPCleanup(ksp) destropys the given KSP object. */
  /*    It should be called whtn the KSP object is no longer needed, and  */
  /*    no calls should be made to this KSP after this. */
  /*  */
  /*  See Also: mptKSPSetup, mptKSPSolve */
  /*  Destroy the KSP and solution vector */
  /* 'mptKSPCleanup:13' t_ksp = petscKSPDestroy(ksp); */
  /* Destroys KSP context. */
  /*  */
  /*   [ksp, errCode] = petscKSPDestroy(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetUp, petscKSPSolve */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPDestroy(KSP *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPDestroy.html */
  /* 'petscKSPDestroy:14' errCode = int32(-1); */
  /* 'petscKSPDestroy:16' if ~isempty(coder.target) */
  /* 'petscKSPDestroy:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_ksp = ksp;

  /* 'petscKSPDestroy:19' errCode = coder.ceval('KSPDestroy', coder.ref(t_ksp)); */
  errCode = KSPDestroy(&t_ksp);

  /* 'petscKSPDestroy:21' toplevel = nargout>2; */
  /* 'petscKSPDestroy:22' ksp_out = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPDestroy:25' m2c_error('petsc:RuntimeError', 'KSPDestroy returned error code %d\n', errCode) */
      hb_m2c_error(errCode);
    }
  }

  /* 'mptKSPCleanup:15' toplevel = nargout>1; */
  /* 'mptKSPCleanup:16' ksp = PetscKSP(t_ksp, toplevel); */
  /* 'mptSolveCRS:133' petscMatDestroy(AMat); */
  /* Frees space taken by a matrix. */
  /*  */
  /*   [mat, errCode] = petscMatDestroy(mat) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleMat, petscVecDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode MatDestroy(Mat *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Mat/MatDestroy.html */
  /* 'petscMatDestroy:14' errCode = int32(-1); */
  /* 'petscMatDestroy:16' if ~isempty(coder.target) */
  /* 'petscMatDestroy:17' t_mat = PetscMat(mat); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_mat = AMat;

  /* 'petscMatDestroy:19' errCode = coder.ceval('MatDestroy', coder.ref(t_mat)); */
  errCode = MatDestroy(&t_mat);

  /* 'petscMatDestroy:21' toplevel = nargout>2; */
  /* 'petscMatDestroy:22' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscMatDestroy:23' m2c_error('petsc:RuntimeError', 'MatDestroy returned error code %d\n', errCode) */
      ib_m2c_error(errCode);
    }
  }

  /* 'petscMatDestroy:26' mat = PetscMat(t_mat, toplevel); */
  /* 'mptSolveCRS:134' petscVecDestroy(bVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = bVec;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  /* 'mptSolveCRS:136' x = mptVecToArray(xVec); */
  mptVecToArray(t_vec_out, x);

  /* 'mptSolveCRS:137' petscVecDestroy(xVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = t_vec_out;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  *flag = c_flag;
  *relres = b_relres;
  *iter = b_iter;
  times[0] = time_setup;
  times[1] = time_solve;
}

/*
 * function [x,flag,relres,iter,reshis,times] = mptSolveCRS_6args(Arows, Acols, Avals, b, solver, rtol)
 */
void mptSolveCRS_6args(const emxArray_int32_T *Arows, const emxArray_int32_T
  *Acols, const emxArray_real_T *Avals, const emxArray_real_T *b, const
  emxArray_char_T *solver, double rtol, emxArray_real_T *x, int *flag, double
  *relres, int *iter, emxArray_real_T *reshis, double times[2])
{
  Mat AMat;
  Vec bVec;
  Vec obj;
  Vec t_vec_out;
  int errCode;
  int b_flag;
  KSP ksp;
  double time_setup;
  double b_rtol;
  int val;
  double bnrm;
  PetscObject t_obj;
  MPI_Comm t_comm;
  double t;
  int maxits;
  int b_val;
  boolean_T b1;
  double secs;
  double res;
  int b_iter;
  double b_relres;
  double abstol;
  double dtol;
  emxArray_char_T *side;
  PC t_pc;
  PetscReal * a;
  int na;
  int b_side;
  KSP t_ksp;
  Mat t_mat;
  static const char cv3[9] = { 's', 'y', 'm', 'm', 'e', 't', 'r', 'i', 'c' };

  static const char cv4[4] = { 'l', 'e', 'f', 't' };

  static const char cv5[5] = { 'r', 'i', 'g', 'h', 't' };

  Vec t_vec;
  KSPType t_type;
  PCType b_t_type;

  /* 'mptSolveCRS_6args:2' [x,flag,relres,iter,reshis,times] = mptSolveCRS(Arows, Acols, Avals, b, solver, rtol); */
  /*  Solves a linear system using any PETSc solver for matrix in CRS format. */
  /*  */
  /*  Syntax: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0, opts) */
  /*  */
  /*     [x, flag, relres, iter, reshis, times] = mptSolveCRS(Arows, Acols, Avals, b, ...) */
  /*     returns the solution vector x, the flag (KSPConvergedReason), relative */
  /*     residual, number of iterations, history of residual used in convergence */
  /*     test (typically preconditioned residual), and the execution times in */
  /*     setup and solve. */
  /*  */
  /*     A is a sparse matrix in CRS format. b, x and resvec are all regular */
  /*     vectors. Solver is a value of PETSC_KSP*. pctype is a value of */
  /*     PETSC_PC*, and pcopt is a value of PETSC_MATSOLVER*. */
  /*  */
  /*     For rtol, maxit, use 0 to use default values. */
  /*     For solver, pctype, pcopt and opts, use empty string ('') to use default. */
  /*     For x0, use zeros(0, 1) to disable initial guess. */
  /*  */
  /*     When times is given, it returns a 2-vector contaning the times spent */
  /*     in setup and in solve separately. */
  /*  */
  /*  Description: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) solves the linear system without */
  /*     preconditioners, using the default tolerances or those that have been */
  /*     set previously in the option databases. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) specifies to use a */
  /*     specific solver, such as PETSC_KSPGMRES, PETSC_KSPBCGS, etc. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) uses the given number */
  /*         of solvers and the relative tolerarance. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) solves with */
  /*         the given relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     uses the specified preconditioner (those give by PETSC_PC*). */
  /*     The preconditioner can be controlled by the PETSc option database. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt) specifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0) usee x0 for the initial guess. x0 can be the same as x. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0, opts) can pass additional command-line options in a */
  /*     string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolve, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptVecToArray, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* 'mptSolveCRS:88' if nargin==0 */
  /* 'mptSolveCRS:94' if isempty(coder.target) && ~exist(['mptSolveCRS.' mexext], 'file') && ... */
  /* 'mptSolveCRS:95'         exist('run_mptSolveCRS_exe', 'file') */
  /* 'mptSolveCRS:104' Arows = varargin{1}; */
  /* 'mptSolveCRS:105' Acols = varargin{2}; */
  /* 'mptSolveCRS:106' Avals = varargin{3}; */
  /* 'mptSolveCRS:107' b = varargin{4}; */
  /*  Setup KSP */
  /* 'mptSolveCRS:110' if nargin<5 */
  /* 'mptSolveCRS:110' else */
  /* 'mptSolveCRS:110' solver = varargin{5}; */
  /*  Use default */
  /* 'mptSolveCRS:111' if nargin<6 */
  /* 'mptSolveCRS:111' else */
  /* 'mptSolveCRS:111' rtol = varargin{6}; */
  /* 'mptSolveCRS:112' if nargin<7 */
  /* 'mptSolveCRS:112' maxit = int32(0); */
  /* 'mptSolveCRS:113' if nargin<8 */
  /* 'mptSolveCRS:113' pctype = ''; */
  /* 'mptSolveCRS:114' if nargin<9 */
  /* 'mptSolveCRS:114' pcopt = ''; */
  /* 'mptSolveCRS:116' AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals); */
  AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals);

  /* 'mptSolveCRS:117' bVec = mptVecCreateFromArray(b); */
  bVec = mptVecCreateFromArray(b);

  /* 'mptSolveCRS:119' if nargin<10 || isempty(varargin{10}) */
  /* 'mptSolveCRS:120' x0Vec = PETSC_NULL_VEC; */
  /*  Obtain PETSC constant NULL of type Vec */
  /* 'PETSC_NULL_VEC:4' coder.inline('always'); */
  /* 'PETSC_NULL_VEC:6' obj = petscGetObject('PETSC_NULL_VEC'); */
  /* petscGetObject Obtain an opaque object in PETSC */
  /*  */
  /*     obj = petscGetObject(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  MPI_Comm: PETSC_COMM_SELF, PETSC_COMM_WORLD, MPI_COMM_SELF, MPI_COMM_WORLD */
  /*  */
  /*  Other: */
  /*      PETSC_IGNORE, PETSC_NULL_OPTION, PETSC_NULL_MAT, PETSC_NULL_VEC, */
  /*      PETSC_NULL_INT, PETSC_NULL_REAL */
  /* 'petscGetObject:16' if isempty(coder.target) */
  /* 'petscGetObject:20' switch name */
  /* 'petscGetObject:35' case 'PETSC_NULL_VEC' */
  /* 'petscGetObject:36' [obj, toplevel] = get_obj('Vec', 'NULL', nargout>1); */
  obj = NULL;

  /* 'mptSolveCRS:121' xVec = petscVecDuplicate(bVec); */
  /* Creates a new vector of the same type as an existing vector. */
  /*  */
  /*   [vec_out, errCode] = petscVecDuplicate(vec_in) creates a new vector, but */
  /*      it does not copy the entries of the input vector. The user is */
  /*      responsible freeing the memory by calling petscVecDestroy. */
  /*  */
  /*   SEE ALSO: petscVecCopy, petscVecDestroy, petscVecCreate */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  VecDuplicate(Vec vec_in, Vec *vec_out) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDuplicate.html */
  /* 'petscVecDuplicate:16' errCode = int32(-1); */
  /* 'petscVecDuplicate:18' if ~isempty(coder.target) */
  /* 'petscVecDuplicate:19' t_vec_out = coder.opaque('Vec'); */
  /* 'petscVecDuplicate:21' errCode = coder.ceval('VecDuplicate', PetscVec(vec_in), coder.wref(t_vec_out)); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  errCode = VecDuplicate(bVec, &t_vec_out);

  /* 'petscVecDuplicate:23' toplevel = nargout>2; */
  /* 'petscVecDuplicate:24' vec_out = PetscVec(t_vec_out, toplevel); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscVecDuplicate:26' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDuplicate:27' m2c_error('petsc:RuntimeError', 'VecDuplicate returned error code %d\n', errCode) */
      i_m2c_error(errCode);
    }
  }

  /* 'mptSolveCRS:128' if nargin<11 */
  /* 'mptSolveCRS:128' opts = ''; */
  /* 'mptSolveCRS:130' [flag, relres, iter, reshis, times] = mptSolve(AMat, bVec, xVec, solver, ... */
  /* 'mptSolveCRS:131'     double(rtol), int32(maxit), pctype, pcopt, x0Vec, opts); */
  /*  Solves a linear system using a given solver in PETSc. */
  /*  */
  /*  Syntax: */
  /*     mptSolve(A_hdl, b_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, x0_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, x0_hdl, opts) */
  /*  */
  /*     [flag, relres, iter, reshis, times] = mptSolve(A_hdl, b_hdl, x_hdl, ...) */
  /*     returns the flag (KSPConvergedReason), relative residual, number of  */
  /*     iterations, history of residual used in convergence test (typically  */
  /*     preconditioned residual), and the execution times spent in its core steps. */
  /*  */
  /*     The handles are PetscMat or PetscVec objects. */
  /*  */
  /*  Description: */
  /*     mptSolve(A_hdl, b_hdl) solves the linear system without preconditioners, */
  /*     using the default tolerances or those that have been set previously in */
  /*     the option databases. A_hdl is a PetscMat object, and b_hdl is a */
  /*     PetscVec object. The solution is stored into b. The QMRCGS can be */
  /*     controlled using the options database for KSPQMRCGS. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl) solves the linear system and saves the */
  /*     result into x. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver) uses the specified solver, where */
  /*     solver is one of PETSC_KSP*. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol) uses the given relative tolerarance. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit) solves with the given */
  /*      relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype) uses the */
  /*     specified preconditioner (PETSC_PC*). The preconditioner can be */
  /*     controlled by the PETSc option database. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt) */
  /*     aspecifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, */
  /*     x0_handle) usee x0 for the initial guess. x0 can be the same as x or */
  /*     be PETSC_NULL_VEC. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, */
  /*     x0_handle, opts) can pass command-line options in a string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolveCRS, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptOptionsInsert, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* This function is codegen compatbile, but no need to a top-level function */
  /*  Setup KSP */
  /* 'mptSolve:66' if nargin<3 */
  /* 'mptSolve:67' if nargin<4 */
  /* 'mptSolve:68' if nargin<5 */
  /* 'mptSolve:69' if nargin<6 */
  /* 'mptSolve:70' if nargin<7 */
  /* 'mptSolve:71' if nargin<8 */
  /* 'mptSolve:72' if nargin<9 */
  /* 'mptSolve:74' if nargin==10 && ~isempty(opts) */
  /* 'mptSolve:78' [ksp, time_setup] = mptKSPSetup(A, solver, pctype, pcopt); */
  mptKSPSetup(AMat, solver, &ksp, &time_setup);

  /* 'mptSolve:80' [flag, relres, iter, reshis, time_solve] = mptKSPSolve(ksp, b, x, ... */
  /* 'mptSolve:81'     double(rtol), int32(maxit), x0); */
  b_rtol = rtol;

  /*  Solves linear system. */
  /*  */
  /*  Syntax: */
  /*     mptKSPSolve(ksp, b) */
  /*     mptKSPSolve(ksp, b, x) */
  /*     mptKSPSolve(ksp, b, x, rtol) */
  /*     mptKSPSolve(ksp, b, x, rtol, maxits) */
  /*     mptKSPSolve(ksp, b, x, rtol, maxits, x0) */
  /*  */
  /*     [flag, relres, iter, reshis, time] = mptKSPSolve(...) returns the flag */
  /*        (KSPConvergedReason), relative residual, number of iterations,  */
  /*     history of residual used in convergence test (typically preconditioned  */
  /*     residual), and execution times. */
  /*  */
  /*  Description: */
  /*     mptKSPSolve(ksp, b) solves the linear system using the tolerances */
  /*     that have been set previously by the user. The solution overwrites b. */
  /*  */
  /*     mptKSPSolve(ksp, b, x) solves the linear system and saves the solution */
  /*     into x. */
  /*  */
  /*     mptKSPSolve(ksp, b, x, rtol) solves with the given relative tolerance. */
  /*  */
  /*     mptKSPSolve(ksp, b, x, rtol, maxits) solves with the given relative */
  /*     tolerances and maximum iteration count. */
  /*  */
  /*     mptKSPSolve(ksp, b, rtol, maxits, x0) uses x0 as the initial guess */
  /*  */
  /*  See also mptKSPSetup, mptKSPCleanup */
  /*  Compute norm of b before it is overwritten */
  /* 'mptKSPSolve:39' bnrm = petscVecNorm(b, PETSC_NORM_2); */
  /*  Obtain PETSC constant NORM_2 */
  /* 'PETSC_NORM_2:4' coder.inline('always'); */
  /* 'PETSC_NORM_2:6' val = petscGetEnum('NORM_2'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:161' case 'NORM_2' */
  /* 'petscGetEnum:162' [val, toplevel] = get_val('NormType', 'NORM_2', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  val = (NORM_2);

  /* Computes the vector norm. */
  /*  */
  /*   [nrm, errCode, toplevel] = petscVecNorm(x, type) computes the norm of */
  /*      vector x of the given type, where type can be PETSC_NORM_1, */
  /*      PETSC_NORM_2 or PETSC_NORM_INFINITY. */
  /*  */
  /*   [nrm, errCode, toplevel] = petscVecNorm(x, type, nrm) allows also */
  /*      use PETSC_NORM_1_AND_2. In this case, nrm must be given as an input */
  /*      of size 2-by-1. */
  /*  */
  /*   SEE ALSO: petscMatNorm */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  VecNorm(Vec x,NormType type,PetscReal *val) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecNorm.html */
  /* 'petscVecNorm:21' errCode = int32(-1); */
  /* 'petscVecNorm:23' if ~isempty(coder.target) */
  /* 'petscVecNorm:24' if nargin==2 */
  /* 'petscVecNorm:25' nrm = double(0); */
  /* 'petscVecNorm:27' errCode = coder.ceval('VecNorm', PetscVec(x), type, coder.wref(nrm)); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  errCode = VecNorm(bVec, val, &bnrm);

  /* 'petscVecNorm:29' toplevel = nargout>2; */
  /* 'petscVecNorm:30' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecNorm:31' m2c_error('petsc:RuntimeError', 'VecNorm returned error code %d\n', errCode) */
      r_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:40' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'mptKSPSolve:42' if nargout>4 */
  /* 'mptKSPSolve:43' time = 0; */
  /* 'mptKSPSolve:44' comm = petscObjectGetComm(t_ksp); */
  /* Gets the MPI communicator for any PetscObject, regardless of the type.  */
  /*  */
  /*   [comm, errCode] = petscObjectGetComm(obj) */
  /*  */
  /*   obtains the MPI_Comm associated with the PetscObject. */
  /*  */
  /*   SEE ALSO: petscMatSetType, petscMatSetFromOptions */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  PetscObjectGetComm(PetscObject obj,MPI_Comm *comm) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscObjectGetComm.html */
  /* 'petscObjectGetComm:16' errCode = int32(-1); */
  /* 'petscObjectGetComm:18' if ~isempty(coder.target) */
  /* 'petscObjectGetComm:19' t_obj = PetscObject(obj); */
  /* Map an opaque object into a PETSc PetscObject object */
  /*  */
  /*   obj = PetscObject() simply returns a definition of the */
  /*   m2c_opaque_type definition, suitable in the argument */
  /*   specification for codegen. */
  /*  */
  /*   obj = PetscObject(arg) or obj = PetscObject(arg, false) converts */
  /*   arg into a PETSc Object object. */
  /*  */
  /*   obj = PetscObject(arg, 'wrap') or obj = PetscObject(arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the  */
  /*   object needs to be returned to MATLAB. Note that the value of  */
  /*   opaque must be determined at compile time. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscObject:18' coder.inline('always'); */
  /* 'PetscObject:20' if nargin==0 && isempty(coder.target) */
  /* 'PetscObject:25' if isstruct(arg) && ~isequal(arg.type, 'PetscObject') && ... */
  /* 'PetscObject:26'         ~isequal(arg.type, 'Mat') && ~isequal(arg.type, 'Vec') && ... */
  /* 'PetscObject:27'         ~isequal(arg.type, 'KSP') && ~isequal(arg.type, 'PC') */
  /* 'PetscObject:32' if ~isstruct(arg) || isempty(coder.target) */
  /* 'PetscObject:33' if nargin==1 || ischar(wrap) || ~wrap */
  /* 'PetscObject:34' obj = coder.opaque('PetscObject'); */
  /* 'PetscObject:35' obj = coder.ceval('(PetscObject)', arg); */
  t_obj = (PetscObject)(ksp);

  /* 'petscObjectGetComm:20' t_comm = coder.opaque('MPI_Comm'); */
  /* 'petscObjectGetComm:22' errCode = coder.ceval('PetscObjectGetComm', t_obj, coder.wref(t_comm)); */
  errCode = PetscObjectGetComm(t_obj, &t_comm);

  /* 'petscObjectGetComm:24' toplevel = nargout>2; */
  /* 'petscObjectGetComm:25' comm = MPI_Comm(t_comm, toplevel); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscObjectGetComm:27' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscObjectGetComm:28' m2c_error('petsc:RuntimeError', 'PetscObjectGetComm returned error code %d\n', errCode) */
      j_m2c_error(errCode);
    }
  }

  /*  When timing the run, use mpi_Barrier for more accurate results. */
  /* 'mptKSPSolve:46' mpi_Barrier(comm); */
  mpi_Barrier(t_comm);

  /* 'mptKSPSolve:47' t = mpi_Wtime(); */
  /* mpi_Wtime    Returns an elapsed time on the calling processor */
  /*  */
  /*   secs = mpi_Wtime */
  /*  */
  /*   secs (double) Time in seconds since an arbitrary time in the past */
  /*  */
  /*   SEE ALSO: mpi_Wtick */
  /*  */
  /*  C interface: */
  /*  double MPI_Wtime(void) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Wtime.html */
  /* 'mpi_Wtime:17' secs = 0; */
  /* 'mpi_Wtime:18' secs = coder.ceval('MPI_Wtime'); */
  t = MPI_Wtime();

  /* 'mptKSPSolve:50' if nargin<5 || maxits==0 */
  /* 'mptKSPSolve:51' maxits = PETSC_DEFAULT; */
  /*  Obtain PETSC constant PETSC_DEFAULT */
  /* 'PETSC_DEFAULT:4' coder.inline('always'); */
  /* 'PETSC_DEFAULT:6' val = petscGetEnum('PETSC_DEFAULT'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:189' case 'PETSC_DEFAULT' */
  /* 'petscGetEnum:190' [val, toplevel] = get_val('PetscInt', 'PETSC_DEFAULT', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  maxits = (PETSC_DEFAULT);

  /*  Solve the linear system */
  /* 'mptKSPSolve:55' if nargin==2 */
  /* 'mptKSPSolve:58' else */
  /*  Set tolerances */
  /* 'mptKSPSolve:60' if nargin>=4 */
  /* 'mptKSPSolve:61' if rtol==0 */
  if (rtol == 0.0) {
    /* 'mptKSPSolve:62' rtol = double(PETSC_DEFAULT); */
    /*  Obtain PETSC constant PETSC_DEFAULT */
    /* 'PETSC_DEFAULT:4' coder.inline('always'); */
    /* 'PETSC_DEFAULT:6' val = petscGetEnum('PETSC_DEFAULT'); */
    /* petscGetEnum Obtain an enumerate value in PETSC */
    /*  */
    /*     val = petscGetEnum(name) */
    /*  */
    /* The supported names include: */
    /*  */
    /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
    /*  */
    /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
    /*       VEC_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
    /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
    /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
    /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
    /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
    /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
    /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
    /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
    /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
    /*       MAT_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
    /*  */
    /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
    /*  */
    /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
    /*  */
    /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
    /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
    /*  */
    /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
    /*  */
    /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
    /*  */
    /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
    /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
    /*  */
    /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
    /*  */
    /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
    /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
    /*  */
    /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
    /*  */
    /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
    /* 'petscGetEnum:51' if isempty(coder.target) */
    /* % InsertMode */
    /* 'petscGetEnum:56' switch name */
    /* 'petscGetEnum:189' case 'PETSC_DEFAULT' */
    /* 'petscGetEnum:190' [val, toplevel] = get_val('PetscInt', 'PETSC_DEFAULT', nargin>1); */
    /* 'petscGetEnum:201' coder.inline('always'); */
    /* 'petscGetEnum:203' val = int32(intmin); */
    /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
    val = (PETSC_DEFAULT);
    b_rtol = val;
  }

  /* 'mptKSPSolve:64' petscKSPSetTolerances(t_ksp, double(rtol), double(PETSC_DEFAULT), ... */
  /* 'mptKSPSolve:65'             double(PETSC_DEFAULT), int32(maxits)); */
  /*  Obtain PETSC constant PETSC_DEFAULT */
  /* 'PETSC_DEFAULT:4' coder.inline('always'); */
  /* 'PETSC_DEFAULT:6' val = petscGetEnum('PETSC_DEFAULT'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:189' case 'PETSC_DEFAULT' */
  /* 'petscGetEnum:190' [val, toplevel] = get_val('PetscInt', 'PETSC_DEFAULT', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  val = (PETSC_DEFAULT);

  /*  Obtain PETSC constant PETSC_DEFAULT */
  /* 'PETSC_DEFAULT:4' coder.inline('always'); */
  /* 'PETSC_DEFAULT:6' val = petscGetEnum('PETSC_DEFAULT'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:189' case 'PETSC_DEFAULT' */
  /* 'petscGetEnum:190' [val, toplevel] = get_val('PetscInt', 'PETSC_DEFAULT', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  b_val = (PETSC_DEFAULT);

  /* Sets the iteration tolerances used by the default KSP convergence testers. */
  /*  */
  /*  Syntax: */
  /*  */
  /*   [errCode, toplevel] = petscKSPSetTolerances(ksp, rtol) */
  /*   [errCode, toplevel] = petscKSPSetTolerances(ksp, rtol, abstol, dtol, maxits) */
  /*  */
  /*  Description */
  /*  */
  /*   errCode = petscKSPSetTolerances(ksp, rtol) sets the relative tolerance */
  /*        and let PETSc decides the rest. */
  /*  */
  /*   errCode = petscKSPSetTolerances(ksp, rtol, abstol, dtol, maxits) sets  */
  /*        the relative, absolute, divergence tolerances and the max-iteration count. */
  /*  */
  /*   uses the matrix Pmat to construct the preconditioner. */
  /*  */
  /*   SEE ALSO: petscKSPGetTolerances */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetTolerances(KSP ksp,PetscReal rtol,PetscReal abstol,PetscReal dtol,PetscInt maxits) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetTolerances.html */
  /* 'petscKSPSetTolerances:28' errCode = int32(-1); */
  /* 'petscKSPSetTolerances:30' if ~isempty(coder.target) */
  /* 'petscKSPSetTolerances:31' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetTolerances:33' if nargin==2 */
  /* 'petscKSPSetTolerances:39' errCode = coder.ceval('KSPSetTolerances', t_ksp, rtol, abstol, dtol, maxits); */
  errCode = KSPSetTolerances(ksp, b_rtol, (double)val, (double)b_val, maxits);

  /* 'petscKSPSetTolerances:41' toplevel = nargout>1; */
  /* 'petscKSPSetTolerances:42' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSetTolerances:43' m2c_error('petsc:RuntimeError', 'KSPSetTolerances returned error code %d\n', errCode) */
      s_m2c_error(errCode);
    }
  }

  /*  Process initial guess */
  /* 'mptKSPSolve:69' nonzeroGuess = int32(nargin>=6 && ~petscIsNULL(x0)); */
  /*  Determine whether a given object is a null opointer of a particular type. */
  /*  */
  /*     isn = petscIsNULL(obj) */
  /* 'petscIsNULL:6' if ischar(obj) */
  /* 'petscIsNULL:8' elseif ~isstruct(obj) */
  /* 'petscIsNULL:9' isn = int32(0); */
  /* 'petscIsNULL:10' isn = coder.ceval('!', obj); */
  val = !(obj);
  b1 = !(val != 0);

  /* 'mptKSPSolve:70' if nonzeroGuess */
  if (b1) {
    /* 'mptKSPSolve:71' petscVecCopy(x0, x); */
    /* Creates a vector from x to y. */
    /*  */
    /*   errCode = petscVecCopy(x, y) copies the entries from x to y. Both */
    /*   x and y must be distributed in the same manner; local copies are done. */
    /*  */
    /*   SEE ALSO: petscVecDuplicate */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  VecCopy(Vec x, Vec y) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecCopy.html */
    /* 'petscVecCopy:15' errCode = int32(-1); */
    /* 'petscVecCopy:17' if ~isempty(coder.target) */
    /* 'petscVecCopy:18' errCode = coder.ceval('VecCopy', PetscVec(x), PetscVec(y)); */
    /* Map an opaque object into a PETSc Vec object */
    /*  */
    /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
    /*  */
    /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
    /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscMat */
    /* 'PetscVec:14' coder.inline('always'); */
    /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    /* Map an opaque object into a PETSc Vec object */
    /*  */
    /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
    /*  */
    /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
    /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscMat */
    /* 'PetscVec:14' coder.inline('always'); */
    /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = VecCopy(obj, t_vec_out);

    /* 'petscVecCopy:20' toplevel = nargout>2; */
    /* 'petscVecCopy:21' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      b_flag = (M2C_DEBUG);
      if (b_flag != 0) {
        /* 'petscVecCopy:22' m2c_error('petsc:RuntimeError', 'VecCopy returned error code %d\n', errCode) */
        t_m2c_error(errCode);
      }
    }
  }

  /* 'mptKSPSolve:75' if nargout>3 */
  /* 'mptKSPSolve:76' petscKSPSetResidualHistory(t_ksp, maxits, PETSC_TRUE); */
  /*  Obtain PETSC constant PETSC_TRUE */
  /* 'PETSC_TRUE:4' coder.inline('always'); */
  /* 'PETSC_TRUE:6' val = petscGetEnum('PETSC_TRUE'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:57' case 'PETSC_TRUE' */
  /* 'petscGetEnum:58' [val, toplevel] = get_val('PetscBool', 'PETSC_TRUE', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  val = (PETSC_TRUE);

  /*  Sets the array used to hold the residual history. If set, this array */
  /*  will contain the residual norms computed at each iteration of the solver. */
  /*  */
  /*   errCode = petscKSPSetResidualHistory(ksp) */
  /*   errCode = petscKSPSetResidualHistory(ksp, na) */
  /*   errCode = petscKSPSetResidualHistory(ksp, na, reset) sets the maximum */
  /*   size of the residual history. The argument reset indicates whether */
  /*   the history counter should be reset to zero for each new linear solve. */
  /*   The space for the residual history will be allocated by PETSc and can be */
  /*   retrieved by petscKSPGetResidualHistory. */
  /*  */
  /*   SEE ALSO: petscKSPGetResidualHistory */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetResidualHistory(KSP ksp,PetscReal a[],PetscInt na,PetscBool reset) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetResidualHistory.htm */
  /* 'petscKSPSetResidualHistory:23' errCode = int32(-1); */
  /* 'petscKSPSetResidualHistory:25' if ~isempty(coder.target) */
  /* 'petscKSPSetResidualHistory:26' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetResidualHistory:27' if nargin>=2 */
  /* 'petscKSPSetResidualHistory:27' na = int32(varargin{1}); */
  /* 'petscKSPSetResidualHistory:28' if nargin>=3 */
  /* 'petscKSPSetResidualHistory:28' reset = int32(varargin{2}); */
  /* 'petscKSPSetResidualHistory:30' a = coder.opaque('PetscReal *', 'NULL'); */
  /* 'petscKSPSetResidualHistory:31' errCode = coder.ceval('KSPSetResidualHistory', t_ksp, ... */
  /* 'petscKSPSetResidualHistory:32'         a, na, reset); */
  errCode = KSPSetResidualHistory(ksp, NULL, maxits, val);

  /* 'petscKSPSetResidualHistory:34' toplevel = nargout>1; */
  /* 'petscKSPSetResidualHistory:35' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSetResidualHistory:36' m2c_error('petsc:RuntimeError', ... */
      /* 'petscKSPSetResidualHistory:37'             'petscKSPSetResidualHistory returned error code %d\n', errCode) */
      u_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:79' petscKSPSetInitialGuessNonzero(t_ksp, nonzeroGuess); */
  /* Tells the iterative solver that the initial guess is nonzero; otherwise  */
  /* KSP assumes the initial guess is to be zero (and thus zeros it out before solving). */
  /*  */
  /*   errCode = petscKSPSetInitialGuessNonzero(ksp, flag) */
  /*   indicates the initial guess is non-zero if flag is PETSC_TRUE, and */
  /*   is zeo if flag is PETSC_FALSE (0). */
  /*  */
  /*   SEE ALSO: petscKSPGetInitialGuessNonzero */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetInitialGuessNonzero(KSP ksp,PetscBool flg) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetInitialGuessNonzero.html */
  /* 'petscKSPSetInitialGuessNonzero:17' errCode = int32(-1); */
  /* 'petscKSPSetInitialGuessNonzero:19' if ~isempty(coder.target) */
  /* 'petscKSPSetInitialGuessNonzero:20' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetInitialGuessNonzero:22' errCode = coder.ceval('KSPSetInitialGuessNonzero', t_ksp, flag); */
  errCode = KSPSetInitialGuessNonzero(ksp, (int)b1);

  /* 'petscKSPSetInitialGuessNonzero:24' toplevel = nargout>1; */
  /* 'petscKSPSetInitialGuessNonzero:25' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSetInitialGuessNonzero:26' m2c_error('petsc:RuntimeError', 'KSPSetInitialGuessNonzero returned error code %d\n', errCode) */
      v_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:80' petscKSPSolve(t_ksp, b, x); */
  /* Solves linear system. */
  /*  */
  /*   errCode = petscKSPSolve(ksp, b) */
  /*  */
  /*   solves the linear system with b as the RHS and saves the solution into b. */
  /*      ksp - iterative context obtained from petscKSPCreate() */
  /*      b	  - the right hand side vector */
  /*  */
  /*   errCode = petscKSPSolve(ksp, b, x) */
  /*  */
  /*   solves the linear system and saves the solution into vector x. */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetOperators, petscKSPSetUp, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPSolve(KSP ksp,Vec b,Vec x) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSolve.html */
  /* 'petscKSPSolve:23' errCode = int32(-1); */
  /* 'petscKSPSolve:25' if ~isempty(coder.target) */
  /* 'petscKSPSolve:26' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSolve:27' t_b = PetscVec(b); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSolve:29' if nargin==2 */
  /* 'petscKSPSolve:31' else */
  /* 'petscKSPSolve:32' t_x = PetscVec(x); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSolve:35' errCode = coder.ceval('KSPSolve', t_ksp, t_b, t_x); */
  errCode = KSPSolve(ksp, bVec, t_vec_out);

  /* 'petscKSPSolve:37' toplevel = nargout>1; */
  /* 'petscKSPSolve:38' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSolve:39' m2c_error('petsc:RuntimeError', 'KSPSolve returned error code %d\n', errCode) */
      w_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:82' if nargout>4 */
  /*  When timing the run, use mpi_Barrier for more accurate results. */
  /* 'mptKSPSolve:84' mpi_Barrier(comm); */
  mpi_Barrier(t_comm);

  /* 'mptKSPSolve:85' time = mpi_Wtime()-t; */
  /* mpi_Wtime    Returns an elapsed time on the calling processor */
  /*  */
  /*   secs = mpi_Wtime */
  /*  */
  /*   secs (double) Time in seconds since an arbitrary time in the past */
  /*  */
  /*   SEE ALSO: mpi_Wtick */
  /*  */
  /*  C interface: */
  /*  double MPI_Wtime(void) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Wtime.html */
  /* 'mpi_Wtime:17' secs = 0; */
  /* 'mpi_Wtime:18' secs = coder.ceval('MPI_Wtime'); */
  secs = MPI_Wtime();

  /* 'mptKSPSolve:88' flag = petscKSPGetConvergedReason(t_ksp); */
  /* Gets the reason the KSP iteration was stopped. */
  /*  */
  /*   [flag, errCode] = petscKSPGetConvergedReason(ksp) */
  /*  */
  /*   SEE ALSO: KSPGetResidualNorm, petscKSPGetIterationNumber */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetConvergedReason(KSP ksp,KSPConvergedReason *reason) */
  /*  http://www.mcs.anl.gov/petsc/petsc-3.7/docs/manualpages/KSP/KSPGetConvergedReason.html */
  /* 'petscKSPGetConvergedReason:14' errCode = int32(-1); */
  /* 'petscKSPGetConvergedReason:16' if ~isempty(coder.target) */
  /* 'petscKSPGetConvergedReason:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetConvergedReason:19' flag = int32(0); */
  /* 'petscKSPGetConvergedReason:20' errCode = coder.ceval('KSPGetConvergedReason', t_ksp, coder.wref(flag)); */
  errCode = KSPGetConvergedReason(ksp, &b_flag);

  /* 'petscKSPGetConvergedReason:22' toplevel = nargout>2; */
  /* 'petscKSPGetConvergedReason:23' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPGetConvergedReason:24' m2c_error('petsc:RuntimeError', 'KSPGetConvergedReason returned error code %d\n', errCode) */
      x_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:89' res = petscKSPGetResidualNorm(t_ksp); */
  /* Gets the last (approximate preconditioned) residual norm that has been computed. */
  /*  */
  /*   [rnorm, errCode] = petscKSPGetResidualNorm(ksp) */
  /*  */
  /*   SEE ALSO: KSPGetResidualNorm, petscKSPGetIterationNumber */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetResidualNorm(KSP ksp,PetscInt *rnorm) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetResidualNorm.html */
  /* 'petscKSPGetResidualNorm:14' errCode = int32(-1); */
  /* 'petscKSPGetResidualNorm:16' if ~isempty(coder.target) */
  /* 'petscKSPGetResidualNorm:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetResidualNorm:19' rnorm = 0; */
  /* 'petscKSPGetResidualNorm:20' errCode = coder.ceval('KSPGetResidualNorm', t_ksp, coder.wref(rnorm)); */
  errCode = KSPGetResidualNorm(ksp, &res);

  /* 'petscKSPGetResidualNorm:22' toplevel = nargout>2; */
  /* 'petscKSPGetResidualNorm:23' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPGetResidualNorm:24' m2c_error('petsc:RuntimeError', 'KSPGetResidualNorm returned error code %d\n', errCode) */
      y_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:90' iter = petscKSPGetIterationNumber(t_ksp); */
  /* Gets the current iteration number. */
  /*  */
  /*   [its, errCode] = petscKSPGetIterationNumber(ksp) */
  /*  */
  /*   gets the current iteration number; if the KSPSolve() is complete,  */
  /*   returns the number of iterations used.  */
  /*  */
  /*   SEE ALSO: petscKSPGetConvergedReason, KSPGetResidualNorm, petscKSPGetTotalIterations */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetIterationNumber(KSP ksp,PetscInt *its) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetIterationNumber.html */
  /* 'petscKSPGetIterationNumber:17' errCode = int32(-1); */
  /* 'petscKSPGetIterationNumber:19' if ~isempty(coder.target) */
  /* 'petscKSPGetIterationNumber:20' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetIterationNumber:22' its = int32(0); */
  /* 'petscKSPGetIterationNumber:23' errCode = coder.ceval('KSPGetIterationNumber', t_ksp, coder.wref(its)); */
  errCode = KSPGetIterationNumber(ksp, &b_iter);

  /* 'petscKSPGetIterationNumber:25' toplevel = nargout>2; */
  /* 'petscKSPGetIterationNumber:26' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPGetIterationNumber:27' m2c_error('petsc:RuntimeError', 'KSPGetIterationNumber returned error code %d\n', errCode) */
      ab_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:91' relres = res/bnrm; */
  b_relres = res / bnrm;

  /* 'mptKSPSolve:93' [rtol, abstol, dtol, maxits] = petscKSPGetTolerances(t_ksp); */
  /* Gets the relative, absolute, divergence, and maximum iteration tolerances */
  /* used by the default KSP convergence tests. */
  /*  */
  /*  Syntax: */
  /*  */
  /*   [rtol, arg2, dtol, maxits, errCode, toplevel] = petscKSPGetTolerances(ksp) */
  /*   obtains the relative, absolute, divergence tolerances and the max-iteration count. */
  /*  */
  /*   SEE ALSO: petscKSPSetTolerances */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetTolerances(KSP ksp,PetscReal *rtol,PetscReal *abstol,PetscReal *dtol,PetscInt *maxits) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetTolerances.html */
  /* 'petscKSPGetTolerances:18' errCode = int32(-1); */
  /* 'petscKSPGetTolerances:20' if ~isempty(coder.target) */
  /* 'petscKSPGetTolerances:21' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetTolerances:23' rtol = double(0); */
  /* 'petscKSPGetTolerances:24' abstol = double(0); */
  /* 'petscKSPGetTolerances:25' dtol = double(0); */
  /* 'petscKSPGetTolerances:26' maxits = int32(0); */
  /* 'petscKSPGetTolerances:28' errCode = coder.ceval('KSPGetTolerances', t_ksp, coder.wref(rtol), ... */
  /* 'petscKSPGetTolerances:29'         coder.wref(abstol), coder.wref(dtol), coder.wref(maxits)); */
  errCode = KSPGetTolerances(ksp, &b_rtol, &abstol, &dtol, &maxits);

  /* 'petscKSPGetTolerances:31' toplevel = nargout>5; */
  /* 'petscKSPGetTolerances:32' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPGetTolerances:33' m2c_error('petsc:RuntimeError', 'KSPGetTolerances returned error code %d\n', errCode) */
      bb_m2c_error(errCode);
    }
  }

  /* 'mptKSPSolve:95' if flag < 0 || relres>rtol */
  emxInit_char_T(&side, 2);
  if ((b_flag < 0) || (b_relres > b_rtol)) {
    /* 'mptKSPSolve:96' pc = petscKSPGetPC(t_ksp); */
    /* Returns a pointer to the preconditioner context set with petscKSPSetPC. */
    /*  */
    /*   [pc, errCode] = petscKSPGetPC(ksp) gets the PC of the KSP */
    /*  */
    /*   SEE ALSO:  petscKSPSetPC */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPGetPC(KSP ksp,PC *pc) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetPC.html */
    /* 'petscKSPGetPC:14' errCode = int32(-1); */
    /* 'petscKSPGetPC:16' if ~isempty(coder.target) */
    /* 'petscKSPGetPC:17' t_pc = coder.opaque('PC'); */
    /* 'petscKSPGetPC:18' errCode = coder.ceval('KSPGetPC', PetscKSP(ksp), coder.wref(t_pc)); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPGetPC(ksp, &t_pc);

    /* 'petscKSPGetPC:20' toplevel = nargout>2; */
    /* 'petscKSPGetPC:21' pc = PetscPC(t_pc, toplevel); */
    /* Map an opaque object into a PETSc PC object */
    /*  */
    /*   PetscPC() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscPC(obj) or PetscPC(obj, false) converts arg into a PETSc PC object. */
    /*  */
    /*   PetscPC(arg, 'wrap') or PetscPC(obj, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscPC:14' coder.inline('always'); */
    /* 'PetscPC:16' pc = m2c_opaque_obj('PC', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    /* 'petscKSPGetPC:23' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      val = (M2C_DEBUG);
      if (val != 0) {
        /* 'petscKSPGetPC:24' m2c_error('petsc:RuntimeError', 'KSPGetPC returned error code %d\n', errCode) */
        cb_m2c_error(errCode);
      }
    }

    /* 'mptKSPSolve:97' switch petscKSPGetPCSide(t_ksp) */
    /* Gets the preconditioning side. */
    /*  */
    /*   [side, errCode] = petscKSPGetPCSide(ksp) returns the side of the KSP. */
    /*  */
    /*   SEE ALSO:  petscKSPSetPCSide */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPGetPCSide(KSP ksp,PCSide *side) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetPCSide.html */
    /* 'petscKSPGetPCSide:14' errCode = int32(-1); */
    /* 'petscKSPGetPCSide:16' if ~isempty(coder.target) */
    /* 'petscKSPGetPCSide:17' side = int32(0); */
    /* 'petscKSPGetPCSide:18' errCode = coder.ceval('KSPGetPCSide', PetscKSP(ksp), coder.wref(side)); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPGetPCSide(ksp, &b_side);

    /* 'petscKSPGetPCSide:20' toplevel = nargout>2; */
    /* 'petscKSPGetPCSide:21' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      val = (M2C_DEBUG);
      if (val != 0) {
        /* 'petscKSPGetPCSide:22' m2c_error('petsc:RuntimeError', 'KSPGetPCSide returned error code %d\n', errCode) */
        db_m2c_error(errCode);
      }
    }

    /*  Obtain PETSC constant PC_LEFT */
    /* 'PETSC_PC_LEFT:4' coder.inline('always'); */
    /* 'PETSC_PC_LEFT:6' val = petscGetEnum('PC_LEFT'); */
    /* petscGetEnum Obtain an enumerate value in PETSC */
    /*  */
    /*     val = petscGetEnum(name) */
    /*  */
    /* The supported names include: */
    /*  */
    /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
    /*  */
    /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
    /*       VEC_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
    /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
    /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
    /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
    /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
    /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
    /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
    /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
    /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
    /*       MAT_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
    /*  */
    /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
    /*  */
    /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
    /*  */
    /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
    /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
    /*  */
    /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
    /*  */
    /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
    /*  */
    /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
    /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
    /*  */
    /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
    /*  */
    /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
    /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
    /*  */
    /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
    /*  */
    /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
    /* 'petscGetEnum:51' if isempty(coder.target) */
    /* % InsertMode */
    /* 'petscGetEnum:56' switch name */
    /* 'petscGetEnum:179' case 'PC_LEFT' */
    /* 'petscGetEnum:180' [val, toplevel] = get_val('PetscInt', 'PC_LEFT', nargin>1); */
    /* 'petscGetEnum:201' coder.inline('always'); */
    /* 'petscGetEnum:203' val = int32(intmin); */
    /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
    val = (PC_LEFT);

    /*  Obtain PETSC constant PC_RIGHT */
    /* 'PETSC_PC_RIGHT:4' coder.inline('always'); */
    /* 'PETSC_PC_RIGHT:6' val = petscGetEnum('PC_RIGHT'); */
    /* petscGetEnum Obtain an enumerate value in PETSC */
    /*  */
    /*     val = petscGetEnum(name) */
    /*  */
    /* The supported names include: */
    /*  */
    /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
    /*  */
    /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
    /*       VEC_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
    /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
    /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
    /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
    /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
    /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
    /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
    /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
    /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
    /*       MAT_SUBSET_OFF_PROC_ENTRIES */
    /*  */
    /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
    /*  */
    /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
    /*  */
    /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
    /*  */
    /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
    /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
    /*  */
    /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
    /*  */
    /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
    /*  */
    /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
    /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
    /*  */
    /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
    /*  */
    /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
    /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
    /*  */
    /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
    /*  */
    /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
    /* 'petscGetEnum:51' if isempty(coder.target) */
    /* % InsertMode */
    /* 'petscGetEnum:56' switch name */
    /* 'petscGetEnum:181' case 'PC_RIGHT' */
    /* 'petscGetEnum:182' [val, toplevel] = get_val('PetscInt', 'PC_RIGHT', nargin>1); */
    /* 'petscGetEnum:201' coder.inline('always'); */
    /* 'petscGetEnum:203' val = int32(intmin); */
    /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
    b_val = (PC_RIGHT);
    if (val == b_side) {
      val = 0;
    } else if (b_val == b_side) {
      val = 1;
    } else {
      val = -1;
    }

    switch (val) {
     case 0:
      /* 'mptKSPSolve:98' case PETSC_PC_LEFT */
      /* 'mptKSPSolve:99' side = 'left'; */
      val = side->size[0] * side->size[1];
      side->size[0] = 1;
      side->size[1] = 4;
      emxEnsureCapacity((emxArray__common *)side, val, (int)sizeof(char));
      for (val = 0; val < 4; val++) {
        side->data[val] = cv4[val];
      }
      break;

     case 1:
      /* 'mptKSPSolve:100' case PETSC_PC_RIGHT */
      /* 'mptKSPSolve:101' side = 'right'; */
      val = side->size[0] * side->size[1];
      side->size[0] = 1;
      side->size[1] = 5;
      emxEnsureCapacity((emxArray__common *)side, val, (int)sizeof(char));
      for (val = 0; val < 5; val++) {
        side->data[val] = cv5[val];
      }
      break;

     default:
      /* 'mptKSPSolve:102' otherwise */
      /* 'mptKSPSolve:103' side = 'symmetric'; */
      val = side->size[0] * side->size[1];
      side->size[0] = 1;
      side->size[1] = 9;
      emxEnsureCapacity((emxArray__common *)side, val, (int)sizeof(char));
      for (val = 0; val < 9; val++) {
        side->data[val] = cv3[val];
      }
      break;
    }

    /* 'mptKSPSolve:106' m2c_printf('### %s with %s as %s preconditioner stopped with flag %d.\n', ... */
    /* 'mptKSPSolve:107'         petscKSPGetType(t_ksp), petscPCGetType(pc), side, flag); */
    /* Gets the KSP type as a KSPType object from the KSP object. */
    /*  */
    /*   [type, errCode] = petscKSPGetType(ksp) gets the type of the KSP */
    /*  */
    /*   SEE ALSO:  petscKSPSetType */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPGetType(KSP ksp, KSPType *type) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetType.html */
    /* 'petscKSPGetType:14' errCode = int32(-1); */
    /* 'petscKSPGetType:16' if ~isempty(coder.target) */
    /* 'petscKSPGetType:17' t_type = coder.opaque('KSPType'); */
    /* 'petscKSPGetType:18' errCode = coder.ceval('KSPGetType', PetscKSP(ksp), coder.wref(t_type)); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPGetType(ksp, &t_type);

    /* 'petscKSPGetType:20' toplevel = nargout>2; */
    /* 'petscKSPGetType:21' type = PetscKSPType(t_type, toplevel); */
    /* Map a null-terminated C string into a PETSc KSPType handle */
    /*  */
    /*   PetscKSPType() simply returns a definition of a string, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscKSPType(arg) or PetscKSPType(arg, false) converts arg into */
    /*   a PETSc KSPType object. */
    /*  */
    /*   PetscKSPType(arg, 'wrap') or PetscKSPType(arg, true) copies the  */
    /*   arg into a MATLAB string. This should be used if the object */
    /*   needs to be returned to MATLAB. Note that the value of the */
    /*   second argument must be determined at compile time. */
    /*  */
    /*  See also PetscPCType, PETSC_KSP* */
    /* 'PetscKSPType:17' coder.inline('always'); */
    /* 'PetscKSPType:19' if nargin==0 && isempty(coder.target) */
    /* 'PetscKSPType:24' if isempty(coder.target) && ~ischar(arg) */
    /* 'PetscKSPType:29' if nargin==1 || ~ischar(wrap) && ~wrap */
    /* 'PetscKSPType:30' type = arg; */
    /* 'petscKSPGetType:23' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      val = (M2C_DEBUG);
      if (val != 0) {
        /* 'petscKSPGetType:24' m2c_error('petsc:RuntimeError', 'KSPGetType returned error code %d\n', errCode) */
        eb_m2c_error(errCode);
      }
    }

    /* Gets the PC type as a PCType object from the PC object. */
    /*  */
    /*   [type, errCode] = petscPCGetType(pc) gets the type of the PC */
    /*  */
    /*   SEE ALSO:  petscPCSetType */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  PCGetType(PC pc, PCType *type) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/PC/PCGetType.html */
    /* 'petscPCGetType:14' errCode = int32(-1); */
    /* 'petscPCGetType:16' if ~isempty(coder.target) */
    /* 'petscPCGetType:17' t_type = coder.opaque('PCType'); */
    /* 'petscPCGetType:18' errCode = coder.ceval('PCGetType', PetscPC(pc), coder.wref(t_type)); */
    /* Map an opaque object into a PETSc PC object */
    /*  */
    /*   PetscPC() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscPC(obj) or PetscPC(obj, false) converts arg into a PETSc PC object. */
    /*  */
    /*   PetscPC(arg, 'wrap') or PetscPC(obj, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscPC:14' coder.inline('always'); */
    /* 'PetscPC:16' pc = m2c_opaque_obj('PC', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = PCGetType(t_pc, &b_t_type);

    /* 'petscPCGetType:20' toplevel = nargout>2; */
    /* 'petscPCGetType:21' type = PetscPCType(t_type, toplevel); */
    /* Map a null-terminated C string into a PETSc PCType handle */
    /*  */
    /*   PetscPCType() simply returns a definition of a string, */
    /*   suitable in the argument specification for codegen. */
    /*  */
    /*   PetscPCType(arg) or PetscPCType(arg, false) converts arg into a */
    /*   PETSc PCType object. */
    /*  */
    /*   PetscPCType(arg, 'wrap') or PetscPCType(arg, true) copies the */
    /*   arg into a MATLAB string. This should be used if the object */
    /*   needs to be returned to MATLAB. Note that the value of the */
    /*   second argument must be determined at compile time. */
    /*  */
    /*  See also PetscKSPType, PETSC_PC* */
    /* 'PetscPCType:17' coder.inline('always'); */
    /* 'PetscPCType:19' if nargin==0 && isempty(coder.target) */
    /* 'PetscPCType:24' if isempty(coder.target) && ~ischar(arg) */
    /* 'PetscPCType:29' if nargin==1 || ~ischar(wrap) && ~wrap */
    /* 'PetscPCType:30' type = arg; */
    /* 'petscPCGetType:23' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      val = (M2C_DEBUG);
      if (val != 0) {
        /* 'petscPCGetType:24' m2c_error('petsc:RuntimeError', 'PCGetType returned error code %d\n', errCode) */
        fb_m2c_error(errCode);
      }
    }

    m2c_printf(t_type, b_t_type, side, b_flag);

    /* 'mptKSPSolve:108' m2c_printf('### The relative residual was %g after %d iterations.\n', relres, iter); */
    b_m2c_printf(b_relres, b_iter);

    /* 'mptKSPSolve:109' m2c_printf('### The relative and absolute tolerances were %g and %g.\n', rtol, abstol); */
    c_m2c_printf(b_rtol, abstol);

    /* 'mptKSPSolve:110' m2c_printf('### The divergence and max-iter tolerances were %d and %g.\n', maxits, dtol); */
    d_m2c_printf(maxits, dtol);

    /* 'mptKSPSolve:111' m2c_printf(['### For explanation of the flag, see http://www.mcs.anl.gov/petsc/' ... */
    /* 'mptKSPSolve:112'         'petsc-current/docs/manualpages/KSP/KSPConvergedReason.html.\n']); */
    e_m2c_printf();
  }

  emxFree_char_T(&side);

  /* 'mptKSPSolve:115' if nargout>3 */
  /*  Obtain convergence history */
  /* 'mptKSPSolve:117' reshis = petscKSPGetResidualHistory(t_ksp); */
  /* Gets the array used to hold the residual history and the number of */
  /* residuals it contains. */
  /*  */
  /*   [rehis, errCode] = KSPGetResidualHistory(ksp) returns a real array */
  /*   containing the residual history. */
  /*  */
  /*   SEE ALSO: petscKSPSetResidualHistory */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPGetResidualHistory(KSP ksp,PetscReal *a[], PetscInt *na) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetResidualHistory.html */
  /* 'petscKSPGetResidualHistory:16' errCode = int32(-1); */
  /* 'petscKSPGetResidualHistory:18' if ~isempty(coder.target) */
  /* 'petscKSPGetResidualHistory:19' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPGetResidualHistory:21' a = coder.opaque('PetscReal *', 'NULL'); */
  /* 'petscKSPGetResidualHistory:22' na = int32(0); */
  /* 'petscKSPGetResidualHistory:23' errCode = coder.ceval('KSPGetResidualHistory', t_ksp, ... */
  /* 'petscKSPGetResidualHistory:24'         coder.wref(a), coder.wref(na)); */
  errCode = KSPGetResidualHistory(ksp, &a, &na);

  /* 'petscKSPGetResidualHistory:26' reshis = zeros(na, 1); */
  val = reshis->size[0];
  reshis->size[0] = na;
  emxEnsureCapacity((emxArray__common *)reshis, val, (int)sizeof(double));
  for (val = 0; val < na; val++) {
    reshis->data[val] = 0.0;
  }

  /* 'petscKSPGetResidualHistory:27' coder.ceval('memcpy', coder.ref(reshis), a, int32(na*8)); */
  memcpy(&reshis->data[0], a, na << 3);

  /* 'petscKSPGetResidualHistory:29' toplevel = nargout>2; */
  /* 'petscKSPGetResidualHistory:30' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPGetResidualHistory:31' m2c_error('petsc:RuntimeError', 'KSPGetResidualHistory returned error code %d\n', errCode) */
      gb_m2c_error(errCode);
    }
  }

  /* 'mptSolve:83' if nargout>4 */
  /* 'mptSolve:84' times = [time_setup; time_solve]; */
  /* 'mptSolve:87' mptKSPCleanup(ksp); */
  /*  Cleans up the KSP. */
  /*  */
  /*    ksp = mptKSPCleanup(ksp) destropys the given KSP object. */
  /*    It should be called whtn the KSP object is no longer needed, and  */
  /*    no calls should be made to this KSP after this. */
  /*  */
  /*  See Also: mptKSPSetup, mptKSPSolve */
  /*  Destroy the KSP and solution vector */
  /* 'mptKSPCleanup:13' t_ksp = petscKSPDestroy(ksp); */
  /* Destroys KSP context. */
  /*  */
  /*   [ksp, errCode] = petscKSPDestroy(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetUp, petscKSPSolve */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPDestroy(KSP *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPDestroy.html */
  /* 'petscKSPDestroy:14' errCode = int32(-1); */
  /* 'petscKSPDestroy:16' if ~isempty(coder.target) */
  /* 'petscKSPDestroy:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_ksp = ksp;

  /* 'petscKSPDestroy:19' errCode = coder.ceval('KSPDestroy', coder.ref(t_ksp)); */
  errCode = KSPDestroy(&t_ksp);

  /* 'petscKSPDestroy:21' toplevel = nargout>2; */
  /* 'petscKSPDestroy:22' ksp_out = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscKSPDestroy:25' m2c_error('petsc:RuntimeError', 'KSPDestroy returned error code %d\n', errCode) */
      hb_m2c_error(errCode);
    }
  }

  /* 'mptKSPCleanup:15' toplevel = nargout>1; */
  /* 'mptKSPCleanup:16' ksp = PetscKSP(t_ksp, toplevel); */
  /* 'mptSolveCRS:133' petscMatDestroy(AMat); */
  /* Frees space taken by a matrix. */
  /*  */
  /*   [mat, errCode] = petscMatDestroy(mat) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleMat, petscVecDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode MatDestroy(Mat *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Mat/MatDestroy.html */
  /* 'petscMatDestroy:14' errCode = int32(-1); */
  /* 'petscMatDestroy:16' if ~isempty(coder.target) */
  /* 'petscMatDestroy:17' t_mat = PetscMat(mat); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_mat = AMat;

  /* 'petscMatDestroy:19' errCode = coder.ceval('MatDestroy', coder.ref(t_mat)); */
  errCode = MatDestroy(&t_mat);

  /* 'petscMatDestroy:21' toplevel = nargout>2; */
  /* 'petscMatDestroy:22' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscMatDestroy:23' m2c_error('petsc:RuntimeError', 'MatDestroy returned error code %d\n', errCode) */
      ib_m2c_error(errCode);
    }
  }

  /* 'petscMatDestroy:26' mat = PetscMat(t_mat, toplevel); */
  /* 'mptSolveCRS:134' petscVecDestroy(bVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = bVec;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  /* 'mptSolveCRS:136' x = mptVecToArray(xVec); */
  mptVecToArray(t_vec_out, x);

  /* 'mptSolveCRS:137' petscVecDestroy(xVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = t_vec_out;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    val = (M2C_DEBUG);
    if (val != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  *flag = b_flag;
  *relres = b_relres;
  *iter = b_iter;
  times[0] = time_setup;
  times[1] = secs - t;
}

/*
 * function [x,flag,relres,iter,reshis,times] = mptSolveCRS_7args(Arows, Acols, Avals, b, solver, rtol, maxiter)
 */
void mptSolveCRS_7args(const emxArray_int32_T *Arows, const emxArray_int32_T
  *Acols, const emxArray_real_T *Avals, const emxArray_real_T *b, const
  emxArray_char_T *solver, double rtol, int maxiter, emxArray_real_T *x, int
  *flag, double *relres, int *iter, emxArray_real_T *reshis, double times[2])
{
  Mat AMat;
  Vec bVec;
  Vec t_vec_out;
  int errCode;
  int b_flag;
  KSP ksp;
  double time_setup;
  int c_flag;
  double b_relres;
  int b_iter;
  double time_solve;
  KSP t_ksp;
  Mat t_mat;
  Vec t_vec;

  /* 'mptSolveCRS_7args:2' [x,flag,relres,iter,reshis,times] = mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxiter); */
  /*  Solves a linear system using any PETSc solver for matrix in CRS format. */
  /*  */
  /*  Syntax: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0, opts) */
  /*  */
  /*     [x, flag, relres, iter, reshis, times] = mptSolveCRS(Arows, Acols, Avals, b, ...) */
  /*     returns the solution vector x, the flag (KSPConvergedReason), relative */
  /*     residual, number of iterations, history of residual used in convergence */
  /*     test (typically preconditioned residual), and the execution times in */
  /*     setup and solve. */
  /*  */
  /*     A is a sparse matrix in CRS format. b, x and resvec are all regular */
  /*     vectors. Solver is a value of PETSC_KSP*. pctype is a value of */
  /*     PETSC_PC*, and pcopt is a value of PETSC_MATSOLVER*. */
  /*  */
  /*     For rtol, maxit, use 0 to use default values. */
  /*     For solver, pctype, pcopt and opts, use empty string ('') to use default. */
  /*     For x0, use zeros(0, 1) to disable initial guess. */
  /*  */
  /*     When times is given, it returns a 2-vector contaning the times spent */
  /*     in setup and in solve separately. */
  /*  */
  /*  Description: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) solves the linear system without */
  /*     preconditioners, using the default tolerances or those that have been */
  /*     set previously in the option databases. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) specifies to use a */
  /*     specific solver, such as PETSC_KSPGMRES, PETSC_KSPBCGS, etc. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) uses the given number */
  /*         of solvers and the relative tolerarance. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) solves with */
  /*         the given relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     uses the specified preconditioner (those give by PETSC_PC*). */
  /*     The preconditioner can be controlled by the PETSc option database. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt) specifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0) usee x0 for the initial guess. x0 can be the same as x. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0, opts) can pass additional command-line options in a */
  /*     string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolve, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptVecToArray, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* 'mptSolveCRS:88' if nargin==0 */
  /* 'mptSolveCRS:94' if isempty(coder.target) && ~exist(['mptSolveCRS.' mexext], 'file') && ... */
  /* 'mptSolveCRS:95'         exist('run_mptSolveCRS_exe', 'file') */
  /* 'mptSolveCRS:104' Arows = varargin{1}; */
  /* 'mptSolveCRS:105' Acols = varargin{2}; */
  /* 'mptSolveCRS:106' Avals = varargin{3}; */
  /* 'mptSolveCRS:107' b = varargin{4}; */
  /*  Setup KSP */
  /* 'mptSolveCRS:110' if nargin<5 */
  /* 'mptSolveCRS:110' else */
  /* 'mptSolveCRS:110' solver = varargin{5}; */
  /*  Use default */
  /* 'mptSolveCRS:111' if nargin<6 */
  /* 'mptSolveCRS:111' else */
  /* 'mptSolveCRS:111' rtol = varargin{6}; */
  /* 'mptSolveCRS:112' if nargin<7 */
  /* 'mptSolveCRS:112' else */
  /* 'mptSolveCRS:112' maxit = varargin{7}; */
  /* 'mptSolveCRS:113' if nargin<8 */
  /* 'mptSolveCRS:113' pctype = ''; */
  /* 'mptSolveCRS:114' if nargin<9 */
  /* 'mptSolveCRS:114' pcopt = ''; */
  /* 'mptSolveCRS:116' AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals); */
  AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals);

  /* 'mptSolveCRS:117' bVec = mptVecCreateFromArray(b); */
  bVec = mptVecCreateFromArray(b);

  /* 'mptSolveCRS:119' if nargin<10 || isempty(varargin{10}) */
  /* 'mptSolveCRS:120' x0Vec = PETSC_NULL_VEC; */
  /*  Obtain PETSC constant NULL of type Vec */
  /* 'PETSC_NULL_VEC:4' coder.inline('always'); */
  /* 'PETSC_NULL_VEC:6' obj = petscGetObject('PETSC_NULL_VEC'); */
  /* petscGetObject Obtain an opaque object in PETSC */
  /*  */
  /*     obj = petscGetObject(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  MPI_Comm: PETSC_COMM_SELF, PETSC_COMM_WORLD, MPI_COMM_SELF, MPI_COMM_WORLD */
  /*  */
  /*  Other: */
  /*      PETSC_IGNORE, PETSC_NULL_OPTION, PETSC_NULL_MAT, PETSC_NULL_VEC, */
  /*      PETSC_NULL_INT, PETSC_NULL_REAL */
  /* 'petscGetObject:16' if isempty(coder.target) */
  /* 'petscGetObject:20' switch name */
  /* 'petscGetObject:35' case 'PETSC_NULL_VEC' */
  /* 'petscGetObject:36' [obj, toplevel] = get_obj('Vec', 'NULL', nargout>1); */
  /* 'mptSolveCRS:121' xVec = petscVecDuplicate(bVec); */
  /* Creates a new vector of the same type as an existing vector. */
  /*  */
  /*   [vec_out, errCode] = petscVecDuplicate(vec_in) creates a new vector, but */
  /*      it does not copy the entries of the input vector. The user is */
  /*      responsible freeing the memory by calling petscVecDestroy. */
  /*  */
  /*   SEE ALSO: petscVecCopy, petscVecDestroy, petscVecCreate */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  VecDuplicate(Vec vec_in, Vec *vec_out) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDuplicate.html */
  /* 'petscVecDuplicate:16' errCode = int32(-1); */
  /* 'petscVecDuplicate:18' if ~isempty(coder.target) */
  /* 'petscVecDuplicate:19' t_vec_out = coder.opaque('Vec'); */
  /* 'petscVecDuplicate:21' errCode = coder.ceval('VecDuplicate', PetscVec(vec_in), coder.wref(t_vec_out)); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  errCode = VecDuplicate(bVec, &t_vec_out);

  /* 'petscVecDuplicate:23' toplevel = nargout>2; */
  /* 'petscVecDuplicate:24' vec_out = PetscVec(t_vec_out, toplevel); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscVecDuplicate:26' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDuplicate:27' m2c_error('petsc:RuntimeError', 'VecDuplicate returned error code %d\n', errCode) */
      i_m2c_error(errCode);
    }
  }

  /* 'mptSolveCRS:128' if nargin<11 */
  /* 'mptSolveCRS:128' opts = ''; */
  /* 'mptSolveCRS:130' [flag, relres, iter, reshis, times] = mptSolve(AMat, bVec, xVec, solver, ... */
  /* 'mptSolveCRS:131'     double(rtol), int32(maxit), pctype, pcopt, x0Vec, opts); */
  /*  Solves a linear system using a given solver in PETSc. */
  /*  */
  /*  Syntax: */
  /*     mptSolve(A_hdl, b_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, x0_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, x0_hdl, opts) */
  /*  */
  /*     [flag, relres, iter, reshis, times] = mptSolve(A_hdl, b_hdl, x_hdl, ...) */
  /*     returns the flag (KSPConvergedReason), relative residual, number of  */
  /*     iterations, history of residual used in convergence test (typically  */
  /*     preconditioned residual), and the execution times spent in its core steps. */
  /*  */
  /*     The handles are PetscMat or PetscVec objects. */
  /*  */
  /*  Description: */
  /*     mptSolve(A_hdl, b_hdl) solves the linear system without preconditioners, */
  /*     using the default tolerances or those that have been set previously in */
  /*     the option databases. A_hdl is a PetscMat object, and b_hdl is a */
  /*     PetscVec object. The solution is stored into b. The QMRCGS can be */
  /*     controlled using the options database for KSPQMRCGS. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl) solves the linear system and saves the */
  /*     result into x. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver) uses the specified solver, where */
  /*     solver is one of PETSC_KSP*. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol) uses the given relative tolerarance. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit) solves with the given */
  /*      relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype) uses the */
  /*     specified preconditioner (PETSC_PC*). The preconditioner can be */
  /*     controlled by the PETSc option database. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt) */
  /*     aspecifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, */
  /*     x0_handle) usee x0 for the initial guess. x0 can be the same as x or */
  /*     be PETSC_NULL_VEC. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, */
  /*     x0_handle, opts) can pass command-line options in a string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolveCRS, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptOptionsInsert, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* This function is codegen compatbile, but no need to a top-level function */
  /*  Setup KSP */
  /* 'mptSolve:66' if nargin<3 */
  /* 'mptSolve:67' if nargin<4 */
  /* 'mptSolve:68' if nargin<5 */
  /* 'mptSolve:69' if nargin<6 */
  /* 'mptSolve:70' if nargin<7 */
  /* 'mptSolve:71' if nargin<8 */
  /* 'mptSolve:72' if nargin<9 */
  /* 'mptSolve:74' if nargin==10 && ~isempty(opts) */
  /* 'mptSolve:78' [ksp, time_setup] = mptKSPSetup(A, solver, pctype, pcopt); */
  mptKSPSetup(AMat, solver, &ksp, &time_setup);

  /* 'mptSolve:80' [flag, relres, iter, reshis, time_solve] = mptKSPSolve(ksp, b, x, ... */
  /* 'mptSolve:81'     double(rtol), int32(maxit), x0); */
  b_mptKSPSolve(ksp, bVec, t_vec_out, rtol, maxiter, NULL, &c_flag, &b_relres,
                &b_iter, reshis, &time_solve);

  /* 'mptSolve:83' if nargout>4 */
  /* 'mptSolve:84' times = [time_setup; time_solve]; */
  /* 'mptSolve:87' mptKSPCleanup(ksp); */
  /*  Cleans up the KSP. */
  /*  */
  /*    ksp = mptKSPCleanup(ksp) destropys the given KSP object. */
  /*    It should be called whtn the KSP object is no longer needed, and  */
  /*    no calls should be made to this KSP after this. */
  /*  */
  /*  See Also: mptKSPSetup, mptKSPSolve */
  /*  Destroy the KSP and solution vector */
  /* 'mptKSPCleanup:13' t_ksp = petscKSPDestroy(ksp); */
  /* Destroys KSP context. */
  /*  */
  /*   [ksp, errCode] = petscKSPDestroy(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetUp, petscKSPSolve */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPDestroy(KSP *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPDestroy.html */
  /* 'petscKSPDestroy:14' errCode = int32(-1); */
  /* 'petscKSPDestroy:16' if ~isempty(coder.target) */
  /* 'petscKSPDestroy:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_ksp = ksp;

  /* 'petscKSPDestroy:19' errCode = coder.ceval('KSPDestroy', coder.ref(t_ksp)); */
  errCode = KSPDestroy(&t_ksp);

  /* 'petscKSPDestroy:21' toplevel = nargout>2; */
  /* 'petscKSPDestroy:22' ksp_out = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPDestroy:25' m2c_error('petsc:RuntimeError', 'KSPDestroy returned error code %d\n', errCode) */
      hb_m2c_error(errCode);
    }
  }

  /* 'mptKSPCleanup:15' toplevel = nargout>1; */
  /* 'mptKSPCleanup:16' ksp = PetscKSP(t_ksp, toplevel); */
  /* 'mptSolveCRS:133' petscMatDestroy(AMat); */
  /* Frees space taken by a matrix. */
  /*  */
  /*   [mat, errCode] = petscMatDestroy(mat) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleMat, petscVecDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode MatDestroy(Mat *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Mat/MatDestroy.html */
  /* 'petscMatDestroy:14' errCode = int32(-1); */
  /* 'petscMatDestroy:16' if ~isempty(coder.target) */
  /* 'petscMatDestroy:17' t_mat = PetscMat(mat); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_mat = AMat;

  /* 'petscMatDestroy:19' errCode = coder.ceval('MatDestroy', coder.ref(t_mat)); */
  errCode = MatDestroy(&t_mat);

  /* 'petscMatDestroy:21' toplevel = nargout>2; */
  /* 'petscMatDestroy:22' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscMatDestroy:23' m2c_error('petsc:RuntimeError', 'MatDestroy returned error code %d\n', errCode) */
      ib_m2c_error(errCode);
    }
  }

  /* 'petscMatDestroy:26' mat = PetscMat(t_mat, toplevel); */
  /* 'mptSolveCRS:134' petscVecDestroy(bVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = bVec;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  /* 'mptSolveCRS:136' x = mptVecToArray(xVec); */
  mptVecToArray(t_vec_out, x);

  /* 'mptSolveCRS:137' petscVecDestroy(xVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = t_vec_out;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  *flag = c_flag;
  *relres = b_relres;
  *iter = b_iter;
  times[0] = time_setup;
  times[1] = time_solve;
}

/*
 * function [x,flag,relres,iter,reshis,times] = mptSolveCRS_8args(Arows, Acols, Avals, b, solver, rtol, maxiter, pctype)
 */
void mptSolveCRS_8args(const emxArray_int32_T *Arows, const emxArray_int32_T
  *Acols, const emxArray_real_T *Avals, const emxArray_real_T *b, const
  emxArray_char_T *solver, double rtol, int maxiter, const emxArray_char_T
  *pctype, emxArray_real_T *x, int *flag, double *relres, int *iter,
  emxArray_real_T *reshis, double times[2])
{
  Mat AMat;
  Vec bVec;
  Vec t_vec_out;
  int errCode;
  int b_flag;
  PetscObject t_obj;
  MPI_Comm t_comm;
  KSP t_ksp;
  double t;
  boolean_T b3;
  emxArray_char_T *pctype0;
  int loop_ub;
  PC t_pc;
  double secs;
  int c_flag;
  double b_relres;
  int b_iter;
  double time_solve;
  Mat t_mat;
  Vec t_vec;

  /* 'mptSolveCRS_8args:2' [x,flag,relres,iter,reshis,times] = mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxiter, pctype); */
  /*  Solves a linear system using any PETSc solver for matrix in CRS format. */
  /*  */
  /*  Syntax: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0, opts) */
  /*  */
  /*     [x, flag, relres, iter, reshis, times] = mptSolveCRS(Arows, Acols, Avals, b, ...) */
  /*     returns the solution vector x, the flag (KSPConvergedReason), relative */
  /*     residual, number of iterations, history of residual used in convergence */
  /*     test (typically preconditioned residual), and the execution times in */
  /*     setup and solve. */
  /*  */
  /*     A is a sparse matrix in CRS format. b, x and resvec are all regular */
  /*     vectors. Solver is a value of PETSC_KSP*. pctype is a value of */
  /*     PETSC_PC*, and pcopt is a value of PETSC_MATSOLVER*. */
  /*  */
  /*     For rtol, maxit, use 0 to use default values. */
  /*     For solver, pctype, pcopt and opts, use empty string ('') to use default. */
  /*     For x0, use zeros(0, 1) to disable initial guess. */
  /*  */
  /*     When times is given, it returns a 2-vector contaning the times spent */
  /*     in setup and in solve separately. */
  /*  */
  /*  Description: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) solves the linear system without */
  /*     preconditioners, using the default tolerances or those that have been */
  /*     set previously in the option databases. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) specifies to use a */
  /*     specific solver, such as PETSC_KSPGMRES, PETSC_KSPBCGS, etc. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) uses the given number */
  /*         of solvers and the relative tolerarance. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) solves with */
  /*         the given relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     uses the specified preconditioner (those give by PETSC_PC*). */
  /*     The preconditioner can be controlled by the PETSc option database. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt) specifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0) usee x0 for the initial guess. x0 can be the same as x. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0, opts) can pass additional command-line options in a */
  /*     string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolve, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptVecToArray, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* 'mptSolveCRS:88' if nargin==0 */
  /* 'mptSolveCRS:94' if isempty(coder.target) && ~exist(['mptSolveCRS.' mexext], 'file') && ... */
  /* 'mptSolveCRS:95'         exist('run_mptSolveCRS_exe', 'file') */
  /* 'mptSolveCRS:104' Arows = varargin{1}; */
  /* 'mptSolveCRS:105' Acols = varargin{2}; */
  /* 'mptSolveCRS:106' Avals = varargin{3}; */
  /* 'mptSolveCRS:107' b = varargin{4}; */
  /*  Setup KSP */
  /* 'mptSolveCRS:110' if nargin<5 */
  /* 'mptSolveCRS:110' else */
  /* 'mptSolveCRS:110' solver = varargin{5}; */
  /*  Use default */
  /* 'mptSolveCRS:111' if nargin<6 */
  /* 'mptSolveCRS:111' else */
  /* 'mptSolveCRS:111' rtol = varargin{6}; */
  /* 'mptSolveCRS:112' if nargin<7 */
  /* 'mptSolveCRS:112' else */
  /* 'mptSolveCRS:112' maxit = varargin{7}; */
  /* 'mptSolveCRS:113' if nargin<8 */
  /* 'mptSolveCRS:113' else */
  /* 'mptSolveCRS:113' pctype = varargin{8}; */
  /* 'mptSolveCRS:114' if nargin<9 */
  /* 'mptSolveCRS:114' pcopt = ''; */
  /* 'mptSolveCRS:116' AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals); */
  AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals);

  /* 'mptSolveCRS:117' bVec = mptVecCreateFromArray(b); */
  bVec = mptVecCreateFromArray(b);

  /* 'mptSolveCRS:119' if nargin<10 || isempty(varargin{10}) */
  /* 'mptSolveCRS:120' x0Vec = PETSC_NULL_VEC; */
  /*  Obtain PETSC constant NULL of type Vec */
  /* 'PETSC_NULL_VEC:4' coder.inline('always'); */
  /* 'PETSC_NULL_VEC:6' obj = petscGetObject('PETSC_NULL_VEC'); */
  /* petscGetObject Obtain an opaque object in PETSC */
  /*  */
  /*     obj = petscGetObject(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  MPI_Comm: PETSC_COMM_SELF, PETSC_COMM_WORLD, MPI_COMM_SELF, MPI_COMM_WORLD */
  /*  */
  /*  Other: */
  /*      PETSC_IGNORE, PETSC_NULL_OPTION, PETSC_NULL_MAT, PETSC_NULL_VEC, */
  /*      PETSC_NULL_INT, PETSC_NULL_REAL */
  /* 'petscGetObject:16' if isempty(coder.target) */
  /* 'petscGetObject:20' switch name */
  /* 'petscGetObject:35' case 'PETSC_NULL_VEC' */
  /* 'petscGetObject:36' [obj, toplevel] = get_obj('Vec', 'NULL', nargout>1); */
  /* 'mptSolveCRS:121' xVec = petscVecDuplicate(bVec); */
  /* Creates a new vector of the same type as an existing vector. */
  /*  */
  /*   [vec_out, errCode] = petscVecDuplicate(vec_in) creates a new vector, but */
  /*      it does not copy the entries of the input vector. The user is */
  /*      responsible freeing the memory by calling petscVecDestroy. */
  /*  */
  /*   SEE ALSO: petscVecCopy, petscVecDestroy, petscVecCreate */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  VecDuplicate(Vec vec_in, Vec *vec_out) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDuplicate.html */
  /* 'petscVecDuplicate:16' errCode = int32(-1); */
  /* 'petscVecDuplicate:18' if ~isempty(coder.target) */
  /* 'petscVecDuplicate:19' t_vec_out = coder.opaque('Vec'); */
  /* 'petscVecDuplicate:21' errCode = coder.ceval('VecDuplicate', PetscVec(vec_in), coder.wref(t_vec_out)); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  errCode = VecDuplicate(bVec, &t_vec_out);

  /* 'petscVecDuplicate:23' toplevel = nargout>2; */
  /* 'petscVecDuplicate:24' vec_out = PetscVec(t_vec_out, toplevel); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscVecDuplicate:26' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDuplicate:27' m2c_error('petsc:RuntimeError', 'VecDuplicate returned error code %d\n', errCode) */
      i_m2c_error(errCode);
    }
  }

  /* 'mptSolveCRS:128' if nargin<11 */
  /* 'mptSolveCRS:128' opts = ''; */
  /* 'mptSolveCRS:130' [flag, relres, iter, reshis, times] = mptSolve(AMat, bVec, xVec, solver, ... */
  /* 'mptSolveCRS:131'     double(rtol), int32(maxit), pctype, pcopt, x0Vec, opts); */
  /*  Solves a linear system using a given solver in PETSc. */
  /*  */
  /*  Syntax: */
  /*     mptSolve(A_hdl, b_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, x0_hdl) */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, x0_hdl, opts) */
  /*  */
  /*     [flag, relres, iter, reshis, times] = mptSolve(A_hdl, b_hdl, x_hdl, ...) */
  /*     returns the flag (KSPConvergedReason), relative residual, number of  */
  /*     iterations, history of residual used in convergence test (typically  */
  /*     preconditioned residual), and the execution times spent in its core steps. */
  /*  */
  /*     The handles are PetscMat or PetscVec objects. */
  /*  */
  /*  Description: */
  /*     mptSolve(A_hdl, b_hdl) solves the linear system without preconditioners, */
  /*     using the default tolerances or those that have been set previously in */
  /*     the option databases. A_hdl is a PetscMat object, and b_hdl is a */
  /*     PetscVec object. The solution is stored into b. The QMRCGS can be */
  /*     controlled using the options database for KSPQMRCGS. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl) solves the linear system and saves the */
  /*     result into x. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver) uses the specified solver, where */
  /*     solver is one of PETSC_KSP*. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol) uses the given relative tolerarance. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit) solves with the given */
  /*      relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype) uses the */
  /*     specified preconditioner (PETSC_PC*). The preconditioner can be */
  /*     controlled by the PETSc option database. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt) */
  /*     aspecifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, */
  /*     x0_handle) usee x0 for the initial guess. x0 can be the same as x or */
  /*     be PETSC_NULL_VEC. */
  /*  */
  /*     mptSolve(A_hdl, b_hdl, x_hdl, solver, rtol, maxit, pctype, pcopt, */
  /*     x0_handle, opts) can pass command-line options in a string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolveCRS, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptOptionsInsert, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* This function is codegen compatbile, but no need to a top-level function */
  /*  Setup KSP */
  /* 'mptSolve:66' if nargin<3 */
  /* 'mptSolve:67' if nargin<4 */
  /* 'mptSolve:68' if nargin<5 */
  /* 'mptSolve:69' if nargin<6 */
  /* 'mptSolve:70' if nargin<7 */
  /* 'mptSolve:71' if nargin<8 */
  /* 'mptSolve:72' if nargin<9 */
  /* 'mptSolve:74' if nargin==10 && ~isempty(opts) */
  /* 'mptSolve:78' [ksp, time_setup] = mptKSPSetup(A, solver, pctype, pcopt); */
  /*  Sets up KSP using the given matrix (matrices). */
  /*  */
  /*  Syntax: */
  /*   ksp = mptKSPSetup(A) */
  /*   ksp = mptKSPSetup(A, ksptype) */
  /*   ksp = mptKSPSetup(A, ksptype, pctype) */
  /*   ksp = mptKSPSetup(A, ksptype, pctype, pcopt) */
  /*  */
  /*  Description: */
  /*   ksp = mptKSPSetup(A) sets up a KSP using matrix A. */
  /*  */
  /*   ksp = mptKSPSetup(A, ksptype) uses the specified type of the KSP. */
  /*  */
  /*   ksp = mptKSPSetup(A, ksptype, pctype) also sets the type of the KSP */
  /*     and the preconditioner. Note that pctype can be NULL. */
  /*  */
  /*   ksp = mptKSPSetup(A, ksptype, pctype, pcopt) aspecifies additional */
  /*     control options for the preconditioner. It can be PETSC_MATSOLVER*, */
  /*     which is useful when the ksptype is PETSC_KSPPREONLY, and the pctype */
  /*     is a direct method (such as PETSC_PCLU or PETSC_PCCHOLESKY). Otherwise, */
  /*     it may be 'left', 'right', or 'symmetric' (without null-terminator) */
  /*     to choose to use left, right, or symmetric preconditioners. By */
  /*     default, PETSc uses left preconditioners. */
  /*  */
  /*  See Also: mptKSPSolve, mptKSPCleanup */
  /* 'mptKSPSetup:33' t_Amat = Amat; */
  /* 'mptKSPSetup:34' t_ksp = petscKSPCreate(petscObjectGetComm(t_Amat)); */
  /* Gets the MPI communicator for any PetscObject, regardless of the type.  */
  /*  */
  /*   [comm, errCode] = petscObjectGetComm(obj) */
  /*  */
  /*   obtains the MPI_Comm associated with the PetscObject. */
  /*  */
  /*   SEE ALSO: petscMatSetType, petscMatSetFromOptions */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  PetscObjectGetComm(PetscObject obj,MPI_Comm *comm) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscObjectGetComm.html */
  /* 'petscObjectGetComm:16' errCode = int32(-1); */
  /* 'petscObjectGetComm:18' if ~isempty(coder.target) */
  /* 'petscObjectGetComm:19' t_obj = PetscObject(obj); */
  /* Map an opaque object into a PETSc PetscObject object */
  /*  */
  /*   obj = PetscObject() simply returns a definition of the */
  /*   m2c_opaque_type definition, suitable in the argument */
  /*   specification for codegen. */
  /*  */
  /*   obj = PetscObject(arg) or obj = PetscObject(arg, false) converts */
  /*   arg into a PETSc Object object. */
  /*  */
  /*   obj = PetscObject(arg, 'wrap') or obj = PetscObject(arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the  */
  /*   object needs to be returned to MATLAB. Note that the value of  */
  /*   opaque must be determined at compile time. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscObject:18' coder.inline('always'); */
  /* 'PetscObject:20' if nargin==0 && isempty(coder.target) */
  /* 'PetscObject:25' if isstruct(arg) && ~isequal(arg.type, 'PetscObject') && ... */
  /* 'PetscObject:26'         ~isequal(arg.type, 'Mat') && ~isequal(arg.type, 'Vec') && ... */
  /* 'PetscObject:27'         ~isequal(arg.type, 'KSP') && ~isequal(arg.type, 'PC') */
  /* 'PetscObject:32' if ~isstruct(arg) || isempty(coder.target) */
  /* 'PetscObject:33' if nargin==1 || ischar(wrap) || ~wrap */
  /* 'PetscObject:34' obj = coder.opaque('PetscObject'); */
  /* 'PetscObject:35' obj = coder.ceval('(PetscObject)', arg); */
  t_obj = (PetscObject)(AMat);

  /* 'petscObjectGetComm:20' t_comm = coder.opaque('MPI_Comm'); */
  /* 'petscObjectGetComm:22' errCode = coder.ceval('PetscObjectGetComm', t_obj, coder.wref(t_comm)); */
  errCode = PetscObjectGetComm(t_obj, &t_comm);

  /* 'petscObjectGetComm:24' toplevel = nargout>2; */
  /* 'petscObjectGetComm:25' comm = MPI_Comm(t_comm, toplevel); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscObjectGetComm:27' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscObjectGetComm:28' m2c_error('petsc:RuntimeError', 'PetscObjectGetComm returned error code %d\n', errCode) */
      j_m2c_error(errCode);
    }
  }

  /* Creates a preconditioner context. */
  /*  */
  /*   [ksp, errCode] = petscKSPCreate */
  /*       creates a PETSc KSP using PETSC_COMM_WORLD */
  /*  */
  /*   [ksp, errCode] = petscKSPCreate(comm) */
  /*       comm: MPI Communicator */
  /*  */
  /*   SEE ALSO: petscKSPSetUp, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPCreate(MPI_Comm comm,KSP *ksp) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPCreate.html */
  /* 'petscKSPCreate:18' errCode = int32(-1); */
  /* 'petscKSPCreate:20' if ~isempty(coder.target) */
  /* 'petscKSPCreate:21' t_ksp = coder.opaque('KSP'); */
  /* 'petscKSPCreate:23' if nargin==0 */
  /* 'petscKSPCreate:25' else */
  /* 'petscKSPCreate:26' t_comm = MPI_Comm(comm); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPCreate:29' errCode = coder.ceval('KSPCreate', t_comm, coder.wref(t_ksp)); */
  errCode = KSPCreate(t_comm, &t_ksp);

  /* 'petscKSPCreate:31' toplevel = nargout>2; */
  /* 'petscKSPCreate:32' ksp = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPCreate:34' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPCreate:35' m2c_error('petsc:RuntimeError', 'KSPCreate returned error code %d\n', errCode) */
      k_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:36' if nargout>1 */
  /* 'mptKSPSetup:37' time = 0; */
  /* 'mptKSPSetup:38' comm = petscObjectGetComm(t_ksp); */
  /* Gets the MPI communicator for any PetscObject, regardless of the type.  */
  /*  */
  /*   [comm, errCode] = petscObjectGetComm(obj) */
  /*  */
  /*   obtains the MPI_Comm associated with the PetscObject. */
  /*  */
  /*   SEE ALSO: petscMatSetType, petscMatSetFromOptions */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  PetscObjectGetComm(PetscObject obj,MPI_Comm *comm) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Sys/PetscObjectGetComm.html */
  /* 'petscObjectGetComm:16' errCode = int32(-1); */
  /* 'petscObjectGetComm:18' if ~isempty(coder.target) */
  /* 'petscObjectGetComm:19' t_obj = PetscObject(obj); */
  /* Map an opaque object into a PETSc PetscObject object */
  /*  */
  /*   obj = PetscObject() simply returns a definition of the */
  /*   m2c_opaque_type definition, suitable in the argument */
  /*   specification for codegen. */
  /*  */
  /*   obj = PetscObject(arg) or obj = PetscObject(arg, false) converts */
  /*   arg into a PETSc Object object. */
  /*  */
  /*   obj = PetscObject(arg, 'wrap') or obj = PetscObject(arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the  */
  /*   object needs to be returned to MATLAB. Note that the value of  */
  /*   opaque must be determined at compile time. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscObject:18' coder.inline('always'); */
  /* 'PetscObject:20' if nargin==0 && isempty(coder.target) */
  /* 'PetscObject:25' if isstruct(arg) && ~isequal(arg.type, 'PetscObject') && ... */
  /* 'PetscObject:26'         ~isequal(arg.type, 'Mat') && ~isequal(arg.type, 'Vec') && ... */
  /* 'PetscObject:27'         ~isequal(arg.type, 'KSP') && ~isequal(arg.type, 'PC') */
  /* 'PetscObject:32' if ~isstruct(arg) || isempty(coder.target) */
  /* 'PetscObject:33' if nargin==1 || ischar(wrap) || ~wrap */
  /* 'PetscObject:34' obj = coder.opaque('PetscObject'); */
  /* 'PetscObject:35' obj = coder.ceval('(PetscObject)', arg); */
  t_obj = (PetscObject)(t_ksp);

  /* 'petscObjectGetComm:20' t_comm = coder.opaque('MPI_Comm'); */
  /* 'petscObjectGetComm:22' errCode = coder.ceval('PetscObjectGetComm', t_obj, coder.wref(t_comm)); */
  errCode = PetscObjectGetComm(t_obj, &t_comm);

  /* 'petscObjectGetComm:24' toplevel = nargout>2; */
  /* 'petscObjectGetComm:25' comm = MPI_Comm(t_comm, toplevel); */
  /* Map an opaque object into an MPI_Comm object */
  /*  */
  /*   MPI_Comm() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   MPI_Comm(obj) or MPI_Comm(obj, false) converts obj into an MPI_Comm object. */
  /*  */
  /*   MPI_Comm(obj, true) wraps the obj into an opaque object. This should be */
  /*   used if the opaque object needs to be returned to MATLAB. */
  /* 'MPI_Comm:12' coder.inline('always'); */
  /* 'MPI_Comm:14' comm = m2c_opaque_obj('MPI_Comm', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscObjectGetComm:27' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscObjectGetComm:28' m2c_error('petsc:RuntimeError', 'PetscObjectGetComm returned error code %d\n', errCode) */
      j_m2c_error(errCode);
    }
  }

  /*  When timing the run, use mpi_Barrier for more accurate results. */
  /* 'mptKSPSetup:40' mpi_Barrier(comm); */
  mpi_Barrier(t_comm);

  /* 'mptKSPSetup:41' t = mpi_Wtime(); */
  /* mpi_Wtime    Returns an elapsed time on the calling processor */
  /*  */
  /*   secs = mpi_Wtime */
  /*  */
  /*   secs (double) Time in seconds since an arbitrary time in the past */
  /*  */
  /*   SEE ALSO: mpi_Wtick */
  /*  */
  /*  C interface: */
  /*  double MPI_Wtime(void) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Wtime.html */
  /* 'mpi_Wtime:17' secs = 0; */
  /* 'mpi_Wtime:18' secs = coder.ceval('MPI_Wtime'); */
  t = MPI_Wtime();

  /*  Setup KSP */
  /* 'mptKSPSetup:45' petscKSPSetOperators(t_ksp, PetscMat(t_Amat)); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* Sets the matrix associated with the linear system and a (possibly) */
  /* different one associated with the preconditioner. */
  /*  */
  /*   errCode = petscKSPSetOperators(ksp, Amat) */
  /*  */
  /*   sets the matrix to be Amat and use the same matrix to construct the */
  /*   preconditioner. */
  /*      ksp - iterative context obtained from petscKSPCreate */
  /*      Amat	  - the right hand side vector */
  /*  */
  /*   errCode = petscKSPSetOperators(ksp, Amat, Pmat) */
  /*  */
  /*   uses the matrix Pmat to construct the preconditioner. */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetUp, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetOperators(KSP ksp,Mat Amat,Mat Pmat) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetOperators.html */
  /* 'petscKSPSetOperators:25' errCode = int32(-1); */
  /* 'petscKSPSetOperators:27' if ~isempty(coder.target) */
  /* 'petscKSPSetOperators:28' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetOperators:29' t_Amat = PetscMat(Amat); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetOperators:31' if nargin==2 */
  /* 'petscKSPSetOperators:32' t_Pmat = t_Amat; */
  /* 'petscKSPSetOperators:37' errCode = coder.ceval('KSPSetOperators', t_ksp, t_Amat, t_Pmat); */
  errCode = KSPSetOperators(t_ksp, AMat, AMat);

  /* 'petscKSPSetOperators:39' toplevel = nargout>1; */
  /* 'petscKSPSetOperators:40' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSetOperators:41' m2c_error('petsc:RuntimeError', 'KSPSetOperators returned error code %d\n', errCode) */
      n_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:47' if nargin>1 */
  /* 'mptKSPSetup:48' if nargin>2 */
  /* 'mptKSPSetup:49' hasPC = ~ischar(pctype) || ~isempty(pctype); */
  b3 = !(pctype->size[1] == 0);

  /* 'mptKSPSetup:50' hasOpt = nargin>3 && (~ischar(pcopt) || ~isempty(pcopt)); */
  /* 'mptKSPSetup:52' if hasPC || hasOpt */
  emxInit_char_T(&pctype0, 2);
  if (b3) {
    /* 'mptKSPSetup:53' t_pc = petscKSPGetPC(t_ksp); */
    /* Returns a pointer to the preconditioner context set with petscKSPSetPC. */
    /*  */
    /*   [pc, errCode] = petscKSPGetPC(ksp) gets the PC of the KSP */
    /*  */
    /*   SEE ALSO:  petscKSPSetPC */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPGetPC(KSP ksp,PC *pc) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPGetPC.html */
    /* 'petscKSPGetPC:14' errCode = int32(-1); */
    /* 'petscKSPGetPC:16' if ~isempty(coder.target) */
    /* 'petscKSPGetPC:17' t_pc = coder.opaque('PC'); */
    /* 'petscKSPGetPC:18' errCode = coder.ceval('KSPGetPC', PetscKSP(ksp), coder.wref(t_pc)); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPGetPC(t_ksp, &t_pc);

    /* 'petscKSPGetPC:20' toplevel = nargout>2; */
    /* 'petscKSPGetPC:21' pc = PetscPC(t_pc, toplevel); */
    /* Map an opaque object into a PETSc PC object */
    /*  */
    /*   PetscPC() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscPC(obj) or PetscPC(obj, false) converts arg into a PETSc PC object. */
    /*  */
    /*   PetscPC(arg, 'wrap') or PetscPC(obj, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscPC:14' coder.inline('always'); */
    /* 'PetscPC:16' pc = m2c_opaque_obj('PC', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    /* 'petscKSPGetPC:23' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      b_flag = (M2C_DEBUG);
      if (b_flag != 0) {
        /* 'petscKSPGetPC:24' m2c_error('petsc:RuntimeError', 'KSPGetPC returned error code %d\n', errCode) */
        cb_m2c_error(errCode);
      }
    }

    /* 'mptKSPSetup:55' if hasPC */
    /* 'mptKSPSetup:56' if ischar(pctype) && pctype(end)~=char(0) */
    if (pctype->data[pctype->size[1] - 1] != '\x00') {
      /*  null-terminate the string if not terminated properly */
      /* 'mptKSPSetup:58' pctype0 = [pctype char(0)]; */
      b_flag = pctype0->size[0] * pctype0->size[1];
      pctype0->size[0] = 1;
      pctype0->size[1] = pctype->size[1] + 1;
      emxEnsureCapacity((emxArray__common *)pctype0, b_flag, (int)sizeof(char));
      loop_ub = pctype->size[1];
      for (b_flag = 0; b_flag < loop_ub; b_flag++) {
        pctype0->data[pctype0->size[0] * b_flag] = pctype->data[pctype->size[0] *
          b_flag];
      }

      pctype0->data[pctype0->size[0] * pctype->size[1]] = '\x00';
    } else {
      /* 'mptKSPSetup:59' else */
      /* 'mptKSPSetup:60' pctype0 = pctype; */
      b_flag = pctype0->size[0] * pctype0->size[1];
      pctype0->size[0] = 1;
      pctype0->size[1] = pctype->size[1];
      emxEnsureCapacity((emxArray__common *)pctype0, b_flag, (int)sizeof(char));
      loop_ub = pctype->size[0] * pctype->size[1];
      for (b_flag = 0; b_flag < loop_ub; b_flag++) {
        pctype0->data[b_flag] = pctype->data[b_flag];
      }
    }

    /* 'mptKSPSetup:62' petscPCSetType(t_pc, pctype0); */
    /* Builds PC for a particular solver. */
    /*  */
    /*   errCode = petscPCSetType(pc, type) sets the type of the PC */
    /*  */
    /*   SEE ALSO:  PetscPCSetType, petscPCCreate */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  PCSetType(PC pc, PCType type) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/PC/PCSetType.html */
    /* 'petscPCSetType:14' errCode = int32(-1); */
    /* 'petscPCSetType:16' if ~isempty(coder.target) */
    /* 'petscPCSetType:17' if ischar(type) */
    /* 'petscPCSetType:18' errCode = coder.ceval('PCSetType', PetscPC(pc), coder.rref(type)); */
    /* Map an opaque object into a PETSc PC object */
    /*  */
    /*   PetscPC() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscPC(obj) or PetscPC(obj, false) converts arg into a PETSc PC object. */
    /*  */
    /*   PetscPC(arg, 'wrap') or PetscPC(obj, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscPC:14' coder.inline('always'); */
    /* 'PetscPC:16' pc = m2c_opaque_obj('PC', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = PCSetType(t_pc, &pctype0->data[0]);

    /* 'petscPCSetType:23' toplevel = nargout>1; */
    /* 'petscPCSetType:24' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      b_flag = (M2C_DEBUG);
      if (b_flag != 0) {
        /* 'petscPCSetType:25' m2c_error('petsc:RuntimeError', 'PCSetType returned error code %d\n', errCode) */
        ob_m2c_error(errCode);
      }
    }

    /* 'mptKSPSetup:65' if hasOpt */
  }

  /* 'mptKSPSetup:85' if ischar(ksptype) && ~isempty(ksptype) && ksptype(end)~=0 */
  if ((!(solver->size[1] == 0)) && ((unsigned char)solver->data[solver->size[1]
       - 1] != 0)) {
    /*  null-terminate the string if not terminated properly */
    /* 'mptKSPSetup:87' ksptype0 = [ksptype char(0)]; */
    b_flag = pctype0->size[0] * pctype0->size[1];
    pctype0->size[0] = 1;
    pctype0->size[1] = solver->size[1] + 1;
    emxEnsureCapacity((emxArray__common *)pctype0, b_flag, (int)sizeof(char));
    loop_ub = solver->size[1];
    for (b_flag = 0; b_flag < loop_ub; b_flag++) {
      pctype0->data[pctype0->size[0] * b_flag] = solver->data[solver->size[0] *
        b_flag];
    }

    pctype0->data[pctype0->size[0] * solver->size[1]] = '\x00';
  } else {
    /* 'mptKSPSetup:88' else */
    /* 'mptKSPSetup:89' ksptype0 = ksptype; */
    b_flag = pctype0->size[0] * pctype0->size[1];
    pctype0->size[0] = 1;
    pctype0->size[1] = solver->size[1];
    emxEnsureCapacity((emxArray__common *)pctype0, b_flag, (int)sizeof(char));
    loop_ub = solver->size[0] * solver->size[1];
    for (b_flag = 0; b_flag < loop_ub; b_flag++) {
      pctype0->data[b_flag] = solver->data[b_flag];
    }
  }

  /* 'mptKSPSetup:91' if ischar(ksptype0) && ~isempty(ksptype0) || ~ischar(ksptype0) */
  if (!(pctype0->size[1] == 0)) {
    /*  Set KSP Types */
    /* 'mptKSPSetup:93' petscKSPSetType(t_ksp, ksptype0); */
    /* Builds KSP for a particular solver. */
    /*  */
    /*   errCode = petscKSPSetType(ksp, type) sets the type of the KSP */
    /*  */
    /*   SEE ALSO:  PetscPCSetType, petscKSPCreate */
    /*  */
    /*  PETSc C interface: */
    /*    PetscErrorCode  KSPSetType(KSP ksp, KSPType type) */
    /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetType.html */
    /* 'petscKSPSetType:14' errCode = int32(-1); */
    /* 'petscKSPSetType:16' if ~isempty(coder.target) */
    /* 'petscKSPSetType:17' if ischar(type) */
    /* 'petscKSPSetType:18' errCode = coder.ceval('KSPSetType', PetscKSP(ksp), coder.rref(type)); */
    /* Map an opaque object into a PETSc KSP object */
    /*  */
    /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
    /*   suitable in the argument type specification for codegen. */
    /*  */
    /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
    /*  */
    /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
    /*   object. This should be used if the object needs to be returned to MATLAB. */
    /*  */
    /*  See also PetscPC */
    /* 'PetscKSP:14' coder.inline('always'); */
    /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
    /* Maps between C opaque object and a MATLAB structure. */
    /*  */
    /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
    /*   definition of the m2c_opaque_type, suitable in the argument type */
    /*   specification for codegen. */
    /*  */
    /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
    /*   arg into an object of give data type. */
    /*  */
    /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
    /*   wraps the arg into an opaque object. This should be used if the opaque */
    /*   object needs to be returned to MATLAB. Note that the third argument */
    /*   must be determined at compile time. */
    /*  */
    /*  See also m2c_opaque_array, m2c_opaque_ptr */
    /*  Undocumented use: */
    /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
    /*   into an opaque object. This is for internal use by */
    /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
    /* 'm2c_opaque_obj:23' coder.inline('always'); */
    /* 'm2c_opaque_obj:26' if nargin<=1 */
    /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
    /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
    /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
    /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
    /* 'm2c_opaque_obj:43' obj = arg; */
    errCode = KSPSetType(t_ksp, &pctype0->data[0]);

    /* 'petscKSPSetType:23' toplevel = nargout>1; */
    /* 'petscKSPSetType:24' if errCode && (toplevel || m2c_debug) */
    if (errCode != 0) {
      /* Flag indicating whether m2c_debug is on. */
      /* It is always true within MATLAB. In the generated C code, it is */
      /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
      /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
      /* 'm2c_debug:7' coder.inline('always'); */
      /* 'm2c_debug:9' if isempty(coder.target) */
      /* 'm2c_debug:11' else */
      /* 'm2c_debug:12' flag = int32(1); */
      /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
      b_flag = (M2C_DEBUG);
      if (b_flag != 0) {
        /* 'petscKSPSetType:25' m2c_error('petsc:RuntimeError', 'KSPSetType returned error code %d\n', errCode) */
        nb_m2c_error(errCode);
      }
    }
  }

  emxFree_char_T(&pctype0);

  /* 'mptKSPSetup:97' if nargin<=3 || isempty(pcopt) */
  /*  Use right-preconditioner by default */
  /* 'mptKSPSetup:99' petscKSPSetPCSide(t_ksp, PETSC_PC_RIGHT); */
  /*  Obtain PETSC constant PC_RIGHT */
  /* 'PETSC_PC_RIGHT:4' coder.inline('always'); */
  /* 'PETSC_PC_RIGHT:6' val = petscGetEnum('PC_RIGHT'); */
  /* petscGetEnum Obtain an enumerate value in PETSC */
  /*  */
  /*     val = petscGetEnum(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  PetscBool:  PETSC_TRUE, PETSC_FALSE */
  /*  */
  /*  VecOption: VEC_IGNORE_OFF_PROC_ENTRIES, VEC_IGNORE_NEGATIVE_INDICES, */
  /*       VEC_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatOption: MAT_ROW_ORIENTED, MAT_SYMMETRIC, MAT_STRUCTURALLY_SYMMETRIC, */
  /*       MAT_NEW_DIAGONALS, MAT_IGNORE_OFF_PROC_ENTRIES, */
  /*       MAT_USE_HASH_TABLE, MAT_KEEP_NONZERO_PATTERN, */
  /*       MAT_IGNORE_ZERO_ENTRIES, MAT_USE_INODES, MAT_HERMITIAN, */
  /*       MAT_SYMMETRY_ETERNAL, MAT_NEW_NONZERO_LOCATION_ERR, */
  /*       MAT_IGNORE_LOWER_TRIANGULAR, MAT_ERROR_LOWER_TRIANGULAR, */
  /*       MAT_GETROW_UPPERTRIANGULAR, MAT_SPD, */
  /*       MAT_NO_OFF_PROC_ZERO_ROWS, MAT_NO_OFF_PROC_ENTRIES, */
  /*       MAT_NEW_NONZERO_LOCATIONS, MAT_NEW_NONZERO_ALLOCATION_ERR, */
  /*       MAT_SUBSET_OFF_PROC_ENTRIES */
  /*  */
  /*  MatStructure: DIFFERENT_NONZERO_PATTERN, SUBSET_NONZERO_PATTERN, SAME_NONZERO_PATTERN */
  /*  */
  /*  MatDuplicateOption: MAT_DO_NOT_COPY_VALUES,MAT_COPY_VALUES,MAT_SHARE_NONZERO_PATTERN */
  /*  */
  /*  MatReuse: MAT_INITIAL_MATRIX,MAT_REUSE_MATRIX,MAT_IGNORE_MATRIX,MAT_INPLACE_MATRIX */
  /*  */
  /*  InsertMode: INSERT_VALUES, ADD_VALUES, MAX_VALUES, */
  /*       INSERT_ALL_VALUES, ADD_ALL_VALUES, INSERT_BC_VALUES, ADD_BC_VALUES */
  /*  */
  /*  MatAssemblyType: MAT_FINAL_ASSEMBLY, MAT_FLUSH_ASSEMBLY */
  /*  */
  /*  MatInfoType: MAT_LOCAL,MAT_GLOBAL_MAX,MAT_GLOBAL_SUM */
  /*  */
  /*  MatFactorType: MAT_FACTOR_NONE, MAT_FACTOR_LU, MAT_FACTOR_CHOLESKY, */
  /*       MAT_FACTOR_ILU, MAT_FACTOR_ICC,MAT_FACTOR_ILUDT */
  /*  */
  /*  NormType: NORM_1, NORM_2, NORM_FROBENIUS, NORM_INFINITY, NORM_1_AND_2 */
  /*  */
  /*  KSPNormType: KSP_NORM_DEFAULT, KSP_NORM_NONE, KSP_NORM_PRECONDITIONED, */
  /*               KSP_NORM_UNPRECONDITIONED,KSP_NORM_NATURAL */
  /*  */
  /*  PCSide: PC_LEFT, PC_RIGHT, PC_SYMMETRIC */
  /*  */
  /*  Others:  PETSC_DETERMINE, PETSC_DECIDE, PETSC_DEFAULT */
  /* 'petscGetEnum:51' if isempty(coder.target) */
  /* % InsertMode */
  /* 'petscGetEnum:56' switch name */
  /* 'petscGetEnum:181' case 'PC_RIGHT' */
  /* 'petscGetEnum:182' [val, toplevel] = get_val('PetscInt', 'PC_RIGHT', nargin>1); */
  /* 'petscGetEnum:201' coder.inline('always'); */
  /* 'petscGetEnum:203' val = int32(intmin); */
  /* 'petscGetEnum:204' val = coder.ceval(' ', coder.opaque(type, name)); */
  b_flag = (PC_RIGHT);

  /* Sets the preconditioning side. */
  /*  */
  /*   errCode = petscKSPSetPCSide(ksp, side) sets the side of the KSP */
  /*  */
  /*   SEE ALSO:  petscKSPGetPCSide */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  KSPSetPCSide(KSP ksp, PCSide side) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetPCSide.html */
  /* 'petscKSPSetPCSide:14' errCode = int32(-1); */
  /* 'petscKSPSetPCSide:16' if ~isempty(coder.target) */
  /* 'petscKSPSetPCSide:17' errCode = coder.ceval('KSPSetPCSide', PetscKSP(ksp), side); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  errCode = KSPSetPCSide(t_ksp, b_flag);

  /* 'petscKSPSetPCSide:19' toplevel = nargout>1; */
  /* 'petscKSPSetPCSide:20' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSetPCSide:21' m2c_error('petsc:RuntimeError', 'KSPSetPCSide returned error code %d\n', errCode) */
      o_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:102' petscKSPSetFromOptions(t_ksp); */
  /* Sets KSP options from the options database. This routine must be called */
  /* before KSPSetUp() if the user is to be allowed to set the Krylov type. */
  /*  */
  /*   errCode = petscKSPSetFromOptions(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetOperators, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPSetFromOptions(KSP ksp) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetFromOptions.html */
  /* 'petscKSPSetFromOptions:15' errCode = int32(-1); */
  /* 'petscKSPSetFromOptions:17' if ~isempty(coder.target) */
  /* 'petscKSPSetFromOptions:18' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetFromOptions:20' errCode = coder.ceval('KSPSetFromOptions', t_ksp); */
  errCode = KSPSetFromOptions(t_ksp);

  /* 'petscKSPSetFromOptions:22' toplevel = nargout>1; */
  /* 'petscKSPSetFromOptions:23' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSetFromOptions:24' m2c_error('petsc:RuntimeError', 'KSPSetFromOptions returned error code %d\n', errCode) */
      p_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:104' petscKSPSetUp(t_ksp); */
  /* Sets up the internal data structures for the later use of an iterative solver. */
  /*  */
  /*   errCode = petscKSPSetUp(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetOperators, petscKSPSolve, petscKSPDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPSetUp(KSP ksp) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPSetUp.html */
  /* 'petscKSPSetUp:14' errCode = int32(-1); */
  /* 'petscKSPSetUp:16' if ~isempty(coder.target) */
  /* 'petscKSPSetUp:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPSetUp:19' errCode = coder.ceval('KSPSetUp', t_ksp); */
  errCode = KSPSetUp(t_ksp);

  /* 'petscKSPSetUp:21' toplevel = nargout>1; */
  /* 'petscKSPSetUp:22' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPSetUp:23' m2c_error('petsc:RuntimeError', 'KSPSetUp returned error code %d\n', errCode) */
      q_m2c_error(errCode);
    }
  }

  /* 'mptKSPSetup:106' if nargout>1 */
  /*  When timing the run, use mpi_Barrier for more accurate results. */
  /* 'mptKSPSetup:108' mpi_Barrier(comm); */
  mpi_Barrier(t_comm);

  /* 'mptKSPSetup:109' time = mpi_Wtime()-t; */
  /* mpi_Wtime    Returns an elapsed time on the calling processor */
  /*  */
  /*   secs = mpi_Wtime */
  /*  */
  /*   secs (double) Time in seconds since an arbitrary time in the past */
  /*  */
  /*   SEE ALSO: mpi_Wtick */
  /*  */
  /*  C interface: */
  /*  double MPI_Wtime(void) */
  /*  http://mpi.deino.net/mpi_functions/MPI_Wtime.html */
  /* 'mpi_Wtime:17' secs = 0; */
  /* 'mpi_Wtime:18' secs = coder.ceval('MPI_Wtime'); */
  secs = MPI_Wtime();

  /* 'mptKSPSetup:112' toplevel = nargout>2; */
  /* 'mptKSPSetup:113' ksp = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'mptSolve:80' [flag, relres, iter, reshis, time_solve] = mptKSPSolve(ksp, b, x, ... */
  /* 'mptSolve:81'     double(rtol), int32(maxit), x0); */
  b_mptKSPSolve(t_ksp, bVec, t_vec_out, rtol, maxiter, NULL, &c_flag, &b_relres,
                &b_iter, reshis, &time_solve);

  /* 'mptSolve:83' if nargout>4 */
  /* 'mptSolve:84' times = [time_setup; time_solve]; */
  /* 'mptSolve:87' mptKSPCleanup(ksp); */
  /*  Cleans up the KSP. */
  /*  */
  /*    ksp = mptKSPCleanup(ksp) destropys the given KSP object. */
  /*    It should be called whtn the KSP object is no longer needed, and  */
  /*    no calls should be made to this KSP after this. */
  /*  */
  /*  See Also: mptKSPSetup, mptKSPSolve */
  /*  Destroy the KSP and solution vector */
  /* 'mptKSPCleanup:13' t_ksp = petscKSPDestroy(ksp); */
  /* Destroys KSP context. */
  /*  */
  /*   [ksp, errCode] = petscKSPDestroy(ksp) */
  /*  */
  /*   SEE ALSO: petscKSPCreate, petscKSPSetUp, petscKSPSolve */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode KSPDestroy(KSP *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/KSP/KSPDestroy.html */
  /* 'petscKSPDestroy:14' errCode = int32(-1); */
  /* 'petscKSPDestroy:16' if ~isempty(coder.target) */
  /* 'petscKSPDestroy:17' t_ksp = PetscKSP(ksp); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPDestroy:19' errCode = coder.ceval('KSPDestroy', coder.ref(t_ksp)); */
  errCode = KSPDestroy(&t_ksp);

  /* 'petscKSPDestroy:21' toplevel = nargout>2; */
  /* 'petscKSPDestroy:22' ksp_out = PetscKSP(t_ksp, toplevel); */
  /* Map an opaque object into a PETSc KSP object */
  /*  */
  /*   PetscKSP() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscKSP(obj) or PetscKSP(obj, false) converts arg into a PETSc KSP object. */
  /*  */
  /*   PetscKSP(arg, 'wrap') or PetscKSP(arg, true) wraps the arg into an opaque */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscPC */
  /* 'PetscKSP:14' coder.inline('always'); */
  /* 'PetscKSP:16' ksp = m2c_opaque_obj('KSP', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscKSPDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscKSPDestroy:25' m2c_error('petsc:RuntimeError', 'KSPDestroy returned error code %d\n', errCode) */
      hb_m2c_error(errCode);
    }
  }

  /* 'mptKSPCleanup:15' toplevel = nargout>1; */
  /* 'mptKSPCleanup:16' ksp = PetscKSP(t_ksp, toplevel); */
  /* 'mptSolveCRS:133' petscMatDestroy(AMat); */
  /* Frees space taken by a matrix. */
  /*  */
  /*   [mat, errCode] = petscMatDestroy(mat) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleMat, petscVecDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode MatDestroy(Mat *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Mat/MatDestroy.html */
  /* 'petscMatDestroy:14' errCode = int32(-1); */
  /* 'petscMatDestroy:16' if ~isempty(coder.target) */
  /* 'petscMatDestroy:17' t_mat = PetscMat(mat); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_mat = AMat;

  /* 'petscMatDestroy:19' errCode = coder.ceval('MatDestroy', coder.ref(t_mat)); */
  errCode = MatDestroy(&t_mat);

  /* 'petscMatDestroy:21' toplevel = nargout>2; */
  /* 'petscMatDestroy:22' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscMatDestroy:23' m2c_error('petsc:RuntimeError', 'MatDestroy returned error code %d\n', errCode) */
      ib_m2c_error(errCode);
    }
  }

  /* 'petscMatDestroy:26' mat = PetscMat(t_mat, toplevel); */
  /* 'mptSolveCRS:134' petscVecDestroy(bVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = bVec;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  /* 'mptSolveCRS:136' x = mptVecToArray(xVec); */
  mptVecToArray(t_vec_out, x);

  /* 'mptSolveCRS:137' petscVecDestroy(xVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = t_vec_out;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    b_flag = (M2C_DEBUG);
    if (b_flag != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  *flag = c_flag;
  *relres = b_relres;
  *iter = b_iter;
  times[0] = secs - t;
  times[1] = time_solve;
}

/*
 * function [x,flag,relres,iter,reshis,times] = mptSolveCRS_9args(Arows, Acols, Avals, b, solver, rtol, maxiter, pctype, solpack)
 */
void mptSolveCRS_9args(const emxArray_int32_T *Arows, const emxArray_int32_T
  *Acols, const emxArray_real_T *Avals, const emxArray_real_T *b, const
  emxArray_char_T *solver, double rtol, int maxiter, const emxArray_char_T
  *pctype, const emxArray_char_T *solpack, emxArray_real_T *x, int *flag, double
  *relres, int *iter, emxArray_real_T *reshis, double times[2])
{
  Mat AMat;
  Vec bVec;
  Vec t_vec_out;
  int errCode;
  int b_flag;
  double b_relres;
  int b_iter;
  int c_flag;
  Mat t_mat;
  Vec t_vec;

  /* 'mptSolveCRS_9args:2' [x,flag,relres,iter,reshis,times] = mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxiter, pctype, solpack); */
  /*  Solves a linear system using any PETSc solver for matrix in CRS format. */
  /*  */
  /*  Syntax: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0) */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, pcopt, x0, opts) */
  /*  */
  /*     [x, flag, relres, iter, reshis, times] = mptSolveCRS(Arows, Acols, Avals, b, ...) */
  /*     returns the solution vector x, the flag (KSPConvergedReason), relative */
  /*     residual, number of iterations, history of residual used in convergence */
  /*     test (typically preconditioned residual), and the execution times in */
  /*     setup and solve. */
  /*  */
  /*     A is a sparse matrix in CRS format. b, x and resvec are all regular */
  /*     vectors. Solver is a value of PETSC_KSP*. pctype is a value of */
  /*     PETSC_PC*, and pcopt is a value of PETSC_MATSOLVER*. */
  /*  */
  /*     For rtol, maxit, use 0 to use default values. */
  /*     For solver, pctype, pcopt and opts, use empty string ('') to use default. */
  /*     For x0, use zeros(0, 1) to disable initial guess. */
  /*  */
  /*     When times is given, it returns a 2-vector contaning the times spent */
  /*     in setup and in solve separately. */
  /*  */
  /*  Description: */
  /*     mptSolveCRS(Arows, Acols, Avals, b) solves the linear system without */
  /*     preconditioners, using the default tolerances or those that have been */
  /*     set previously in the option databases. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver) specifies to use a */
  /*     specific solver, such as PETSC_KSPGMRES, PETSC_KSPBCGS, etc. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol) uses the given number */
  /*         of solvers and the relative tolerarance. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit) solves with */
  /*         the given relative tolerances and maximum iteration count. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype) */
  /*     uses the specified preconditioner (those give by PETSC_PC*). */
  /*     The preconditioner can be controlled by the PETSc option database. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt) specifies additional control options for the preconditioner. */
  /*     If solver is PETSC_KSPPREONLY, and pctype is a direct method (such as */
  /*     PETSC_PCLU or PETSC_PCCHOLESKY), then pcopt may be used to specify */
  /*     the solver packages for factorization (PETSC_MATSOLVER*). Otherwise, */
  /*     pcopt may be 'left', 'right', or 'symmetric'. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0) usee x0 for the initial guess. x0 can be the same as x. */
  /*  */
  /*     mptSolveCRS(Arows, Acols, Avals, b, solver, rtol, maxit, pctype, */
  /*     pcopt, x0, opts) can pass additional command-line options in a */
  /*     string to PETSc. */
  /*  */
  /*  SEE ALSO: mptSolve, mptMatCreateAIJFromCRS, mptVecCreateFromArray, */
  /*            mptVecToArray, mptKSPSetup, mptKSPSolve, mptKSPCleanup */
  /* 'mptSolveCRS:88' if nargin==0 */
  /* 'mptSolveCRS:94' if isempty(coder.target) && ~exist(['mptSolveCRS.' mexext], 'file') && ... */
  /* 'mptSolveCRS:95'         exist('run_mptSolveCRS_exe', 'file') */
  /* 'mptSolveCRS:104' Arows = varargin{1}; */
  /* 'mptSolveCRS:105' Acols = varargin{2}; */
  /* 'mptSolveCRS:106' Avals = varargin{3}; */
  /* 'mptSolveCRS:107' b = varargin{4}; */
  /*  Setup KSP */
  /* 'mptSolveCRS:110' if nargin<5 */
  /* 'mptSolveCRS:110' else */
  /* 'mptSolveCRS:110' solver = varargin{5}; */
  /*  Use default */
  /* 'mptSolveCRS:111' if nargin<6 */
  /* 'mptSolveCRS:111' else */
  /* 'mptSolveCRS:111' rtol = varargin{6}; */
  /* 'mptSolveCRS:112' if nargin<7 */
  /* 'mptSolveCRS:112' else */
  /* 'mptSolveCRS:112' maxit = varargin{7}; */
  /* 'mptSolveCRS:113' if nargin<8 */
  /* 'mptSolveCRS:113' else */
  /* 'mptSolveCRS:113' pctype = varargin{8}; */
  /* 'mptSolveCRS:114' if nargin<9 */
  /* 'mptSolveCRS:114' else */
  /* 'mptSolveCRS:114' pcopt = varargin{9}; */
  /* 'mptSolveCRS:116' AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals); */
  AMat = mptMatCreateAIJFromCRS(Arows, Acols, Avals);

  /* 'mptSolveCRS:117' bVec = mptVecCreateFromArray(b); */
  bVec = mptVecCreateFromArray(b);

  /* 'mptSolveCRS:119' if nargin<10 || isempty(varargin{10}) */
  /* 'mptSolveCRS:120' x0Vec = PETSC_NULL_VEC; */
  /*  Obtain PETSC constant NULL of type Vec */
  /* 'PETSC_NULL_VEC:4' coder.inline('always'); */
  /* 'PETSC_NULL_VEC:6' obj = petscGetObject('PETSC_NULL_VEC'); */
  /* petscGetObject Obtain an opaque object in PETSC */
  /*  */
  /*     obj = petscGetObject(name) */
  /*  */
  /* The supported names include: */
  /*  */
  /*  MPI_Comm: PETSC_COMM_SELF, PETSC_COMM_WORLD, MPI_COMM_SELF, MPI_COMM_WORLD */
  /*  */
  /*  Other: */
  /*      PETSC_IGNORE, PETSC_NULL_OPTION, PETSC_NULL_MAT, PETSC_NULL_VEC, */
  /*      PETSC_NULL_INT, PETSC_NULL_REAL */
  /* 'petscGetObject:16' if isempty(coder.target) */
  /* 'petscGetObject:20' switch name */
  /* 'petscGetObject:35' case 'PETSC_NULL_VEC' */
  /* 'petscGetObject:36' [obj, toplevel] = get_obj('Vec', 'NULL', nargout>1); */
  /* 'mptSolveCRS:121' xVec = petscVecDuplicate(bVec); */
  /* Creates a new vector of the same type as an existing vector. */
  /*  */
  /*   [vec_out, errCode] = petscVecDuplicate(vec_in) creates a new vector, but */
  /*      it does not copy the entries of the input vector. The user is */
  /*      responsible freeing the memory by calling petscVecDestroy. */
  /*  */
  /*   SEE ALSO: petscVecCopy, petscVecDestroy, petscVecCreate */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode  VecDuplicate(Vec vec_in, Vec *vec_out) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDuplicate.html */
  /* 'petscVecDuplicate:16' errCode = int32(-1); */
  /* 'petscVecDuplicate:18' if ~isempty(coder.target) */
  /* 'petscVecDuplicate:19' t_vec_out = coder.opaque('Vec'); */
  /* 'petscVecDuplicate:21' errCode = coder.ceval('VecDuplicate', PetscVec(vec_in), coder.wref(t_vec_out)); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  errCode = VecDuplicate(bVec, &t_vec_out);

  /* 'petscVecDuplicate:23' toplevel = nargout>2; */
  /* 'petscVecDuplicate:24' vec_out = PetscVec(t_vec_out, toplevel); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  /* 'petscVecDuplicate:26' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    c_flag = (M2C_DEBUG);
    if (c_flag != 0) {
      /* 'petscVecDuplicate:27' m2c_error('petsc:RuntimeError', 'VecDuplicate returned error code %d\n', errCode) */
      i_m2c_error(errCode);
    }
  }

  /* 'mptSolveCRS:128' if nargin<11 */
  /* 'mptSolveCRS:128' opts = ''; */
  /* 'mptSolveCRS:130' [flag, relres, iter, reshis, times] = mptSolve(AMat, bVec, xVec, solver, ... */
  /* 'mptSolveCRS:131'     double(rtol), int32(maxit), pctype, pcopt, x0Vec, opts); */
  mptSolve(AMat, bVec, t_vec_out, solver, rtol, maxiter, pctype, solpack, NULL,
           &b_flag, &b_relres, &b_iter, reshis, times);

  /* 'mptSolveCRS:133' petscMatDestroy(AMat); */
  /* Frees space taken by a matrix. */
  /*  */
  /*   [mat, errCode] = petscMatDestroy(mat) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleMat, petscVecDestroy */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode MatDestroy(Mat *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Mat/MatDestroy.html */
  /* 'petscMatDestroy:14' errCode = int32(-1); */
  /* 'petscMatDestroy:16' if ~isempty(coder.target) */
  /* 'petscMatDestroy:17' t_mat = PetscMat(mat); */
  /* Map an opaque object into a PETSc Mat object */
  /*  */
  /*   PetscMat() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument type specification for codegen. */
  /*  */
  /*   PetscMat(arg) or PetscMat(arg, false) converts arg into a PETSc Mat object. */
  /*  */
  /*   PetscMat(arg, 'wrap') or PetscMat(arg, true) wraps the arg into an opaque  */
  /*   object. This should be used if the object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscVec */
  /* 'PetscMat:14' coder.inline('always'); */
  /* 'PetscMat:16' mat = m2c_opaque_obj('Mat', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_mat = AMat;

  /* 'petscMatDestroy:19' errCode = coder.ceval('MatDestroy', coder.ref(t_mat)); */
  errCode = MatDestroy(&t_mat);

  /* 'petscMatDestroy:21' toplevel = nargout>2; */
  /* 'petscMatDestroy:22' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    c_flag = (M2C_DEBUG);
    if (c_flag != 0) {
      /* 'petscMatDestroy:23' m2c_error('petsc:RuntimeError', 'MatDestroy returned error code %d\n', errCode) */
      ib_m2c_error(errCode);
    }
  }

  /* 'petscMatDestroy:26' mat = PetscMat(t_mat, toplevel); */
  /* 'mptSolveCRS:134' petscVecDestroy(bVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = bVec;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    c_flag = (M2C_DEBUG);
    if (c_flag != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  /* 'mptSolveCRS:136' x = mptVecToArray(xVec); */
  mptVecToArray(t_vec_out, x);

  /* 'mptSolveCRS:137' petscVecDestroy(xVec); */
  /* Frees space taken by a vector. */
  /*  */
  /*   [vec, errCode] = petscVecDestroy(vec) */
  /*  */
  /*   SEE ALSO: petscVecCreateSeq, petscVecCreateMPI, petscAssembleVec, */
  /*  */
  /*  PETSc C interface: */
  /*    PetscErrorCode VecDestroy(Vec *A) */
  /*  http://www.mcs.anl.gov/petsc/petsc-current/docs/manualpages/Vec/VecDestroy.html */
  /* 'petscVecDestroy:14' errCode = int32(-1); */
  /* 'petscVecDestroy:16' if ~isempty(coder.target) */
  /* 'petscVecDestroy:17' t_vec = PetscVec(vec); */
  /* Map an opaque object into a PETSc Vec object */
  /*  */
  /*   PetscVec() simply returns a definition of the m2c_opaque_type, */
  /*   suitable in the argument specification for codegen. */
  /*  */
  /*   PetscVec(obj) or PetscVec(false) converts obj into a PETSc Vec object. */
  /*  */
  /*   PetscVec(obj, 'wrap') or PetscVec(obj, true) wraps the obj into an opaque  */
  /*   object. This should be used if the opaque object needs to be returned to MATLAB. */
  /*  */
  /*  See also PetscMat */
  /* 'PetscVec:14' coder.inline('always'); */
  /* 'PetscVec:16' vec = m2c_opaque_obj('Vec', varargin{:}); */
  /* Maps between C opaque object and a MATLAB structure. */
  /*  */
  /*   m2c_opaque_obj() or m2c_opaque_obj(type) simply returns a */
  /*   definition of the m2c_opaque_type, suitable in the argument type */
  /*   specification for codegen. */
  /*  */
  /*   m2c_opaque_obj(type, arg) or m2c_opaque_obj(type, arg, false) converts */
  /*   arg into an object of give data type. */
  /*  */
  /*   m2c_opaque_obj(type, arg, 'wrap') or m2c_opaque_obj(type, arg, true) */
  /*   wraps the arg into an opaque object. This should be used if the opaque */
  /*   object needs to be returned to MATLAB. Note that the third argument */
  /*   must be determined at compile time. */
  /*  */
  /*  See also m2c_opaque_array, m2c_opaque_ptr */
  /*  Undocumented use: */
  /*   obj = m2c_opaque_obj(type, arg, n, [sizepe]) wraps n objects */
  /*   into an opaque object. This is for internal use by */
  /*   m2c_opaque_array. Users should use m2c_opaque_array instead. */
  /* 'm2c_opaque_obj:23' coder.inline('always'); */
  /* 'm2c_opaque_obj:26' if nargin<=1 */
  /* 'm2c_opaque_obj:31' if isstruct(arg) && ~isequal(arg.type, type) */
  /* 'm2c_opaque_obj:36' if nargin==3 && ischar(wrap) && ~isequal(wrap, 'wrap') */
  /* 'm2c_opaque_obj:41' if nargin<3 || islogical(wrap) && ~wrap */
  /* 'm2c_opaque_obj:42' if ~isstruct(arg) || isempty(coder.target) */
  /* 'm2c_opaque_obj:43' obj = arg; */
  t_vec = t_vec_out;

  /* 'petscVecDestroy:19' errCode = coder.ceval('VecDestroy', coder.ref(t_vec)); */
  errCode = VecDestroy(&t_vec);

  /* 'petscVecDestroy:21' toplevel = nargout>2; */
  /* 'petscVecDestroy:22' vec = PetscVec(t_vec, toplevel); */
  /* 'petscVecDestroy:24' if errCode && (toplevel || m2c_debug) */
  if (errCode != 0) {
    /* Flag indicating whether m2c_debug is on. */
    /* It is always true within MATLAB. In the generated C code, it is */
    /* turned off by the -DNDEBUG compiler option. It can also be turned on  */
    /* or off by the compiler options -DM2C_DEBUG=1  DM2C_DEBUG=0, respectively. */
    /* 'm2c_debug:7' coder.inline('always'); */
    /* 'm2c_debug:9' if isempty(coder.target) */
    /* 'm2c_debug:11' else */
    /* 'm2c_debug:12' flag = int32(1); */
    /* 'm2c_debug:13' flag = coder.ceval(' ', coder.opaque('int', 'M2C_DEBUG')); */
    c_flag = (M2C_DEBUG);
    if (c_flag != 0) {
      /* 'petscVecDestroy:25' m2c_error('petsc:RuntimeError', 'VecDestroy returned error code %d\n', errCode) */
      jb_m2c_error(errCode);
    }
  }

  *flag = b_flag;
  *relres = b_relres;
  *iter = b_iter;
}

void mptSolveCRS_initialize(void)
{
}

void mptSolveCRS_terminate(void)
{
  /* (no terminate code required) */
}

/* End of code generation (mptSolveCRS.c) */
