
#include "squareWave.h"

//# define M_PIl          3.141592653589793238462643383279502884L /* pi */

//Constructor/Destructor
SquareWave::SquareWave() : Oscillator() {
  std::cout << "SquareWave || Constructor" << std::endl;
} //SquareWave()

SquareWave::~SquareWave() {
  std::cout << "SquareWave || Destructor" << std::endl;
} //~SquareWave()

//Functions

float SquareWave::getSample() {
  //std::cout << "SquareWave || getSample" << std::endl;
  if (phase >= 0 && phase < (twoPi * pulseWidth)) {
    return 1;
  } else {
    return -1;
  }
} //getSample()

void SquareWave::setPulseWidth(float pulseWidth) {
  if (pulseWidth >= 0.5 && pulseWidth <= 0.99) {
    this->pulseWidth = pulseWidth;
  } else {
    std::cout << pulseWidth << "is not a valid pulseWidth. Please choose a value from 0.5 until 0.99." << std::endl;
  }
}//setPulseWidth()

float SquareWave::getPulseWidth(){
  return this->pulseWidth;
}//getPulseWidth()
