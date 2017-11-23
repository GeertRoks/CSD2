#include <iostream>
#include "world.h"

int main()
{
  World myWorld;

  std::cout << "Calling member function myWorld.hello()" << std::endl;
  myWorld.hello();
  return 0;
}

