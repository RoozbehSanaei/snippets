#include <jni.h>
#include "build/test.h"


JNIEXPORT void JNICALL Java_test_process(JNIEnv *env, jclass c, jobject jc) {

  jclass jcClass = (*env)->GetObjectClass(env,jc);
  jfieldID iId = (*env)->GetFieldID(env,jcClass, "i", "I");

  // This way we can get and set the "i" field. Let's double it:
  jint i = (*env)->GetIntField(env,jc, iId);
  (*env)->SetIntField(env,jc, iId, i * 2);

  // The jfieldID of the "a" field (byte array) can be got like this:
  jfieldID aId = (*env)->GetFieldID(env,jcClass, "a", "[B");

  // Get the object field, returns JObject (because Array is instance of Object)
  jobject arr = (*env)->GetObjectField (env,jc, aId);

  // Cast it to a jdoublearray

  // Get the elements (you probably have to fetch the length of the array as well  
  double * data = (*env)->GetDoubleArrayElements(env,arr, NULL);

  const jsize length = (*env)->GetArrayLength(env,arr);

  for (int o = 0, n = length - 1; o < length; o++, n--) {
  	data[o] = 2*data[o];
  }
  
  // Don't forget to release it 
  (*env)->ReleaseDoubleArrayElements(env,arr, data, 0);
}