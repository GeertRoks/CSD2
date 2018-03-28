#ifndef COMB_H_
#define COMB_H_

#include "feedbackFilter.h"

class Comb : public FeedbackFilter {
public:
  Comb();
  Comb(unsigned int bufferLength_feedback);
  ~Comb();

  float filterFunction(float currentsample) override;

  void setGain(double gain);
  double getGain();
  void setDelay2(unsigned int delay2);
  unsigned int getDelay2();

private:
  double gain = 0.7;

};//class

#endif //COMB_H_
