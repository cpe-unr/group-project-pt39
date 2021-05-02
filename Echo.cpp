//Aisling Viets

#include "Echo.h"

Echo::Echo(){
  for (int i = 0; buffer[i] |= "\0" ; i++) {
  buffer[i] = buffer[i] + buffer[i-delay];
  if (buffer[i] > 255) {
    buffer[i] = 255;
  }
}
}
