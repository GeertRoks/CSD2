#ifndef SQUAREWAVE_H_
#define SQUAREWAVE_H_

#include "oscillator.h"

class SquareWave : public Oscillator {
public:
  SquareWave();
  ~SquareWave();

  float getSample() override;

  void setPulseWidth(float pulseWidth);
  float getPulseWidth();

private:
  float pulseWidth = 0.5;
}; //class

#endif //SQUAREWAVE_H_
