/**
  Simple non-bandlimited Sawtooth oscillator based on oscillator.cpp
*/
#ifndef SAWWAVE_H_
#define SAWWAVE_H_

#include "oscillator.h"

class SawWave : public Oscillator {
public:
  SawWave();
  ~SawWave();

  float getSample() override;
};//class

#endif//SAWWAVE_H_
