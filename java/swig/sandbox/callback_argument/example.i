/* File : example.i */

/* This file has a few "typical" uses of C++ references. */

%module(directors="1") example
%{
#include "example.h"
%}

/* turn on director wrapping Callback */
%feature("director") Callback;




%typemap(jtype) double doubleArray[] "double[]"
%typemap(jstype) double doubleArray[] "double[]"
%typemap(javain) double doubleArray[] "$javainput"
%typemap(javaout) double doubleArray[] "$javaoutput"
%typemap(jni) double doubleArray[] "jdoubleArray"
%typemap(in) double doubleArray[] {
  jboolean isCopy;
  $1 = JCALL2(GetDoubleArrayElements, jenv, $input, &isCopy);
}
%typemap(freearg) double doubleArray[] {
  JCALL3(ReleaseDoubleArrayElements, jenv, $input, $1, 0);
}



class Callback {
public:
  virtual void run(double doubleArray[]) { std::cout << "Callback::run()" << std::endl; }
};

/* This helper function calls an overloaded operator */
%inline %{

void call(double doubleArray[],Callback *_callback0) { if (_callback0) _callback0->run(doubleArray); }

%}

/* Wrapper around an array of vectors class */
