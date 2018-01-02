
#include <iostream>
#include "instrument.h"

Instrument::Instrument() {

}

Instrument::~Instrument() {

}

void Instrument::makeSound() {
  std::cout << this->sound << std::endl;
}


void Instrument::setSound(std::string soundInput) {
  this->sound = soundInput;
}

void Instrument::setPitchrange(std::string pitchrange) {
  std::cout << this->pitchrange << std::endl;
}

void Instrument::setTimbre(std::string timbre) {
  std::cout << this->timbre << std::endl;
}
