
#include "subSynth.h"

SubSynth::SubSynth() : Synthesizer() {
  std::cout << "SubSynth || constructor" << std::endl;

  oscPointer1 = &sine1;       //Default sine as wavetype for osc 1.
  oscPointer2 = &square2;     //Default square as wavetype for osc 2.
}//SubSynth()

SubSynth::~SubSynth() {
  std::cout << "SubSynth || destructor" << std::endl;
}//~SubSynth()

void SubSynth::process(float *outputBuffer, int numSamples) {
/**
  Function: Routing the functions and keep filling the audiobuffer.
*/
  //std::cout << "SubSynth || process()" << std::endl;
  float sampleOsc1;
  float sampleOsc2;
  float out;
  for (int i = 0; i < numSamples; i++) {
    sampleOsc1 = oscPointer1->getSample();       //samples from oscillator 1
    sampleOsc2 = oscPointer2->getSample();       //samples from oscillator 2
    out = (sampleOsc1 + sampleOsc2) * 0.5 * getVolume();  //sum the two oscillators

    //out = filter->filterFunction(out);          //filter output.
    outputBuffer[i] = out;      //write samples to buffer
    oscPointer1->tick();
    oscPointer2->tick();
  }//for
}//process()

void SubSynth::setWaveType1(int waveType) {
/**
  Function: Change the wavetype of oscillator 1
*/
  switch (waveType) {
    case 0:
      oscPointer1 = &sine1;
      break;
    case 1:
      oscPointer1 = &square1;
      break;
    case 2:
      oscPointer1 = &saw1;
      break;
    default:
      std::cout << "Error: " << waveType << " is not valid waveType" << std::endl;
  }//switch
}//setWaveType1()

void SubSynth::setWaveType2(int waveType) {
/**
  Function: Change the wavetype of oscillator 2
*/
  switch (waveType) {
    case 0:
      oscPointer2 = &sine2;
      break;
    case 1:
      oscPointer2 = &square2;
      break;
    case 2:
      oscPointer2 = &saw2;
      break;
    default:
      std::cout << "Error: " << waveType << " is not valid waveType" << std::endl;
  }//switch
}//setWaveType2()

void SubSynth::updatePitch(){
/**
  Function: If pitch is changed send those changes to the frequency input of the oscillators.
*/
  oscPointer1->setFreq(mtof(getPitch()), getSampleRate());
  oscPointer2->setFreq(mtof(getPitch() + getPitchOffset()), getSampleRate());
}//updatePitch()
