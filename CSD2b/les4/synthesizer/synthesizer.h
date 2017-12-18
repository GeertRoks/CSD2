
#ifndef SYNTHESIZER_H_
#define SYNTHESIZER_H_

#include <iostream>

class Synthesizer {
public:
  Synthesizer();
  ~Synthesizer();

  //audio process method
  virtual void process(void *outputBuffer, int numSamples) = 0; //pure virtual (heeft geen implementatie nodig)

  void setSampleRate(int sampleRate);


//TODO: make variables private and give them a get and set function.
protected:
  float frequency;
  float amplitude;
  int sampleRate;

}; //class

#endif //SYNTHESIZER_H_
