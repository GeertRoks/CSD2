/**
  Subtractive synthesizer. Derived from synthesizer.
*/
#ifndef SUBSYNTH_H_
#define SUBSYNTH_H_

#include "synthesizer.h"

#include "../oscillators/sineWave.h"
#include "../oscillators/squareWave.h"
#include "../oscillators/sawWave.h"
#include "../filters/lowPass.h"
#include "../filters/highPass.h"

class SubSynth : public Synthesizer {
public:
  SubSynth();
  ~SubSynth();

  void process(float *outputBuffer, int numSamples) override;

  void setWaveType1(int waveType);
  void setWaveType2(int waveType);
  void updatePitch() override;

private:
  //oscillators
  Oscillator *oscPointer1;
  Oscillator *oscPointer2;
  SineWave sine1;
  SineWave sine2;
  SquareWave square1;
  SquareWave square2;
  SawWave saw1;
  SawWave saw2;

  //filters
  LowPass lowpass;
  HighPass highpass;
  Filter *filter = &highpass;

}; //class

#endif //SubSynth_H_

/* TODO:
    - Make array of oscillators with all waveforms in it.
    - combine setWaveType1 and setWaveType2 so it's modular for possibly more oscillators.
    - develop setFreqcurve() function
*/
