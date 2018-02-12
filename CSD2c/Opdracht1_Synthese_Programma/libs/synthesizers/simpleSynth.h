#ifndef SIMPLESYNTH_H_
#define SIMPLESYNTH_H_

#include "synthesizer.h"
#include "../oscillators/sineWave.h"
#include "../oscillators/squareWave.h"

class SimpleSynth : public Synthesizer {
public:
  SimpleSynth();
  ~SimpleSynth();

  void process(float *outputBuffer, int numSamples) override; //zorgt dat de compiler zoekt naar hetgeen wat hij moet overriden (alleen bij C++ 11). -std=c++11

  void setWaveType(int waveType);
  void updatePitch() override; //NOTE Ciska voorstel

private:
  Oscillator *oscPointer;
  SineWave sine;
  SquareWave square;

}; //class

#endif //SIMPLESYNTH_H_
