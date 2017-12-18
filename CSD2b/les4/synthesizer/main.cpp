
#include "synthesizer.h"
#include "simpleSynth.h"

int main() {
  float buffer [256];

  SimpleSynth synth;
  synth.process(buffer, 256);

  return 0;
} //main()

/*NOTE:
    TODO are in:
      - synthesizer.h
      -

    Pointers and polymorphism

    Draw a plan of concept

*/
