
#include "oscillator.h"

Oscillator::Oscillator() {
  std::cout << "Oscillator      constructor" << std::endl;
}
Oscillator::~Oscillator() {
  std::cout << "Oscillator      destructor" << std::endl;
}

void Oscillator::getSample() {
  std::cout << "Oscillator      getSample()" << std::endl;
}
