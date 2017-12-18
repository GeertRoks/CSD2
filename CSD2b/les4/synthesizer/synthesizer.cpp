
#include "synthesizer.h"

// Constructor/Destructor
Synthesizer::Synthesizer() {
  std::cout << "Synthesizer || constructor" << std::endl;
  sampleRate = 44100; //Default: 44100Hz as sampleRate

}//Synthesizer()

Synthesizer::~Synthesizer() {
  std::cout << "Synthesizer || destructor" << std::endl;

}//~Synthesizer()


//Functions

void Synthesizer::setSampleRate(int sampleRate) {
  this->sampleRate = sampleRate;
} //setSampleRate()
