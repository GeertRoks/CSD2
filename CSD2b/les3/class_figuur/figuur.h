//#pragma once
#ifndef _FIGUUR_H_
#define _FIGUUR_H_

#include <iostream>

class Figuur
{
public:
  Figuur(int x, int y);  //constructor
  ~Figuur(); //destructor (Ruimt de variablen veilig op)

  void draw();
  void move();
  void set_speed(int speed);

private:
  int x,y;
  int speed;
};

#endif //_FIGUUR_H_
