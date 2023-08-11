#include <jni.h>
#include <string>
#include "NEFFmpeg.h" 
extern "C"{
#include "include/libavutil/avutil.h"
}

JavaVM *javaVM = 0;
JavaCallHelper *javaCallHelper = 0;
NEFFmpeg *ffmpeg = 0;

jint JNI_OnLoad(JavaVM *vm, void *reserved) {
    javaVM = vm;
    return JNI_VERSION_1_4;
}

extern "C"
JNIEXPORT void JNICALL
Java_com_example_myapplication_NEPlayer_prepareNative(
        JNIEnv *env,
        jobject instance,
        jstring dataSource_) {
    const char *dataSource = env ->GetStringUTFChars(dataSource_, 0);

    javaCallHelper = new JavaCallHelper(javaVM, env, instance);
    ffmpeg = new NEFFmpeg(javaCallHelper, const_cast<char *>(dataSource));
    ffmpeg->prepare();

    env->ReleaseStringUTFChars(dataSource_, dataSource);
}
extern "C"
JNIEXPORT void JNICALL
Java_com_example_myapplication_NEPlayer_startNative(JNIEnv *env, jobject thiz) {
    // TODO: implement startNative()
    if (ffmpeg){
        ffmpeg->start();
    }
}
extern "C"
JNIEXPORT void JNICALL
Java_com_example_myapplication_NEPlayer_staticTest(JNIEnv *env, jclass clazz) {
    // TODO: implement staticTest()
}