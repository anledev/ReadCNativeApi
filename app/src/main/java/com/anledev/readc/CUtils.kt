package com.anledev.readc

class CUtils {
    companion object {
        init {
            System.loadLibrary("native-lib")
        }

        fun getTextDemo(): String{
            return CUtils().textdemo()
        }
    }

    private external fun textdemo(): String

}