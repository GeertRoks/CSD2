#include <iostream>
#include "instrument.h"
#include "wind.h"
#include "stringInst.h"

int main()
{
  Wind fluit("fffhff");
  Wind hobo("ohohoho");

  StringInst gitaar("tingeningeding");
  gitaar.makeSound();
  return 0;
}
