/* File : example.i */
%module example
%{
 extern int intReference(int intArray[]);
%}

%typemap(jtype) int intArray[] "int[]"
%typemap(jstype) int intArray[] "int[]"
%typemap(javain) int intArray[] "$javainput"
%typemap(jni) int intArray[] "jintArray"
%typemap(in) int intArray[] {
  jboolean isCopy;
  $1 = JCALL2(GetIntArrayElements, jenv, $input, &isCopy);
}
%typemap(freearg) int intArray[] {
  JCALL3(ReleaseIntArrayElements, jenv, $input, $1, 0);
}


extern int intReference(int intArray[]);