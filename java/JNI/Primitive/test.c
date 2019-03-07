#include <jni.h>
#include <stdio.h>
#include "build/test.h"
 
// Implementation of native method sayHello() of HelloJNI class
JNIEXPORT jdouble JNICALL Java_test_average(JNIEnv *env, jobject thisObj,jint n1, jint n2) {
   printf("\nHello World!\n\n");
   jdouble result;
   printf("In C, the numbers are %d and %d\n", n1, n2);
   result = ((jdouble)n1 + n2) / 2.0;
   // jint is mapped to int, jdouble is mapped to double
   return result;}