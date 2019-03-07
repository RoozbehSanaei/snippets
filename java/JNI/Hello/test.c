#include <jni.h>
#include <stdio.h>
#include "build/test.h"
 
// Implementation of native method sayHello() of HelloJNI class
JNIEXPORT void JNICALL Java_test_sayHello(JNIEnv *env, jobject thisObj) {
   printf("\nHello World!\n\n");
   return;
}