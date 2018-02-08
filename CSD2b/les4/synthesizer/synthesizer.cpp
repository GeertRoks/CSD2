
#include "synthesizer.h"

// Constructor/Destructor
Synthesizer::Synthesizer() {
  std::cout << "Synthesizer || constructor" << std::endl;

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

float Synthesizer::mtof(int pitch) {
  //fm  =  2^((m−69)/12) * 440 Hz
  //Refrence: https://newt.phys.unsw.edu.au/jw/notes.html
  float macht = pow(2.0, (pitch - 69.0)/12.0);
  std::cout << "Synthesizer || mtof(), macht = " << macht << std::endl;
  return macht * 440;

}//mtof()
