#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <iostream>
#include <cstdint>
#include <cmath>

class Processor {//:public ReadWav {
public:
    virtual void processBuffer(unsigned char* buffer, int BUFFER_SIZE) = 0;
};

#endif
