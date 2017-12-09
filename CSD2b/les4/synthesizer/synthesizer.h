
#ifndef SYNTHESIZER_H_
#define SYNTHESIZER_H_

#include <iostream>

class Synthesizer {
public:
  Synthesizer(float sampleRate);
  ~Synthesizer();

protected:
  float frequency;
  float amplitude;
  int sampleRate;

}; //class

#endif //SYNTHESIZER_H_
