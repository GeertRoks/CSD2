
#include "lowPass.h"

LowPass::LowPass() : Filter(2) {
}//LowPass()

LowPass::~LowPass() {
}//~LowPass()

float LowPass::filterFunction(float currentsample) {
/**
  Function: Calculate the filterd sample output.
*/
  float filtered = (currentsample + filterBuffer[readIndex]) / 2.0;
  return filtered;
}//filterFunction()
