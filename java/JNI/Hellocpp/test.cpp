#include <jni.h>
#include <stdio.h>
#include "build/test.h"
#include  <iostream>
using namespace std;

 
// Implementation of native method sayHello() of HelloJNI class
JNIEXPORT void JNICALL Java_test_sayHello(JNIEnv *env, jobject thisObj) {
   cout << endl << "Hello World from C++!" << endl << endl;
   return;
}