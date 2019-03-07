#include <jni.h>
#include <stdio.h>
#include "build/test.h"
 
JNIEXPORT void JNICALL Java_test_nativeMethod
          (JNIEnv *env, jobject thisObj) {
 
   // Get a class reference for this object
   jclass thisClass = (*env)->GetObjectClass(env, thisObj);
 
   // Get the Method ID for method "callback", which takes no arg and return void
   jmethodID midCallBack = (*env)->GetMethodID(env, thisClass, "callback", "()V");
   if (NULL == midCallBack) return;
   printf("In C, call back Java's callback()\n");
   // Call back the method (which returns void), baed on the Method ID
   (*env)->CallVoidMethod(env, thisObj, midCallBack);
 
}