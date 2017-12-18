#ifndef OSCILLATOR_H_
#define OSCILLATOR_H_

#include <iostream>
#include <cmath>

class Oscillator {
public:
  Oscillator();
  Oscillator(float freq);
  ~Oscillator();

  virtual float getSample() = 0;
  void tick();

  void setFreq(float freq, int sampleRate);
  void setWave(int waveType);

protected:
  double phase;
  double phaseStep;

private:
  float freq;
  int sampleRate;

}; //class

#endif //OSCILLATOR_H_
