// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// code.cpp
list device_info();
extern "C" SEXP _metalme_device_info() {
  BEGIN_CPP11
    return cpp11::as_sexp(device_info());
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_metalme_device_info", (DL_FUNC) &_metalme_device_info, 0},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_metalme(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
