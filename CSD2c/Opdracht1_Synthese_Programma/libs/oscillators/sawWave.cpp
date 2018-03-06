
#include "sawWave.h"

SawWave::SawWave() : Oscillator() {
}//SawWave()

SawWave::~SawWave() {
}//~SawWave()

float SawWave::getSample() {
/**
  Function: Calculate the currentsample based the given phase.
*/
  return (phase/Pi) - 1;
}//getSample()
