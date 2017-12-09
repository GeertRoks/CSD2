#ifndef OSCILLATOR_H_
#define OSCILLATOR_H_

#include <iostream>
#include <cmath>

class Oscillator {
public:
  Oscillator();
  ~Oscillator();

  void setFreq(int Freq, int SampleRate);
  //void getSample();
  void tick();

protected:
  float phase;
  float phaseStep;

private:
  int freq;

}; //class

#endif //OSCILLATOR_H_
