
#include <iostream>
#include <string>
#include <math.h>
#include "../inc/mingw-std-threads/mingw.thread.h"

#include "reverb/schrodingersReverb.h"
#include "jack/jack_module.h"

int main(int argc, char const *argv[]) {

  unsigned long samplerate=44100; //default

  JackModule jack;
  SchrodingersReverb reverb;

  jack.init("SchrödingersReverb"); //Use program name as JACK client name
  jack.autoConnect();

  samplerate=jack.getSamplerate();
  std::cerr << "Samplerate: " << samplerate << std::endl;

  std::thread ReverbThread(&SchrodingersReverb::process, &reverb);

  std::cerr << "after Thread initialisation" << std::endl;
  bool running = true;
  while (running == true) {
    std::cerr << "after while initialisation" << std::endl;
    std::string inputString = "quit";
    std::cerr << "after inputString initialisation" << std::endl;
    //std::cin >> inputString;
    std::cerr << "after cin and inputString initialisation" << std::endl;
    if (inputString == "quit") {
      std::cerr << "quit" << std::endl;
      running = false;
      std::cerr << "running set to false" << std::endl;
    }//if()
  }//while()

  std::cerr << "after while loop" << std::endl;

  ReverbThread.join();

  std::cerr << "after Thread join()" << std::endl;

  jack.end();

  return 0;
}//main()
