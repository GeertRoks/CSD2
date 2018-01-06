
#include <iostream>
#include "strings.h"

Strings::Strings() : Instrument() {
  setSound("ZZzwweee"); //default

  this->type = "Strings";
  this->timbre = "Soft, scherp, middel tot langzame attack";
}

Strings::Strings(std::string name) : Instrument(name) {
  setSound("ZZzwweee"); //default

  this->type = "Strings";
  this->timbre = "Soft, scherp, middel tot langzame attack";
}

Strings::~Strings() {

}
