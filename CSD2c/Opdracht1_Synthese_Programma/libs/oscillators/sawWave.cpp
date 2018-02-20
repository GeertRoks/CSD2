
#include "sawWave.h"

//Constructor/Destructor
SawWave::SawWave() : Oscillator() {
  std::cout << "SawWave || Constructor" << std::endl;
} //SawWave()

SawWave::~SawWave() {
  std::cout << "SawWave || Destructor" << std::endl;
} //~SawWave()

//Functions

float SawWave::getSample() {
  //std::cout << "SawWave || getSample" << std::endl;

  return (phase/Pi) - 1;
} //getSample()
