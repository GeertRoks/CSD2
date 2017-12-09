
#include "simpleSynth.h"


SimpleSynth::SimpleSynth() : Synthesizer() {
  std::cout << "SimpleSynth   constructor" << std::endl;
}

SimpleSynth::~SimpleSynth() {
  std::cout << "SimpleSynth   destructor" << std::endl;
}

void SimpleSynth::process() {
  std::cout << "SimpleSynth   process()" << std::endl;
  osc.getSample();
}
