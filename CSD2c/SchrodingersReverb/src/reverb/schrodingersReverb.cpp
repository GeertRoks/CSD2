
#include "schrodingersReverb.h"

SchrodingersReverb::SchrodingersReverb() {
  float *inbuffer = new float[chunksize];
  float *outbuffer = new float[chunksize];
  for (unsigned int i = 0; i < chunksize; i++) {
    inbuffer[i] = 0;
    outbuffer[i] = 0;
  }//for

  //allpass.Allpass(44100);
  //comb.Comb(44100);
}//SchrodingersReverb()

SchrodingersReverb::~SchrodingersReverb() {
  delete[] inbuffer;
  delete[] outbuffer;

  inbuffer = nullptr;
  outbuffer = nullptr;

}//~SchrodingersReverb()

void SchrodingersReverb::process() {
  do {
    //jack.readSamples(inbuffer,chunksize)
    for(unsigned int i = 0; i < chunksize; i++) {
      outbuffer[i] = inbuffer[i] + comb.filterFunction(inbuffer[i]);
      comb.fillBuffer(inbuffer[i]);
      comb.fill_feedbackBuffer(outbuffer[i]);
      comb.tick();
      comb.tick_feedback();
    }//for
    //jack.writeSamples(outbuffer,chunksize);
  } while(true);
}//process()
