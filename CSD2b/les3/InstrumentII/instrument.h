#ifndef INSTRUMENT_H_
#define INSTRUMENT_H_

#include <string>

class Instrument {
public:
  Instrument();
  ~Instrument();

  void makeSound();
  void setSound(std::string soundInput);
  void setPitchrange(std::string pitchrange);
  void setTimbre(std::string timbre);

protected:
  std::string sound;
  std::string pitchrange;
  std::string timbre;

};

#endif //INSTRUMENT_H_
