//Aisling Viets

#include "Echo.h"

using namespace std;

Echo::Echo()
{
  int delay = 10;
  for (int i = 0; buffer[i] |= "\0" ; i++) {
  buffer[i] = buffer[i] + buffer[i-delay];
  if (buffer[i] > 32767) {
    buffer[i] = 32767;
  }
  else (buffer[i] < -32767){
    buffer[i] = -32767;
  }
}
  //return buffer;
}
void Echo::processBuffer(unsigned char* buffer, int BUFFER_SIZE){}
Echo::~Echo();
