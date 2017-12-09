
#include "synthesizer.h"
#include "simpleSynth.h"

int main() {
  SimpleSynth synth(44100);
  synth.process();

  return 0;
} //main()
