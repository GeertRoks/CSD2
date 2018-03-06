
#include "highPass.h"

HighPass::HighPass() : Filter() {
}//HighPass()

HighPass::~HighPass() {
}//~HighPass()

float HighPass::filterFunction(float currentsample) {
/**
  Function: Calculate the filterd sample output.
*/
  fillBuffer(currentsample);
  float filtered = (currentsample - filterBuffer[(bufferIndex - 1) % bufferLength])/2.0;
  tick();
  return filtered;
}//filterFunction()
