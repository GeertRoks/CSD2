
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
  return pow(2, 15) * sin(phase); //16 bit (2^15 because (2^16)/2 half range for upperpart, other half for under)
}//getSample()
