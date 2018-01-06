
#include <iostream>
#include <stdlib.h>
#include "instrument.h"

Instrument::Instrument() {

}

Instrument::Instrument(std::string name) {
  this->name =name;
}

Instrument::~Instrument() {

}

void Instrument::makeSound() {
  std::cout << name << ": " << this->sound << std::endl;
}

void Instrument::playSound() {
  std::cout << type << ", " << name << ": " << this->sound << "       ";
  getPitchrange();
}

void Instrument::playNote() {
  int rndnote = rand() % (maxPitchrange - minPitchrange) + minPitchrange;
  std:: cout << name << ": " << this->sound << ", " << rndnote << std::endl;
}

void Instrument::setSound(std::string sound) {
  this->sound = sound;
}

void Instrument::setPitchrange(int minPitchrange, int maxPitchrange) {
  this->minPitchrange = minPitchrange;
  this->maxPitchrange = maxPitchrange;
}

void Instrument::getSound() {
  std::cout << this->sound << std::endl;
}

void Instrument::getTimbre() {
  std::cout <<type << ": " << this->timbre << std::endl;
}

void Instrument::getPitchrange() {
  std::cout << "This instrument has a pitchrange from midinote " << minPitchrange << " to midinote " << maxPitchrange << "." << std::endl;
}
