#ifndef SQUAREWAVE_H_
#define SQUAREWAVE_H_

#include "oscillator.h"

class SquareWave : public Oscillator {
public:
  SquareWave();
  ~SquareWave();

  float getSample() override;

private:

}; //class

#endif //SQUAREWAVE_H_
