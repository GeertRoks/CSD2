
#include <iostream>

#include "filter.h"

Filter::Filter() {
  filterBuffer = new float[bufferLength];
}//Filter

Filter::~Filter() {
  delete[] filterBuffer;
  filterBuffer = nullptr;
}//~Filter()

void Filter::fillBuffer(float currentsample) {
/**
  Function: write currentsample into the filterBuffer.
*/
  filterBuffer[bufferIndex] = currentsample;
}//fillBuffer()

void Filter::tick() {
/**
  Function: Increase the buffer Index.
*/
  bufferIndex++;
  bufferIndex = bufferIndex % bufferLength;
}//tick()

void Filter::setCutOff(float cutOff) {
  this->cutOff = cutOff;
}//setCutOff()

void Filter::setResonance(float resonance) {
  this->resonance = resonance;
}//setResonance()

float Filter::getCutOff() {
  return this->cutOff;
}//getCutOff()

float Filter::getResonance() {
  return this->resonance;
}//getResonance()
