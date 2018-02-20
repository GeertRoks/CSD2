
#include <iostream>

#include "lowPass.h"

LowPass::LowPass() : Filter() {
  std::cout << "LowPass || constructor" << std::endl;
}//LowPass()

LowPass::~LowPass() {
  std::cout << "LowPass || destructor" << std::endl;
}//~LowPass()

float LowPass::filterFunction() {
  float out;
  out = filterBuffer[bufferIndex] + filterBuffer[bufferIndex - 1];
  return out;
}//filterFunction()
