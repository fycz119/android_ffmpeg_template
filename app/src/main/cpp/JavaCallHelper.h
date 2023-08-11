//
// Created by Jackie on 2023/8/7.
//

#ifndef MY_APPLICATION_JAVACALLHELPER_H
#define MY_APPLICATION_JAVACALLHELPER_H


#include <jni.h>
#include "macro.h"

class JavaCallHelper {
public:
    JavaCallHelper(JavaVM *javaVM_, JNIEnv *env_, jobject instance_);

    ~JavaCallHelper();

    void onPrepared(int threadMode);
    void onError(int ret);

private:
    JavaVM *javaVM;
    JNIEnv *env;
    jobject instance;
    jmethodID jmd_prepared;

};



#endif //MY_APPLICATION_JAVACALLHELPER_H
