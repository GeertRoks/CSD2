#ifndef OSCILLATOR_H_
#define OSCILLATOR_H_

#include <iostream>
#include <cmath>

class Oscillator {
public:
  Oscillator();
  ~Oscillator();

  void setFreq(int freq, int sampleRate);
  void setPhase();
  void setWave(int waveType)
  void getSample();
  void tick();

protected:
  double phase;
  double phaseStep;

private:
  int mFreq;
  int sampleRate;

}; //class

#endif //OSCILLATOR_H_
