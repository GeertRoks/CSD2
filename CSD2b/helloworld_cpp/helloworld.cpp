#include <iostream> //<...> kijkt alleen naar systeem files.

 //main() is een functie die nodig is om het programma te laten werken. Deze geeft een integer terug.(argumentcount, lijst met argumenten) <- mag weggelaten worden.
 // char is een type letter (dus 1 byte)
int main(int argc, char **argv)
{
  //std:: zorgt voor global namespace, dus alles dat in het systeem zit en niet door jezelf is geschreven. Je kan ook include namespace std; bovenaan zetten, maar dan kan je alleen systeem functie gebruiken.
  std::cout << "Hallo \n"; //cout is een soort functie waarmee je kan printen (lees als c out, van console out). <<, dit zijn streams en wijzen het verloop, dus "Hallo" stoomt in cout.
  std::cout << "\t Hallo" <<std::endl;

  return 0;
}

// \n : new line + maakt outout buffer schoon. Netjes is << std::endl
// \t : tab

//in bash: -Wall <filename> geeft alle warnings, die dus nog niet crashen, maar het eigenlijk niet goed is.
