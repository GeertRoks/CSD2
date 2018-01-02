
#include <iostream>
#include "instrument.h"
#include "wind.h"
#include "stringInst.h"
#include "fluit.h"

int main() {
  //Fluit fluit;
  Fluit hobo();

  hobo.setSound("ohohohoh");
  hobo.setPitchrange("bes2 - a4");

  //fluit.makeSound();
  hobo.makeSound();

  return 0;
}
