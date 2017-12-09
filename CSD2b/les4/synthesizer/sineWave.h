#ifndef SINEWAVE_H_
#define SINEWAVE_H_

#include "oscillator.h"

class SineWave : public Oscillator {
public:
  SineWave();
  ~SineWave();

  int getSample();

private:

}; //class

#endif //SINEWAVE_H_
