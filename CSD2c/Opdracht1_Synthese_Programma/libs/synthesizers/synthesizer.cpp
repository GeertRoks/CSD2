
#include "synthesizer.h"

Synthesizer::Synthesizer() {
}//Synthesizer()

Synthesizer::~Synthesizer() {
}//~Synthesizer()

void Synthesizer::setPitch(float pitch) {
  this->pitch = pitch;
  updatePitch(); //send the updated pitch to the oscillators
}//setPitch()

void Synthesizer::setVolume(float volume) {
  this->volume = volume;
}//setVolume()

void Synthesizer::setSampleRate(int sampleRate) {
  this->sampleRate = sampleRate;
}//setSampleRate()

void Synthesizer::setPitchOffset(int pitchOffset) {
  this->pitchOffset = pitchOffset;
}//setPitchOffset()


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
}//getPitchOffset()



float Synthesizer::mtof(int pitch) {
/**
 Function: Convert midi notes (int) to frequency (float)
 Refrence: https://newt.phys.unsw.edu.au/jw/notes.html
*/
  return pow(2.0, (pitch - 69.0)/12.0) * 440;
}//mtof()
