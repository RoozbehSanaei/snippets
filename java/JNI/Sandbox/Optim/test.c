#include <jni.h>
#include "build/test.h"


JNIEXPORT void JNICALL Java_JavaClass_process(JNIEnv *env, jobject jc) {

  jclass jcClass = (*env)->GetObjectClass(env,jc);
  jfieldID iId = (*env)->GetFieldID(env,jcClass, "i", "I");

  // This way we can get and set the "i" field. Let's double it:
  jint i = (*env)->GetIntField(env,jc, iId);
  (*env)->SetIntField(env,jc, iId, i * 5);

  // The jfieldID of the "a" field (byte array) can be got like this:
  jfieldID aId = (*env)->GetFieldID(env,jcClass, "a", "[B");

  // Get the object field, returns JObject (because Array is instance of Object)
  jintArray arr = (*env)->GetObjectField (env,jc, aId);

  // Cast it to a jdoublearray

  // Get the elements (you probably have to fetch the length of the array as well  
  double * data = (*env)->GetDoubleArrayElements(env,arr, NULL);

  const jsize length = (*env)->GetArrayLength(env,arr);

  for (int o = 0, n = length - 1; o < length; o++, n--) {
  	data[o] = 2*data[o];
  }
  
  // Don't forget to release it 
  (*env)->ReleaseDoubleArrayElements(env,arr, data, 0);

     // Get the Method ID for method "callback", which takes no arg and return void
   jmethodID midCallBack = (*env)->GetMethodID(env, jcClass, "callback", "()V");
   if (NULL == midCallBack) return;
   printf("In C, call back Java's callback()\n");
   // Call back the method (which returns void), baed on the Method ID
   (*env)->CallVoidMethod(env, jc, midCallBack);
}