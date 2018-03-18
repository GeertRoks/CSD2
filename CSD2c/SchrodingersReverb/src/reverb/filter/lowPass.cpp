
#include "lowPass.h"

LowPass::LowPass() : Filter() {
}//LowPass()

LowPass::~LowPass() {
}//~LowPass()

float LowPass::filterFunction(float currentsample) {
/**
  Function: Calculate the filterd sample output.
*/
  float filtered = (currentsample + filterBuffer[readXIndex]) / 2.0;
  return filtered;
}//filterFunction()
