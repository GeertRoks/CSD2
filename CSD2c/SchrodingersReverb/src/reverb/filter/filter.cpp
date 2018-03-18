
#include <iostream>

#include "filter.h"

Filter::Filter() {
  filterBuffer = new float[bufferLength];
  for (int i = 0; i < bufferLength; i++) {
    filterBuffer[i] = 0;
  }//for
}//Filter

Filter::~Filter() {
  delete[] filterBuffer;
  filterBuffer = nullptr;
}//~Filter()

void Filter::fillBuffer(float currentsample) {
/**
  Function: write currentsample into the filterBuffer.
*/
  filterBuffer[writeIndex] = currentsample;
}//fillBuffer()

void Filter::tick() {
/**
  Function: Increase the buffer Index.
*/
  writeIndex++;
  writeIndex = writeIndex % bufferLength;

  readIndex++;
  readIndex = readIndex % bufferLength;

}//tick()

void Comb::setDelay(unsigned short int delay) {
  this->delay = delay;
}//getDelay()

unsigned short int Comb::getDelay() {
  return delay;
}//getDelay()
