/**
  Blueprint for any synthesizer to be build.
*/
#ifndef SYNTHESIZER_H_
#define SYNTHESIZER_H_

#include <iostream>
#include <cmath>

class Synthesizer {
public:
  Synthesizer();
  ~Synthesizer();

  //audio process method
  virtual void process(float *outputBuffer, int numSamples) = 0;

  void setPitch(float pitch);
  void setVolume(float volume);
  void setSampleRate(int sampleRate);
  void setPitchOffset(int pitchOffset);

protected:
  float getPitch();
  float getVolume();
  int getSampleRate();
  int getPitchOffset();

  virtual void updatePitch() = 0;

  float mtof(int pitch);

private:
  float pitch = 60;
  float volume = 0.5;
  int sampleRate = 44100;
  int pitchOffset = 7;      //amout of midi notes to be added to oscillator 2.

};//class

#endif//SYNTHESIZER_H_
