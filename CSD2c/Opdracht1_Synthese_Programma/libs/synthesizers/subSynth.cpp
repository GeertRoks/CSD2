
#include "subSynth.h"

// Constructor/Destructor

SubSynth::SubSynth() : Synthesizer() {
  std::cout << "SubSynth || constructor" << std::endl;

  oscPointer1 = &sine1; //Default: sine as wavetype
  oscPointer2 = &square2;
}//SubSynth()

SubSynth::~SubSynth() {
  std::cout << "SubSynth || destructor" << std::endl;
}//~SubSynth()


//Functions

void SubSynth::process(float *outputBuffer, int numSamples) {
  //std::cout << "SubSynth || process()" << std::endl;
  float sampleOsc1;
  float sampleOsc2;
  for (int i = 0; i < numSamples; i++) {
    sampleOsc1 = oscPointer1->getSample();
    sampleOsc2 = oscPointer2->getSample();
    outputBuffer[i] = (sampleOsc1 + sampleOsc2) * 0.5 * getVolume();
    oscPointer1->tick();
    oscPointer2->tick();
  }

}//process()

void SubSynth::setWaveType1(int waveType) {
  switch (waveType) {
    case 0:
      oscPointer1 = &sine1;
      break;
    case 1:
      oscPointer1 = &square1;
      break;
    case 2:
      oscPointer1 = &saw1;
    default:
      std::cout << "Error: " << waveType << " is not valid waveType" << std::endl;
  }//switch()
}//setWaveType1()

void SubSynth::setWaveType2(int waveType) {
  switch (waveType) {
    case 0:
      oscPointer2 = &sine2;
      break;
    case 1:
      oscPointer2 = &square2;
      break;
    case 2:
      oscPointer2 = &saw2;
    default:
      std::cout << "Error: " << waveType << " is not valid waveType" << std::endl;
  }//switch()
}//setWaveType2()

void SubSynth::updatePitch(){
  oscPointer1->setFreq(mtof(getPitch()), getSampleRate());
  oscPointer2->setFreq(mtof(getPitch() + getPitchOffset()), getSampleRate());

}
