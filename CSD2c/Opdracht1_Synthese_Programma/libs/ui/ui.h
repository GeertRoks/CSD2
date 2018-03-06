/**
  Controlling all of the realtime input.
*/
#ifndef UI_H_
#define UI_H_

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>

#include "../synthesizers/subSynth.h"

class UI {
public:
  UI();
  ~UI();

  void UIprocess(SubSynth *subsynth);
  std::string getInput();
  void commands(SubSynth *subsynth);

  void split(std::string input);
  bool is_number(const std::string &str);

private:
  std::string *commandString;         //Array with splited input
  bool running = true;
};//class

#endif//UI_H_
