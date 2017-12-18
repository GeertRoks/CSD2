
#include "sineWave.h"

// Constructor/Destructor
SineWave::SineWave() : Oscillator() {
  std::cout << "SineWave || constructor" << std::endl;
}//SineWave()

SineWave::~SineWave() {
  std::cout << "SineWave || destructor" << std::endl;
}//~SineWave()



//Functions

int SineWave::getSample() {
  std::cout << "SineWave || getSample()" << std::endl;
  return sin(phase);
}//getSample()
