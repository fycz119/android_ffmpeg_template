//
// Created by Jackie on 2023/8/8.
//

#ifndef MY_APPLICATION_MACRO_H
#define MY_APPLICATION_MACRO_H

#include <android/log.h>
//定义释放的宏函数
#define DELETE(object) if(object){delete object; object = 0;}

//定义日志打印宏函数
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, "NEFFMPEG",__VA_ARGS__)

//标记线程模式
#define  THREAD_MAIN 1
#define  THREAD_CHILD 2

#endif //MY_APPLICATION_MACRO_H