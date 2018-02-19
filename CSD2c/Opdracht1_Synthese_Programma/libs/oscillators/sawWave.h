#ifndef SAWWAVE_H_
#define SAWWAVE_H_

#include "oscillator.h"

class SawWave : public Oscillator {
public:
  SawWave();
  ~SawWave();

  float getSample() override;


private:

}; //class

#endif //SAWWAVE_H_
