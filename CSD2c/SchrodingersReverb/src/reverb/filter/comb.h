#ifndef COMB_H_
#define COMB_H_

class Comb : public Filter {
public:
  Comb();
  ~Comb();

  float filterFunction(float currentsample) override;

  void fillBuffer2(float currentsample);

  void setGain(double gain);
  double getGain();
  void setDelay2(unsigned short int delay2);
  unsigned short int getDelay2();

private:
  double gain = 0.7;
  unsigned short int delay2 = 1; //in samples

  unsigned short int writeIndex2 = bufferLength * 0.5;
  unsigned short int readIndex2 = writeIndex2 - delay2;
  /**
  readIndex and writeIndex (from filter.h) are for input storage. readIndex2 and writeIndex2 are for output storage (feedback).
  writeIndex2 stores samples in the middle of the array, so bufferLength * 0.5 is the amount of lookback.
  */

};//class

#endif //COMB_H_
