
#include "simpleSynth.h"

// Constructor/Destructor
SimpleSynth::SimpleSynth() : Synthesizer() {
  std::cout << "SimpleSynth || constructor" << std::endl;

  oscPointer = &sine //Default: sine as wavetype
}//SimpleSynth()

SimpleSynth::~SimpleSynth() {
  std::cout << "SimpleSynth || destructor" << std::endl;
}//~SimpleSynth()



//Functions

void SimpleSynth::process() {
  std::cout << "SimpleSynth || process()" << std::endl;
  int sample = oscPointer.getSample();
  std::cout << "SimpleSynth || sample value = " << sample << std::endl;
}//process()

void SimpleSynth::setWaveType(int waveType) {
  switch (waveType) {
    case 0:
      oscPointer = &sine;
    case 1:
      oscPointer = &square;
    else:
      std::std::cout << waveType << " is not valid waveType" << std::endl;
  }
}//setWaveType()
