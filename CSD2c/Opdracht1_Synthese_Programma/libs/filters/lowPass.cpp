
#include "lowPass.h"

LowPass::LowPass() : Filter() {
}//LowPass()

LowPass::~LowPass() {
}//~LowPass()

float LowPass::filterFunction(float currentsample) {
/**
  Function: Calculate the filterd sample output.
*/
  fillBuffer(currentsample);
  float filtered = (currentsample + filterBuffer[(bufferIndex - 1) % bufferLength]) / 2.0;
  return filtered;
}//filterFunction()
