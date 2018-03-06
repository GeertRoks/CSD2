
#include "lowPass.h"

LowPass::LowPass() : Filter() {
  std::cout << "LowPass || constructor" << std::endl;
}//LowPass()

LowPass::~LowPass() {
  std::cout << "LowPass || destructor" << std::endl;
}//~LowPass()

float LowPass::filterFunction(float currentsample) {
/**
  Function: Calculate the filterd sample output.
*/
  fillBuffer(currentsample);
  tick();
  float filtered = (currentsample + filterBuffer[(bufferIndex - 1) % bufferLength]) / 2.0;
  return filtered;
}//filterFunction()
