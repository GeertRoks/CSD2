#include <iostream>
#include "world.h"

World::World(int newyear) //constructor
{
  year = newyear;
}

void World::setyear(int newyear)
{
  year = newyear;
}

void World::hello()
  {
    std::cout << "Hello there in the year " <<
                  year << std::endl;
  }
