/**
  Simple sinus oscillator based on oscillator.cpp
*/
#ifndef SINEWAVE_H_
#define SINEWAVE_H_

#include "oscillator.h"

class SineWave : public Oscillator {
public:
  SineWave();
  ~SineWave();

  float getSample() override;
};//class

#endif//SINEWAVE_H_
