//
// Created by Jackie on 2023/8/7.
//

#ifndef MY_APPLICATION_VIDEOCHANNEL_H
#define MY_APPLICATION_VIDEOCHANNEL_H


#include "BaseChannel.h"

class VideoChannel : public BaseChannel {
public:
    VideoChannel(int id);

    ~VideoChannel();

    void start();

    void stop();
};


#endif //MY_APPLICATION_VIDEOCHANNEL_H
