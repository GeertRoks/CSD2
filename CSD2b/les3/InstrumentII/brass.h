#ifndef BRASS_H_
#define BRASS_H_

#include "instrument.h"

class Brass : public Instrument {
public:
  Brass();
  Brass(std::string name);
  ~Brass();

};

#endif //BRASS_H_
