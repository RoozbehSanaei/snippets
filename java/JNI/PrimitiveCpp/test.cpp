#include <jni.h>
#include <stdio.h>
#include "build/test.h"
#include  <iostream>
using namespace std;

 
// Implementation of native method sayHello() of HelloJNI class
JNIEXPORT jdouble JNICALL Java_test_average (JNIEnv *env, jobject obj, jint n1, jint n2) {
   jdouble result;
   cout << "In C++, the numbers are " << n1 << " and " << n2 << endl;
   result = ((jdouble)n1 + n2) / 2.0;
   // jint is mapped to int, jdouble is mapped to double
   return result;
}