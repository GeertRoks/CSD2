#ifndef SCHRODINGERSREVERB_H_
#define SCHRODINGERSREVERB_H_

#include "filter/allpass.h"
#include "filter/comb.h"

class SchrodingersReverb {

public:
  SchrodingersReverb();
  ~SchrodingersReverb();

  void process();

private:
  float *inbuffer;
  float *outbuffer;

  unsigned long chunksize = 2048;

  Allpass allpass;
  Comb comb;

};//class

#endif//SCHRODINGERSREVERB_H_

/**
  TODO:
    - array of filter pointers.
    - parameter control.
    - Combine ticks.
    - Combine fillbuffer.

*/
