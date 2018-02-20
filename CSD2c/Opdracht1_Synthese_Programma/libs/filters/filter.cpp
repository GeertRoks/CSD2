
#include <iostream>

#include "filter.h"

Filter::Filter() {
  std::cout << "Filter || constructor" << std::endl;
  filterBuffer = new float[bufferLength];
}//Filter

Filter::~Filter() {
  std::cout << "Filter || destructor" << std::endl;
  delete[] filterBuffer;
  filterBuffer = nullptr;
}//~Filter()

void Filter::fillBuffer(float currentsample) {
  filterBuffer[bufferIndex] = currentsample;

/*
  std::cout << "filterBuffer = ";
  for (int i = 0; i < bufferLength; i++) {
    std::cout << filterBuffer[i] << ", ";
  }
  std::cout << "." << std::endl;
  */
}//fillBuffer()

void Filter::tick() {
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
