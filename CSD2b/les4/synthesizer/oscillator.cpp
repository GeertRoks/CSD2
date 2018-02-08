
#include "oscillator.h"


// Constructor/Destructor
Oscillator::Oscillator() {
  std::cout << "Oscillator || constructor" << std::endl;

  phase = 0;
  phaseStep = 0;

  //setFreq(1000, this->sampleRate); //Default: 1000 Hz as frequency.
}//Oscillator()

Oscillator::Oscillator(float freq) {
  std::cout << "Oscillator || constructor" << std::endl;

  phase = 0;
  phaseStep = 0;

  setFreq(freq, this->sampleRate);
}//Oscillator()

Oscillator::~Oscillator() {
  std::cout << "Oscillator || destructor" << std::endl;
}//~Oscillator()



//Functions
void Oscillator::setFreq(float freq, int sampleRate) {
  std::cout << "Oscillator || setFreq()" << std::endl;

  this->freq = freq;
  this->sampleRate = sampleRate;

  std::cout << "freq: " << this->freq << ", Samplerate: " << this->sampleRate << std::endl;

  //Refrence: http://basicsynth.com/index.php?page=basic

  phaseStep = (twoPi / this->sampleRate) * this->freq;

  std::cout << "Oscillator || phaseStep = " << phaseStep << std::endl;
}//setFreq()

void Oscillator::tick() {
//  std::cout << "Oscillator || tick()" << std::endl;

  phase = fmod((phase + phaseStep), twoPi);

//  std::cout << "Oscillator || phase = " << phase << std::endl;
}//tick()
