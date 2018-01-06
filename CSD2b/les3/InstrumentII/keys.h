#ifndef KEYS_H_
#define KEYS_H_

#include "instrument.h"

class Keys : public Instrument {
public:
  Keys();
  Keys(std::string name);
  ~Keys();

};

#endif //KEYS_H_
