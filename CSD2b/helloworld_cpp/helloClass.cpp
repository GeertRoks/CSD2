#include <iostream> //<...> kijkt alleen naar systeem files.

class World //Classes maken nieuwe types.
{
public: //public is buiten de class verkrijgbaar. Classes hebben alles standaard private. Dit maakt alles in de class Public.
  void hallo() //void zegt dat deze functie geen resultaat geeft, dus er is geen return nodig.
  {
    std::cout << "Hellooo..." <<std::endl;
    std::cout << "\t Is it me you're looking for?" <<std::endl;
  }
}; //na een class moet een ;

int main()
{
  World wereld; //type World, variable wereld (zoals int x;). World is een nieuw type nu.

  wereld.hallo(); //memberfuncties
  return 0;
}
