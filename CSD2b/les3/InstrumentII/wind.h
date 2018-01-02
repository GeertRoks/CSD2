#ifndef WIND_H_
#define WIND_H_

#include "instrument.h"

class Wind : public Instrument {
public:
  Wind();
  ~Wind();

  //makesound();
  setSound(std::string sound);
  setPitchrange(std::string pitchrange);

};

#endif //WIND_H_
