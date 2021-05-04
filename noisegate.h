#ifndef NOISEGATE_H
#define NOISEGATE_H

#include "Processor.h"

using namespace std;

class Noisegate: public Processor{
    float threshold;

public:
    /**
    constructor for Noisegate class
     */
    Noisegate();
    /**
    parmaterized constructor for Noisegate
    *@param name-newThreshold- multiplier for what the max min amp can be
     */
    Noisegate(float newThreshold);
    
    /**
     *templated noisegate to handle different types of audio
     *@param name - buffer - of templated type T
     *@param name- buffersize- sent in buffer size
     */
    template <typename T>
    void processBuffer(T buffer, int bufferSize){
        const int maxAmp = 255;

        for(int i = 0; i < bufferSize; i++){
            if (buffer[i] < (threshold * maxAmp)){
                buffer[i] = 0;
        }
    }
}
};

#endif
