#include <iostream>
#include "wind.h"

Wind::Wind(std::string soundInput) : Instrument(soundInput)
{
  pitchRange("c4 - g6");
  timbre("dit geluid is windig");
}
