#ifndef LOWPASS_H_
#define LOWPASS_H_

#include "filter.h"

class LowPass : public Filter {
public:
  LowPass();
  ~LowPass();

  float filterFunction() override;

};//class

#endif//LOWPASS_H_