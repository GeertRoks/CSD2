#ifndef ALLPASS_H_
#define ALLPASS_H_

class Allpass : public Filter {
public:
  Allpass();
  ~Allpass();

  float filterFunction(float currentsample) override;

};//class

#endif//ALLPASS_H_
