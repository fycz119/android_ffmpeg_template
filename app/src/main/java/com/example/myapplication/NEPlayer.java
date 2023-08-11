package com.example.myapplication;

public class NEPlayer {
    // Used to load the 'myapplication' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    private String dataSource;

    public String getDataSource() {
        return dataSource;
    }

    public void setDataSource(String dataSource) {
        this.dataSource = dataSource;
    }

    public void prepare() {
        prepareNative(dataSource);
    }


    /**
     * 开始播放
     */
    public void start() {
        startNative();
    }

    /**
     * 供native反射调用
     * 表示播放器准备好了可以开始播放了
     */
    public void onPrepared() {
        if (onpreparedListener != null) {
            onpreparedListener.onPrepared();
        }
    }

    void setOnpreparedListener(OnpreparedListener onpreparedListener) {
        this.onpreparedListener = onpreparedListener;
    }


    interface OnpreparedListener {
        void onPrepared();
    }

    private OnpreparedListener onpreparedListener;

    // Error
    private OnErrorListener onErrorListener;
    interface OnErrorListener {
        void onError();
    }

    void setOnErrorListener(OnErrorListener onErrorListener) {
        this.onErrorListener = onErrorListener;
    }

    private native void prepareNative(String dataSource);
    private native void startNative();
    public  static native void staticTest();
}
