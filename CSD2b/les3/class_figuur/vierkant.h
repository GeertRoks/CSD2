
#include "figuur.h"

class Vierkant : public Figuur
{
public:
  Vierkant(int x, int y);
  ~Vierkant();

  void draw();
  
private:
  int breedte, hoogte;

};
