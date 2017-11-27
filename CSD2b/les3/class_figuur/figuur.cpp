#include <iostream>
#include "figuur.h"

  Figuur::Figuur(int x, int y)
  {
    std::cout << "Constructor van Figuur" << std::endl;
    this->x = x; //this slaat op de x en y van de Class (degene die nu private zijn)
    this->y = y;
  }
  Figuur::~Figuur()
  {
    std::cout << "Destructor van Figuur" << std::endl;
  }

  void Figuur::draw()
  {
    std::cout << "Teken Figuur op positie" <<
    x << "," << y << std::endl;
  }

  void Figuur::move()
  {
    std::cout << "Verplaats Figuur" << std::endl;
  }

  void Figuur::set_speed(int speed)
  {
  this->speed = speed;
  }
