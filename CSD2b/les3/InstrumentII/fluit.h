#ifndef FLUIT_H_
#define FLUIT_H_

#include "wind.h"

class Fluit : public Wind {
public:
  Fluit();
  ~Fluit();

  //makesound();
  setSound(std::string sound);
  setPitchrange(std::string pitchrange);

};

#endif //FLUIT_H_
