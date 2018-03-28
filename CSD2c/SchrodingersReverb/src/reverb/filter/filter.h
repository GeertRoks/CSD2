/**
  Blueprint for filters based on a circular buffer.
*/
#ifndef FILTER_H_
#define FILTER_H_

#include <iostream>

class Filter {
public:
  Filter(unsigned int bufferLength);
  ~Filter();

  void fillBuffer(float currentsample);
  void tick();

  virtual float filterFunction(float currentsample) =0;

  void setDelay(unsigned int delay);
  unsigned int getDelay();

protected:
  unsigned int delay = 1; //in samples

  float *filterBuffer;                //pointer to filterarray
  unsigned int bufferLength = 8;
  unsigned int writeIndex = delay;
  unsigned int readIndex = 0;

};//class

#endif//FILTER_H_

/*TODO:
    - find good names for the different read and write heads.

*/
