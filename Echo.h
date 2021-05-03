#ifndef PT39_Echo
#define PT39_Echo

#include <iostream>
#include <cstdint>
#include <cmath>

class Echo() : public Processor{
public:
  Echo();
  void processBuffer(unsigned char* buffer, int BUFFER_SIZE);
};

#endif
