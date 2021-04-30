#ifndef PT39_Processor
#define PT39_Processor

#include <cstdint>
#include <cmath>
#include "Wav.h"

class Processor {
public:
    virtual void processBuffer(unsigned char* buffer, int bufferSize) = 0;
};

#endif
