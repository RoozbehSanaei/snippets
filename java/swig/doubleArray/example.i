/* File : example.i */
%module example
%{
 extern double doubleReference(double doubleArray[]);
%}

%typemap(jtype) double doubleArray[] "double[]"
%typemap(jstype) double doubleArray[] "double[]"
%typemap(javain) double doubleArray[] "$javainput"
%typemap(jni) double doubleArray[] "jdoubleArray"
%typemap(in) double doubleArray[] {
  jboolean isCopy;
  $1 = JCALL2(GetDoubleArrayElements, jenv, $input, &isCopy);
}
%typemap(freearg) double doubleArray[] {
  JCALL3(ReleaseDoubleArrayElements, jenv, $input, $1, 0);
}


extern double doubleReference(double doubleArray[]);