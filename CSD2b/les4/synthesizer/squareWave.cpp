
#include "squareWave.h"

//Constructor/Destructor
SquareWave::SquareWave() : Oscillator() {
  std::cout << "SquareWave || Constructor" << std::endl;
} //SquareWave()

SquareWave::~SquareWave() {
  std::cout << "SquareWave || Destructor" << std::endl;
} //~SquareWave()



//Functions

void SquareWave::getSample() {
  std::cout << "SquareWave || getSample()" << std::endl;

}
