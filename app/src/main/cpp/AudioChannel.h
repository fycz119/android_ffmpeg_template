#ifndef NE_PLAYER_1_AUDIOCHANNEL_H
#define NE_PLAYER_1_AUDIOCHANNEL_H


#include "BaseChannel.h"

class AudioChannel : public BaseChannel{
public:
    AudioChannel(int id,AVCodecContext *codecContext);

    ~AudioChannel();

    void start();

    void stop();


};


#endif //NE_PLAYER_1_AUDIOCHANNEL_H
