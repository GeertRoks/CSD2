#ifndef SINEWAVE_H_
#define SINEWAVE_H_

#include "oscillator.h"

class SineWave : public Oscillator {
public:
  SineWave();
  ~SineWave();

  void getSample();

};

#endif //SINEWAVE_H_
