
#include "synthesizer.h"

// Constructor/Destructor
Synthesizer::Synthesizer(float SampleRate) {
  std::cout << "Synthesizer || constructor" << std::endl;
  sampleRate = SampleRate;
}//Synthesizer()
Synthesizer::~Synthesizer() {
  std::cout << "Synthesizer || destructor" << std::endl;
}//~Synthesizer()
