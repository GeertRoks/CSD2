#ifndef COMB_H_
#define COMB_H_

class Comb : public Filter {
public:
  Comb();
  ~Comb();

  float filterFunction(float currentsample) override;

};//class

#endif //COMB_H_
