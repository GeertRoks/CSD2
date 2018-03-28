
#include "allpass.h"

Allpass::Allpass(unsigned int bufferLength_feedback) : FeedbackFilter(bufferLength_feedback) {
  std::cout << "allpass || constructor" << '\n';
}//Allpass()

Allpass::~Allpass() {

}//~Allpass

float Allpass::filterFunction(float currentsample) {
  float filtered = -gain * currentsample + filterBuffer[readIndex] + gain * filterBuffer[readIndex_feedback];
  return filtered;
}//filterFunction()


void Allpass::setGain(double gain) {
  this->gain = gain;
}//getGain()

double Allpass::getGain() {
  return gain;
}//getGain()
