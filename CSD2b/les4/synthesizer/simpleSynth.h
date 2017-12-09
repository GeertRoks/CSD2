#ifndef _SIMPLESYNTH_H_
#define _SIMPLESYNTH_H_

#include "synthesizer.h"
#include "sineWave.h"

class SimpleSynth : public Synthesizer {
public:
  SimpleSynth();
  ~SimpleSynth();

  void process();

private:
  Oscillator osc;
  SineWave sine;
  int waveType;
  int outputBuffer [];

};

#endif //_SIMPLESYNTH_H_
