#include "vierkant.h"

Vierkant::Vierkant(int x, int y) : Figuur(x,y)
{
  std::cout << "Constructor van Vierkant" << std::endl;
}

Vierkant::~Vierkant()
{
  std::cout << "Destructor van Vierkant" << std::endl;
}

void Vierkant::draw()
{
    std::cout << "Teken een Vierkant" << std::endl;
}
