
#include "sawWave.h"

SawWave::SawWave() : Oscillator() {
  std::cout << "SawWave || Constructor" << std::endl;
}//SawWave()

SawWave::~SawWave() {
  std::cout << "SawWave || Destructor" << std::endl;
}//~SawWave()

float SawWave::getSample() {
/**
  Function: Calculate the currentsample based the given phase.
*/
  return (phase/Pi) - 1;
}//getSample()
