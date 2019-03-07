%module(directors="1") example
%{
#include "example.h"
%}


%typemap(jtype) double doubleArray[] "double[]"
%typemap(jstype) double doubleArray[] "double[]"
%typemap(javain) double doubleArray[] "$javainput"
%typemap(javaout) double doubleArray[] "$javaoutput"
%typemap(jni) double doubleArray[] "jdoubleArray"
%typemap(in) double doubleArray[] {
  jboolean isCopy;
  $1 = JCALL2(GetDoubleArrayElements, jenv, $input, &isCopy);
}
%typemap(out) double doubleArray1[] {
  JCALL3(ReleaseDoubleArrayElements, jenv, $output, $1, 0);
}




/* turn on director wrapping Callback */
%feature("director") Callback;

%include "example.h"



