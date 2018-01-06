#ifndef INSTRUMENT_H_
#define INSTRUMENT_H_

#include <string>

class Instrument {
public:
  Instrument();
  Instrument(std::string name);
  ~Instrument();

  void makeSound();
  void playSound();
  void playNote();

  void setSound(std::string sound);
  void setPitchrange(int minPitchrange, int maxPitchrange);

  void getSound();
  void getTimbre();
  void getPitchrange();

protected:
  std::string timbre;
  std::string type;

private:
  std::string sound;
  int minPitchrange;
  int maxPitchrange;

  std::string name;

};

#endif //INSTRUMENT_H_
