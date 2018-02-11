
#include <thread>
#include "jack_module.h"
#include "synthesizer.h"
#include "simpleSynth.h"

int main() {
  //jackd -R -S -d portaudio -d "ASIO::ASIO4ALL v2"

  SimpleSynth synth;
  synth.setWaveType(1);
  synth.setVolume(0.25);
  synth. setPitch(60);
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
