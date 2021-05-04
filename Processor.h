#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <iostream>
#include <cstdint>
#include <cmath>

<<<<<<< HEAD
class Processor :public ReadWav {
=======
/**
  * This is the Processor class (virtual, abstract).
*/

class Processor : public ReadWav {
>>>>>>> 2d7f6bbe9fe43e0c3ad8bf77f0078396604e5061
public:
  /**
  * Gets buffer data and size to pass to classes which inherit from Processor
  * @param buffer - contains .wav file Data, array of unsigned char*
  * @param BUFFER_SIZE - contains size of buffer, integer
*/
    virtual void processBuffer(unsigned char* buffer, int BUFFER_SIZE) = 0;
};

#endif
