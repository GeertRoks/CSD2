
#include <iostream>
#include "keys.h"

Keys::Keys() : Instrument() {
  setSound("plingplinggg"); //default

  this->type = "Keys";
  this->timbre = "Soft tot stevig, neutral, snelle attack";
}

Keys::Keys(std::string name) : Instrument(name) {
  setSound("plingplinggg"); //default

  this->type = "Keys";
  this->timbre = "Soft tot stevig, neutral, snelle attack";
}

Keys::~Keys() {

}
