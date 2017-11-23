#include <iostream>
#include "world.h"

int main()
{
  World myWorld(2017);

  std::cout << "Calling member function myWorld.hello()" << std::endl;
  //myWorld.setyear(2017);
  myWorld.hello();
  myWorld.setyear(1066);
  myWorld.hello();
  return 0;
}
