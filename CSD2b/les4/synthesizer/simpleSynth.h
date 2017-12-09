#ifndef _SIMPLESYNTH_H_
#define _SIMPLESYNTH_H_

#include "synthesizer.h"
#include "sineWave.h"

class SimpleSynth : public Synthesizer {
public:
  SimpleSynth(float SampleRate);
  ~SimpleSynth();

  void process();

private:
  //Oscillator osc;
  SineWave sine;
  int waveType;

}; //class

#endif //_SIMPLESYNTH_H_
