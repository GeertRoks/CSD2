#ifndef UI_H_
#define UI_H_

#include <iostream>
#include <string>
#include <sstream>

class UI {
public:
  UI();
  ~UI();

  void process();
  std::string inputFunction();
  void commands();

  void split(std::string input);

private:
  std::string *commandString;

  bool running = true;
};//class

#endif//UI_H_
