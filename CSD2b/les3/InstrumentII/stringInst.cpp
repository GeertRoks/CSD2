#include <iostream>
#include "stringInst.h"

StringInst::StringInst(std::string soundInput) : Instrument(soundInput)
{
  pitchRange("e3 - e5");
  timbre("dit geluid is snarig");
}
