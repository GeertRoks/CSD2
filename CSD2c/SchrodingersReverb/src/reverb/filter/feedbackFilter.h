/**
  Blueprint for filters based on a circular buffer.
*/
#ifndef FEEDBACKFILTER_H_
#define FEEDBACKFILTER_H_

#include "filter.h"

class FeedbackFilter : public Filter {
public:
  FeedbackFilter(unsigned int bufferLength_feedback);
  ~FeedbackFilter();

  void fill_feedbackBuffer(float currentsample);
  void tick_feedback();

  void setDelay_feedback(unsigned int delay);
  unsigned int getDelay_feedback();

protected:
  unsigned int delay_feedback = 1; //in samples

  float *feedbackBuffer;                //pointer to filterarray
  unsigned int bufferLength_feedback = 8; //samples
  unsigned int writeIndex_feedback = delay_feedback;
  unsigned int readIndex_feedback = 0;

};//class

#endif//FEEDBACKFILTER_H_
