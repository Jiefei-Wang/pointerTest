#include <stdlib.h>
#include <Rinternals.h>
#include <R_ext/RS.h>

SEXP test() {
  Rprintf("start of test\n");
  double *x = (double*) Calloc(10, double);
  Rprintf("memory allocation finished\n");
  SEXP res = R_MakeExternalPtr((void *)x, R_NilValue, R_NilValue);
  Rprintf("R object has been created\n");
  return(res);
}

#include <R_ext/Rdynload.h>

static const R_CallMethodDef callMethods[] = {
    {".test", (DL_FUNC) & test, 0},
    {NULL, NULL, 0}
};

void R_init_pointerTest(DllInfo * info)
{
    R_registerRoutines(info, NULL, callMethods, NULL, NULL);
}


