#include <iostream>
#include "instrument.h"

Instrument::Instrument(std::string soundInput)
{
  setSound(soundInput);
}

void Instrument::setSound(std::string soundInput) {
  mSoundInput = soundInput;
}

void Instrument::makeSound()
{
  std::cout << mSoundInput << std::endl;
}

void Instrument::makeMultipleSounds(int numTimes)
{
  for(int i = 0; i < numTimes; i++){
    makeSound();
  }
}
