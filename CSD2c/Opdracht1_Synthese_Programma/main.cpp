
#include <thread>
#include "libs/jack/jack_module.h"
#include "libs/synthesizers/synthesizer.h"
#include "libs/synthesizers/simpleSynth.h"

int main() {
  //jackd -R -S -d portaudio -d "ASIO::ASIO4ALL v2"

  SimpleSynth synth;
  synth.setWaveType(1);
  synth.setVolume(0.25);
  synth.setPitch(60);
    //create a JackModule instance
  JackModule jack;

  //assign a function to the JackModule::onProces
  jack.onProcess = [&](jack_default_audio_sample_t *inBuf,
     jack_default_audio_sample_t *outBuf, jack_nframes_t nframes, double sampleRate) {
    synth.process(outBuf, nframes);
    return 0;
  }; //onProces()

  // init the jack, use program name as JACK client name
  jack.init("Geert");
  jack.autoConnect();

  //keep the program running and listen for user input, q = quit
  std::cout << "\n\nPress 'q' when you want to quit the program.\n";
  bool running = true;
  while (running)
  {
      switch (std::cin.get())
      {
          case 'q':
            running = false;
            break;
          //a -> 60 - c
          case 'a':
            synth.setPitch(60);
            break;
          //s -> 62 - d
          case 's':
            synth.setPitch(62);
            break;
          //d -> 64 - e
          case 'd':
            synth.setPitch(64);
            break;
          //f -> 65 - f
          case 'f':
            synth.setPitch(65);
            break;
          //g -> 67 - g
          case 'g':
            synth.setPitch(67);
            break;
          //h -> 69 - a
          case 'h':
            synth.setPitch(69);
            break;
          //j -> 71 - b
          case 'j':
            synth.setPitch(71);
            break;
          //k -> 72 - c
          case 'k':
            synth.setPitch(72);
            break;
      }
  }

  return 0;
} //main()

/*NOTE:
    TODO are in:
      - //NOTE Ciska voorstel updatePitch() virtual
      -

    Pointers and polymorphism

    Draw a plan of concept

*/
