
#include "oscillator.h"

# define M_PIl          3.141592653589793238462643383279502884L /* pi */

// Constructor/Destructor
Oscillator::Oscillator() {
  std::cout << "Oscillator || constructor" << std::endl;

  phase = 0;
  phaseStep = 0;
}
Oscillator::~Oscillator() {
  std::cout << "Oscillator || destructor" << std::endl;
}

//Functions
void Oscillator::setFreq(int freq, int sampleRate) {
  std::cout << "Oscillator || setFreq()" << std::endl;

  phaseStep = (2 * M_PIl * freq) / sampleRate;

  std::cout << "Oscillator || phaseStep = " << phaseStep << std::endl;
  std::cout << "Oscillator || freq = " << freq << std::endl;
}
/*
void Oscillator::getSample() {
  std::cout << "Oscillator || getSample()" << std::endl;
}//getSample()
*/
void Oscillator::tick() {
  std::cout << "Oscillator || tick()" << std::endl;

  phase = fmod((phase + phaseStep), 2 * M_PIl);
    std::cout << "Oscillator || phase = " << phase << std::endl;
}//tick()
