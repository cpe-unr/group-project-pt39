#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <iostream>
#include <cstdint>
#include <cmath>


/**
  * This is the Processor class (virtual, abstract).
*/

class Processor {

public:
  /**
  * Gets buffer data and size to pass to classes which inherit from Processor
  * @param buffer - contains .wav file Data, array of unsigned char*
  * @param BUFFER_SIZE - contains size of buffer, integer
*/
    virtual void processBuffer(unsigned char* buffer, int BUFFER_SIZE) = 0;
};

#endif
