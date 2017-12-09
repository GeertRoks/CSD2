
#include "simpleSynth.h"

// Constructor/Destructor
SimpleSynth::SimpleSynth(float SampleRate) : Synthesizer(SampleRate) {
  std::cout << "SimpleSynth || constructor" << std::endl;

  sine.setFreq(1000, sampleRate);
}//SimpleSynth()
SimpleSynth::~SimpleSynth() {
  std::cout << "SimpleSynth || destructor" << std::endl;
}//~SimpleSynth()

//Functions

void SimpleSynth::process() {
  std::cout << "SimpleSynth || process()" << std::endl;
  int sample = sine.getSample();
  std::cout << "SimpleSynth || sample value = " << sample << std::endl;
}//process()
