
#ifndef SYNTHESIZER_H_
#define SYNTHESIZER_H_

#include <iostream>
#include <cmath>

class Synthesizer {
public:
  Synthesizer();
  ~Synthesizer();

  //audio process method
  virtual void process(float *outputBuffer, int numSamples) = 0; //pure virtual (heeft geen implementatie nodig)

  void setPitch(float pitch);
  void setVolume(float volume);
  void setSampleRate(int sampleRate);
  virtual void updatePitch() = 0; //NOTE Ciska voorstel

  float getPitch();
  float getVolume();
  int getSampleRate();

  float mtof(int pitch);


private:
  float pitch = 60;
  float volume = 0.5;
  int sampleRate = 44100;

}; //class

#endif //SYNTHESIZER_H_
