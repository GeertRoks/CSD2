
#include "squareWave.h"

# define M_PIl          3.141592653589793238462643383279502884L /* pi */

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
  if (phase >= 0 && phase < M_PI) {
    return 1;
  } else {
    return -1;
  }
}
