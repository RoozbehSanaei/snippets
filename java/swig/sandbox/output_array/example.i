%module example

%{
#include "example.h"
%}

%typemap(in,numinputs=0,noblock=1) int *data_len {
   int temp_len;
   $1 = &temp_len;
}

%typemap(jstype) const double *get_data "double[]"
%typemap(jtype) const double *get_data "double[]"
%typemap(jni) const double *get_data "jdoubleArray"
%typemap(javaout) const double *get_data {
  return $jnicall;
}
%typemap(out) const double *get_data {
  $result = JCALL1(NewDoubleArray, jenv, temp_len);
  JCALL4(SetDoubleArrayRegion, jenv, $result, 0, temp_len, $1);
  // If the result was malloc()'d free it here
}

%include "example.h"
