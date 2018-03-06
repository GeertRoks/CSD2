
#include "sineWave.h"

SineWave::SineWave() : Oscillator() {
}//SineWave()

SineWave::~SineWave() {
}//~SineWave()

float SineWave::getSample() {
/**
  Function: Calculate the currentsample based the given phase.
*/
  return sin(phase);
}//getSample()
