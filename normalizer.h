#ifndef NORMALIZER_H
#define NORMALIZER_H

#include "Processor.h"

using namespace std;

class Normalizer :public Processor{

public:
    Normalizer();
   
    template<typename T>
    void processBuffer(T buffer, int bufferSize){

    int max = 0;
    for(int i = 0; i < bufferSize; i++){
        if (buffer[i] > max){
            max =  buffer[i];
        }
  }
  int multiplier = 255/max;

   for(int i = 0; i < bufferSize; i++){
        buffer[i] =  buffer[i] * multiplier;
    }
}
};
#endif
