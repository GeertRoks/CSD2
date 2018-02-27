
#include <thread>
#include "libs/jack/jack_module.h"
#include "libs/synthesizers/synthesizer.h"
#include "libs/synthesizers/subSynth.h"

int main() {
  //jackd -R -S -d portaudio -d "ASIO::ASIO4ALL v2"

  SubSynth synth;
  synth.setWaveType1(2);
  synth.setWaveType2(0);
  synth.setVolume(0.25);
  synth.setPitch(60);

  //create a JackModule instance
  JackModule jack;

  //assign a function to the JackModule::onProces
  jack.onProcess = [&synth](jack_default_audio_sample_t *inBuf,
     jack_default_audio_sample_t *outBuf, jack_nframes_t nframes, double sampleRate) {
    synth.process(outBuf, nframes);
    return 0;
  }; //onProces()

  // init the jack, use program name as JACK client name
  jack.init("Geert");
  jack.autoConnect();

  std::cout << "\n\nType 'h' to see all commands available.\n";
  bool running = true;
  while (running) {
      switch (std::cin.get()) {
          case 'q':
            running = false;
            break;

          case 'h':
            std::cout << "q, quit, exit => quit program." << std::endl;

          //a -> 60 - c
          case 'a':
            synth.setPitch(60);
            break;
          //w -> 61 - cis/des
          case 'w':
            synth.setPitch(61);
            break;
          //s -> 62 - d
          case 's':
            synth.setPitch(62);
            break;
          //e -> 63 - dis/es
          case 'e':
            synth.setPitch(63);
            break;
          //d -> 64 - e
          case 'd':
            synth.setPitch(64);
            break;
          //f -> 65 - f
          case 'f':
            synth.setPitch(65);
            break;
          //t -> 66 - fis/ges
          case 't':
            synth.setPitch(66);
            break;
          //g -> 67 - g
          case 'g':
            synth.setPitch(67);
            break;
          // y-> 68 - gis/as
          case 'y':
            synth.setPitch(68);
            break;
          //h -> 69 - a
          case 'h':
            synth.setPitch(69);
            break;
          //u -> 70 - ais/bes
          case 'u':
            synth.setPitch(70);
            break;
          //j -> 71 - b
          case 'j':
            synth.setPitch(71);
            break;
          //k -> 72 - c
          case 'k':
            synth.setPitch(72);
            break;
      }//switch
  }//while
  std::cout << "main || end of while loop" << std::endl;
  //jack.end();

  return 0;
} //main()

/*NOTE:
    TODO are in:
      - Check if updatePitch() is working cleanly
      -
      -
      - Clean Up/optimize Code
      - Comment Code


*/
