#include "noisegate.h"

Noisegate::Noisegate(){
    threshold = .10;
}

Noisegate::Noisegate(float newThreshold){
    threshold = newThreshold;
}
