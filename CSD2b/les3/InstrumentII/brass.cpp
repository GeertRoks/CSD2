
#include <iostream>
#include "brass.h"

Brass::Brass() : Instrument() {
  setSound("Bwaaahp"); //default

  this->type = "Brass";
  this->timbre = "Stevig, veel laag/mid, snelle tot langzame attack";
}

Brass::Brass(std::string name) : Instrument(name) {
  setSound("Bwaaahp"); //default

  this->type = "Brass";
  this->timbre = "Stevig, veel laag/mid, snelle tot langzame attack";
}

Brass::~Brass() {

}
