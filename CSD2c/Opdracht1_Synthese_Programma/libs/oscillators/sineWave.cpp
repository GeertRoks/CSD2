
#include "sineWave.h"

SineWave::SineWave() : Oscillator() {
  std::cout << "SineWave || constructor" << std::endl;
}//SineWave()

SineWave::~SineWave() {
  std::cout << "SineWave || destructor" << std::endl;
}//~SineWave()

float SineWave::getSample() {
/**
  Function: Calculate the currentsample based the given phase.
*/
  return sin(phase);
}//getSample()
