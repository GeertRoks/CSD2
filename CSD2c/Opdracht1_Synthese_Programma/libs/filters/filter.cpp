
#include "filter.h"

Filter::Filter() {
  filterBuffer = new float[8];
}//Filter

Filter::~Filter() {
  delete[] filterBuffer;
  filterBuffer = nullptr;
}//~Filter()
