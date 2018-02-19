
#include "sawWave.h"

//# define M_PIl          3.141592653589793238462643383279502884L /* pi */

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
