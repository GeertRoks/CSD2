#ifndef _SIMPLESYNTH_H_
#define _SIMPLESYNTH_H_

#include "synthesizer.h"
#include "sineWave.h"

class SimpleSynth : public Synthesizer {
public:
  SimpleSynth();
  ~SimpleSynth();

  void process(void *outputBuffer, int numSamples) override; //zorgt dat de compiler zoekt naar hetgeen wat hij moet overriden (alleen bij C++ 11). -std=c++11
  void setWaveType(int waveType);

private:
  Oscillator *oscPointer;
  SineWave sine;
  SquareWave square;

}; //class

#endif //_SIMPLESYNTH_H_
