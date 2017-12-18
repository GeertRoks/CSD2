
#include "oscillator.h"

# define M_PIl          3.141592653589793238462643383279502884L /* pi */

// Constructor/Destructor
Oscillator::Oscillator() {
  std::cout << "Oscillator || constructor" << std::endl;

  phase = 0;
  phaseStep = 0;

  setFreq(1000, this->sampleRate);
}//Oscillator()

Oscillator::~Oscillator() {
  std::cout << "Oscillator || destructor" << std::endl;
}//~Oscillator()



//Functions
void Oscillator::setFreq(int freq, int sampleRate) {
  std::cout << "Oscillator || setFreq()" << std::endl;

  this->freq = freq;
  this->sampleRate = sampleRate;

  //Refrence: http://basicsynth.com/index.php?page=basic

  phaseStep = (2 * M_PIl / this->sampleRate) * this->freq;

  std::cout << "Oscillator || phaseStep = " << phaseStep << std::endl;
}//setFreq()


void Oscillator::getSample() {
  std::cout << "Oscillator || getSample()" << std::endl;
}//getSample()


void Oscillator::tick() {
  std::cout << "Oscillator || tick()" << std::endl;

  phase = fmod((phase + phaseStep), 2 * M_PIl);

  std::cout << "Oscillator || phase = " << phase << std::endl;
}//tick()
