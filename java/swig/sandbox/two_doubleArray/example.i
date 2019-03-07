/* File : example.i */
%module example
%{
 extern double doubleReference(double doubleArray1[],double doubleArray2[]);
%}

%typemap(jtype) double doubleArray1[] "double[]"
%typemap(jstype) double doubleArray1[] "double[]"
%typemap(javain) double doubleArray1[] "$javainput"
%typemap(jni) double doubleArray1[] "jdoubleArray"
%typemap(in) double doubleArray1[] {
  jboolean isCopy;
  $1 = JCALL2(GetDoubleArrayElements, jenv, $input, &isCopy);
}
%typemap(freearg) double doubleArray1[] {
  JCALL3(ReleaseDoubleArrayElements, jenv, $input, $1, 0);
}


%typemap(jtype) double doubleArray2[] "double[]"
%typemap(jstype) double doubleArray2[] "double[]"
%typemap(javain) double doubleArray2[] "$javainput"
%typemap(jni) double doubleArray2[] "jdoubleArray"
%typemap(in) double doubleArray2[] {
  jboolean isCopy;
  $1 = JCALL2(GetDoubleArrayElements, jenv, $input, &isCopy);
}
%typemap(freearg) double doubleArray2[] {
  JCALL3(ReleaseDoubleArrayElements, jenv, $input, $1, 0);
}


extern double doubleReference(double doubleArray1[],double doubleArray1[]);