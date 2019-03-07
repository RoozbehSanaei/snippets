#include <jni.h>
#include "build/test.h"
using namespace std;


JNIEXPORT jintArray JNICALL Java_test_loadFile(JNIEnv *env, jobject obj, jintArray oldArray) {
    const jsize length = env->GetArrayLength(oldArray);
    jintArray newArray = env->NewIntArray(length);
    jint *oarr = env->GetIntArrayElements(oldArray, NULL);
    jint *narr = env->GetIntArrayElements(newArray, NULL);

    for (int o = 0, n = length - 1; o < length; o++, n--) {
        narr[n] = oarr[o];
    }

    env->ReleaseIntArrayElements(newArray, narr, NULL);
    env->ReleaseIntArrayElements(oldArray, oarr, NULL);

    return newArray;
}