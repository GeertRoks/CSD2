
#include "comb.h"

Comb::Comb() : Filter() {

}//Comb()

Comb::~Comb() {

}//~Comb()

float Comb::filterFunction(float currentsample) {
  float filterd = filterBuffer[readIndex] + gain * filterBuffer[readIndex2];
  return filtered;
}//filterFunction()

void Allpass::fillBuffer2(float currentsample) {
  filterBuffer[writeIndex2] = currentsample;
}//fillBuffer2()



void Comb::setGain(double gain) {
  this->gain = gain;
}//getGain()

void Comb::setDelay2(unsigned short int delay2) {
  this->delay = delay2;
}//getDelay2()

double Comb::getGain() {
  return gain;
}//getGain()

unsigned short int Comb::getDelay2() {
  return delay;
}//getDelay2()
