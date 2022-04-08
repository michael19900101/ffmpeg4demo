#include <jni.h>
#include <string>

extern "C"{
#include "ffmpeg/include/libavcodec/avcodec.h"
#include "ffmpeg/include/libavformat/avformat.h"
#include "ffmpeg/include/libavutil/avutil.h"
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_ffmpeg4demo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    const AVCodec *codec = NULL;
    hello= av_version_info();
    return env->NewStringUTF(hello.c_str());
}