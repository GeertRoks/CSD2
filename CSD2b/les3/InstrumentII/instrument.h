#ifndef _INSTRUMENT_H_
#define _INSTRUMENT_H_
#include <string>

class Instrument
{
public:
  Instrument(std::string soundInput);
  void setSound(std::string soundInput);
  void makeSound();
  void pitchRange(std::string pitchrange);
  void timbre(std::string timbre);

private:
  std::string mSound;
  std::string mPitchrange;
  std::string mTimbre;

};

#endif //_INSTRUMENT_H_
