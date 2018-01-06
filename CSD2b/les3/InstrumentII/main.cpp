
#include <iostream>
#include <stdlib.h>

#include "instrument.h"
#include "keys.h"
#include "strings.h"
#include "brass.h"

int main() {
  Brass trumpet1("trumpet1  ");
  Brass trumpet2("trumpet2  ");
  Brass trumpet3("trumpet3  ");
  Strings violin("violin    ");
  Strings altviolin("altviolin ");
  Keys grandpiano("grandpiano");

//Sound
  trumpet1.setSound("Toooeeet");
  trumpet2.setSound("toet");
  altviolin.setSound("Zzwaaaaahh");

//pitchrange
  trumpet1.setPitchrange(54, 81);
  trumpet2.setPitchrange(54, 81);
  trumpet3.setPitchrange(54, 81);
  violin.setPitchrange(55, 107);
  altviolin.setPitchrange(48,88);
  grandpiano.setPitchrange(21, 108);

//playNote() NOTE: Speelt 120 noten???
std::cout << "Kleine random compositie van 40 noten" << std::endl;
  for (size_t i = 0; i < 40; i++) {
    int rndvalue = rand() % 6;

    switch (rndvalue) {
      case 0:
        trumpet1.playNote();
      case 1:
        trumpet2.playNote();
      case 2:
        trumpet3.playNote();
      case 3:
        violin.playNote();
      case 4:
        altviolin.playNote();
      case 5:
        grandpiano.playNote();
    }
  }

  std::cout << std::endl;

//playSound()
  std::cout << "The mandatory playSound() exercise" << std::endl;
  trumpet1.playSound();
  trumpet2.playSound();
  trumpet3.playSound();
  violin.playSound();
  altviolin.playSound();
  grandpiano.playSound();

  std::cout << std::endl;

//Timbre
  std::cout << "These are discriptions of the timbre of the sounds" << std::endl;
  trumpet1.getTimbre();
  violin.getTimbre();
  grandpiano.getTimbre();

  return 0;
}
