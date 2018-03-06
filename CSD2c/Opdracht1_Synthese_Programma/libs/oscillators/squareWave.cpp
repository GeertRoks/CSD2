
#include "squareWave.h"

SquareWave::SquareWave() : Oscillator() {
  std::cout << "SquareWave || Constructor" << std::endl;
}//SquareWave()

SquareWave::~SquareWave() {
  std::cout << "SquareWave || Destructor" << std::endl;
}//~SquareWave()

float SquareWave::getSample() {
/**
  Function: Calculate the currentsample based the given phase.
*/
  if (phase >= 0 && phase < (twoPi * pulseWidth)) {
    return 1;
  } else {
    return -1;
  }
}//getSample()

void SquareWave::setPulseWidth(float pulseWidth) {
  if (pulseWidth >= 0.50 && pulseWidth <= 0.99) {
    this->pulseWidth = pulseWidth;
  } else {
    std::cout << pulseWidth << "is not a valid pulseWidth. Please choose a value from 0.50 until 0.99." << std::endl;
  }
}//setPulseWidth()

float SquareWave::getPulseWidth(){
  return this->pulseWidth;
}//getPulseWidth()
