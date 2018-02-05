
#include "synthesizer.h"
#include "simpleSynth.h"

int main() {
  float buffer [256];

  SimpleSynth synth;
  synth.setWaveType(0);
  synth.setVolume(1);
  synth. setPitch(440);
  synth.process(buffer, 256);

  std::cout << "Main || buffer = ";
  for(size_t i = 256; i--;) {
    std::cout << buffer[i] << " ,";
  }


  return 0;
} //main()

/*NOTE:
    TODO are in:
      - //NOTE Ciska voorstel updatePitch() virtual
      -

    Pointers and polymorphism

    Draw a plan of concept

*/
