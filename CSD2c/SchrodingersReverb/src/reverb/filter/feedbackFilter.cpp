
#include <iostream>

#include "feedbackFilter.h"

FeedbackFilter::FeedbackFilter(unsigned int bufferLength_feedback) : Filter(bufferLength_feedback) {
  this->bufferLength_feedback = bufferLength_feedback;

  feedbackBuffer = new float[bufferLength_feedback];
  for (unsigned int i = 0; i < bufferLength_feedback; i++) {
    feedbackBuffer[i] = 0;
  }//for
}//FeedbackFilter

FeedbackFilter::~FeedbackFilter() {
  delete[] feedbackBuffer;
  feedbackBuffer = nullptr;
}//~FeedbackFilter()

void FeedbackFilter::fillBuffer(float currentsample) {
/**
  Function: write currentsample into the feedbackBuffer.
*/
  feedbackBuffer[writeIndex_feedback] = currentsample;
}//fillBuffer()

void FeedbackFilter::tick_feedback() {
/**
  Function: Increase the feedbackbuffer Index.
*/
  writeIndex_feedback++;
  writeIndex_feedback = writeIndex_feedback % bufferLength_feedback;

  readIndex_feedback++;
  readIndex_feedback = readIndex_feedback % bufferLength_feedback;

}//tick_feedback()

void FeedbackFilter::setDelay_feedback(unsigned int delay_feedback) {
  this->delay_feedback = delay_feedback;
}//getDelay_feedback()

unsigned int FeedbackFilter::getDelay_feedback() {
  return this->delay_feedback;
}//getDelay_feedback()
