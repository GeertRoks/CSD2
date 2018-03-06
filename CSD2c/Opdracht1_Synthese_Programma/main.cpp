/**
  Main.cpp for my Subtractive synthesizer made in my CSD Class at HKU.
*/
#include <thread>

#include "libs/jack/jack_module.h"
#include "libs/ui/ui.h"
#include "libs/synthesizers/subSynth.h"

int main() {
  //create a SubSynth instance
  SubSynth synth;

  //create a JackModule instance
  JackModule jack;

  //assign a function to the JackModule::onProces
  jack.onProcess = [&synth](jack_default_audio_sample_t *inBuf,
     jack_default_audio_sample_t *outBuf, jack_nframes_t nframes, double sampleRate) {
    synth.process(outBuf, nframes);
    return 0;
  };//onProces()

  //Init jack
  jack.init("Geert");
  jack.autoConnect();

  //Init user input thread
  UI input;
  input.UIprocess(&synth);

  return 0;
}//main()

/*NOTE:
    TODO:
      functionality:
        - realtime midi input
        - realtime command input (thread)
        - better filters

      Checkup:
        - Check if updatePitch() is working cleanly
        - Check makefile dependencies. (It still compiles everything if one file changes)

      Esthetics:
        - Clean Up/optimize Code
        - Comment Code
*/
