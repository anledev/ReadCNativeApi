#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_anledev_readc_CUtils_textdemo(JNIEnv *env,
                                       jobject /* this */) {
    std::string k1 = "hello C";
    return env->NewStringUTF(k1.c_str());
}