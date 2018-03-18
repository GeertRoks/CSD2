
#include "allpass.h"

Allpass::Allpass() : Filter() {

}//Allpass()

Allpass::~Allpass() {

}//~Allpass

float Allpass::filterFunction(float currentsample) {
  float filtered = -gain * filterBuffer[currentsample] + filterBuffer[readIndex] + gain * filterBuffer[readIndex2];
}//filterFunction()

void Allpass::fillBuffer2(float currentsample) {
  filterBuffer[writeIndex2] = currentsample;
}//fillBuffer2()



void Allpass::setGain(double gain) {
  this->gain = gain;
}//getGain()

void Allpass::setDelay2(unsigned short int delay2) {
  this->delay = delay2;
}//getDelay2()

double Allpass::getGain() {
  return gain;
}//getGain()

unsigned short int Allpass::getDelay2() {
  return delay;
}//getDelay2()
