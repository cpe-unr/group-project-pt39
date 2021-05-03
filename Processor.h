#ifndef PT39_Processor
#define PT39_Processor

#include <cstdint>
#include <cmath>

class Processor : public ReadWav {
public:
    virtual void processBuffer(unsigned char* buffer, int BUFFER_SIZE) = 0;
};

#endif
