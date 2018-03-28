#ifndef ALLPASS_H_
#define ALLPASS_H_

#include "feedbackFilter.h"

class Allpass : public FeedbackFilter {
public:
  Allpass();
  Allpass(unsigned int bufferLength_feedback);
  ~Allpass();

  float filterFunction(float currentsample) override;

  void setGain(double gain);
  double getGain();

private:
  double gain = 0.7;

};//class

#endif//ALLPASS_H_
