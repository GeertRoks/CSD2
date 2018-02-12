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
  //void setSampleRate(int sampleRate);

protected:
  double phase;
  double phaseStep;

private:
  float freq;
  int sampleRate;
  static constexpr double twoPi = 2 * 3.14159265358979323846;

}; //class

#endif //OSCILLATOR_H_
