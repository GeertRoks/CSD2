
#include <iostream>

#include "lowPass.h"

LowPass::LowPass() : Filter() {
  std::cout << "LowPass || constructor" << std::endl;
}//LowPass()

LowPass::~LowPass() {
  std::cout << "LowPass || destructor" << std::endl;
}//~LowPass()

float LowPass::filterFunction(float currentsample) {
  fillBuffer(currentsample);
  float filtered = (currentsample + filterBuffer[(bufferIndex - 1) % bufferLength]) * 0.5;
  return filtered;
}//filterFunction()
