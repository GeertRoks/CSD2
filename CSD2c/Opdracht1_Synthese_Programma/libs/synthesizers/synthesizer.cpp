
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
  updatePitch(); //NOTE
}//setPitch()

void Synthesizer::setVolume(float volume) {
  this->volume = volume;
} //setVolume()

void Synthesizer::setSampleRate(int sampleRate) {
  this->sampleRate = sampleRate;
} //setSampleRate()

void Synthesizer::setPitchOffset(int pitchOffset) {
  this->pitchOffset = pitchOffset;
}//setCoarse()



float Synthesizer::getPitch() {
  return this->pitch;
}//getPitch()

float Synthesizer::getVolume() {
  return this->volume;
}//getVolume()

int Synthesizer::getSampleRate() {
  return this->sampleRate;
}//getSampleRate()

int Synthesizer::getPitchOffset() {
  return this->pitchOffset;
}//getCoarse()



float Synthesizer::mtof(int pitch) {
  //Refrence: https://newt.phys.unsw.edu.au/jw/notes.html
  return pow(2.0, (pitch - 69.0)/12.0) * 440;

}//mtof()
