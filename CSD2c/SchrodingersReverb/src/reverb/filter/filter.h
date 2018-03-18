/**
  Blueprint for filters based on a circular buffer.
*/
#ifndef FILTER_H_
#define FILTER_H_

class Filter {
public:
  Filter();
  ~Filter();

  void fillBuffer(float currentsample);
  void tick();

  virtual float filterFunction(float currentsample) =0;

  void setDelay(unsigned short int delay);
  unsigned short int getDelay();

protected:
  unsigned short int delay = 1; //in samples

  float *filterBuffer;                //pointer to filterarray
  unsigned short int bufferLength = 8;
  unsigned short int writeIndex = 0;
  unsigned short int readIndex = bufferLength - delay;

};//class

#endif//FILTER_H_

/*TODO:
    - find good names for the different read and write heads.

*/
