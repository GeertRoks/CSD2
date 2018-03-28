
#include "comb.h"

Comb::Comb(unsigned int bufferLength_feedback) : FeedbackFilter(bufferLength_feedback) {
  
}//Comb()

Comb::~Comb() {

}//~Comb()

float Comb::filterFunction(float currentsample) {
  float filtered = filterBuffer[readIndex] + gain * filterBuffer[readIndex_feedback];
  return filtered;
}//filterFunction()


void Comb::setGain(double gain) {
  this->gain = gain;
}//getGain()

double Comb::getGain() {
  return this->gain;
}//getGain()
