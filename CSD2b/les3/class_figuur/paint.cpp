
#include "figuur.h"
#include "vierkant.h"

int main()
{
  Figuur cirkel1(25, 47);
  Figuur cirkel2(8, 20);
  Figuur cirkel3(32, 6);

  cirkel1.draw();

  Vierkant vierkant1(10, 10);
  Vierkant vierkant2(100, 100);

  vierkant1.draw();

  return 0;
}
