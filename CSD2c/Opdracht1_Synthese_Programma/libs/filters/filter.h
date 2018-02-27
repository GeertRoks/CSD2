#ifndef FILTER_H_
#define FILTER_H_

//ringbuffer of circular buffer
class Filter {
public:
  Filter();
  ~Filter();

  void fillBuffer(float currentsample);
  void tick();

  virtual float filterFunction(float currentsample) =0;

  void setCutOff(float cutOff);
  void setResonance(float resonance);
  float getCutOff();
  float getResonance();

protected:
  float *filterBuffer; //pointer naar filterarray
  unsigned char bufferLength = 8;
  unsigned char bufferIndex = 0;

private:
  float cutOff = 1000;
  float resonance = 1;

}; //class

#endif //FILTER_H_
