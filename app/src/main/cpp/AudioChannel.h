//
// Created by Jackie on 2023/8/7.
//

#ifndef MY_APPLICATION_AUDIOCHANNEL_H
#define MY_APPLICATION_AUDIOCHANNEL_H

#include "BaseChannel.h"

class AudioChannel : public BaseChannel{
public:
    AudioChannel(int id);

    ~AudioChannel();

    void start();

    void stop();
};



#endif //MY_APPLICATION_AUDIOCHANNEL_H
