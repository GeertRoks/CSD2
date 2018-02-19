#ifndef FILTER_H_
#define FILTER_H_

class Filter {
public:
  Filter();
  ~Filter();

private:
  float *filterBuffer; //pointer naar filterarray

}; //class

#endif //FILTER_H_
