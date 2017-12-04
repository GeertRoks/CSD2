#include <iostream>
#include "instrument.h"

Instrument::Instrument(std::string soundInput)
{
  setSound(soundInput);
}

void Instrument::setSound(std::string soundInput)
{
  mSound = soundInput;
  makeSound();
}

void Instrument::makeSound()
{
  std::cout << mSound << std::endl;
}

void Instrument::pitchRange(std::string pitchrange)
{
  std::cout << pitchrange << std::endl;
}

void Instrument::timbre(std::string timbre)
{
  std::cout << timbre << std::endl;
}
