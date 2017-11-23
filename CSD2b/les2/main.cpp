#include <iostream>
#include "instrument.h"

int main()
{
  std::string userIn;
  int n;
  std::cout << "What sound would you like to hear? -> ";
  std::cin >> userIn;
  std::cout << "How many times would you like to hear it? -> ";
  std::cin >> n;


  Instrument myInstrument(userIn);
  myInstrument.makeMultipleSounds(n);
  return 0;
}
