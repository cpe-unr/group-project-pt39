#ifndef PT39_Echo
#define PT39_Echo

#include "Processor.h"
#include <iostream>
#include <cstdint>
#include <cmath>

<<<<<<< HEAD

class Echo: public Processor{
=======
/**
  * This is the Echo class.
*/

class Echo() : public Processor{
>>>>>>> 2d7f6bbe9fe43e0c3ad8bf77f0078396604e5061
public:
  Echo();
  /**
  * Uses processBuffer to get buffer data and size for processing
  * @param buffer - contains .wav file Data, array of unsigned char*
  * @param BUFFER_SIZE - contains size of buffer, integer
*/
  void processBuffer(unsigned char* buffer, int BUFFER_SIZE);
};

#endif
