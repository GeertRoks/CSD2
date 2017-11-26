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
  PlayofMusic();
}

void Instrument::PlayofMusic()
{
  std::cout << "Do- A deer, a female deer" << std::endl;
  std::cout << "Re- A drop of golden sun" << std::endl;
  std::cout << "Mi- A name I call myself" << std::endl;
  std::cout << "Fa- A long, long way to run" << std::endl;
  std::cout << "So- A needle pulling thread" << std::endl;
  std::cout << "La- A note to follow so" <<std::endl;
  std::cout << "Te- A drink with jam and bread" <<std::endl;
}
