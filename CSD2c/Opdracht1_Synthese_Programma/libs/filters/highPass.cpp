#include "highPass.h"

HighPass::HighPass() : Filter() {
  std::cout << "HighPass || constructor" << std::endl;
}//HighPass()

HighPass::~HighPass() {
  std::cout << "HighPass || destructor" << std::endl;
}//~HighPass()

float HighPass::filterFunction(float currentsample) {
  fillBuffer(currentsample);
  float filtered = (currentsample - filterBuffer[(bufferIndex - 1) % bufferLength])/2.0;
  tick();
  return filtered;
}//filterFunction()
