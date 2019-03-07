#include <jni.h>
#include <stdio.h>
#include "build/test.h"
 
JNIEXPORT void JNICALL Java_newclass_modifyInstanceVariable
          (JNIEnv *env, jobject thisObj) {
   // Get a reference to this object's class
   jclass thisClass = (*env)->GetObjectClass(env, thisObj);
 
   // Get the Field ID of the instance variables "message"
   jfieldID fidMessage = (*env)->GetFieldID(env, thisClass, "msg", "Ljava/lang/String;");
   if (NULL == fidMessage) return;
 
    // Get the object given the Field ID
   jstring message = (*env)->GetObjectField(env, thisObj, fidMessage);
 
   // Create a C-string with the JNI String
   const char *cStr = (*env)->GetStringUTFChars(env, message, NULL);
   if (NULL == cStr) return;
 
   printf("In C, the string is %s\n", cStr);
   (*env)->ReleaseStringUTFChars(env, message, cStr);
 
   // Create a new C-string and assign to the JNI string
   message = (*env)->NewStringUTF(env, "Hello from C");
   if (NULL == message) return;
 
   // modify the instance variables
   (*env)->SetObjectField(env, thisObj, fidMessage, message);
}