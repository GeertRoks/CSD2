
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

void Synthesizer::setPitch(float pitch) {
  this->pitch = pitch;
  updatePitch(); //NOTE Ciska voorstel
}//setPitch()

void Synthesizer::setVolume(float volume) {
  this->volume = volume;
} //setVolume()

void Synthesizer::setSampleRate(int sampleRate) {
  this->sampleRate = sampleRate;
} //setSampleRate()

float Synthesizer::getPitch() {
  return this->pitch;
}//getPitch()

float Synthesizer::getVolume() {
  return this->volume;
}//getVolume()

int Synthesizer::getSampleRate() {
  return this->sampleRate;
}//getSampleRate()
