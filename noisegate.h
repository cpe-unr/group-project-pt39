#ifndef NOISEGATE_H
#define NOISEGATE_H

#include "Processor.h"

//using namespace std;

class Noisegate: public Processor{
    float threshold;

public:
    Noisegate();
    Noisegate(float newThreshold);

template <typename T>
void processBuffer(T buffer, int bufferSize){
    const int maxAmp = 255;

    for(int i = 0; i < bufferSize; i++){
        if (buffer[i] > (threshold * maxAmp)){
            buffer[i] = 0;
        }
    }
}
};

#endif
