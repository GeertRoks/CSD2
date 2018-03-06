
#include "oscillator.h"

Oscillator::Oscillator() {
  std::cout << "Oscillator || constructor" << std::endl;
}//Oscillator()

Oscillator::Oscillator(float freq) {
  std::cout << "Oscillator || constructor" << std::endl;
  setFreq(freq, this->sampleRate);
}//Oscillator(float)

Oscillator::~Oscillator() {
  std::cout << "Oscillator || destructor" << std::endl;
}//~Oscillator()


void Oscillator::setFreq(float freq, int sampleRate) {
/**
  Function: Change the frequency of the oscillator.
  Refrence: http://basicsynth.com/index.php?page=basic
*/
  std::cout << "Oscillator || setFreq()" << std::endl;
  this->freq = freq;
  this->sampleRate = sampleRate;

  phaseStep = (twoPi / this->sampleRate) * this->freq;
}//setFreq()

void Oscillator::tick() {
/**
  Function: Increase the phase index.
*/
  phase = fmod((phase + phaseStep), twoPi);
}//tick()
