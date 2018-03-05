
#include "ui.h"

UI::UI() {
  std::cout << "UI || Constructor" << std::endl;
  commandString = new std::string[4];
}//UI()

UI::~UI() {
  std::cout << "UI || Destructor" << std::endl;
  delete[] commandString;
  commandString = nullptr;
}//~UI()

void UI::process() {
  while (running) {
    split(inputFunction());
    commands();
  }//while
}//process()

std::string UI::inputFunction() {
  std::string input;
  std::getline(std::cin, input);
  return input;
}//inputFunction()

void UI::commands() {
  if (commandString[0] == "help") {
    std::cout << "help if statement" << '\n';
  }//if (help)
  if (commandString[0] == "freq") {
    std::cout << "freq if statement" << '\n';
  }//if (freq)
  if (commandString[0] == "pitch") {
    std::cout << "pitch if statement" << '\n';
  }//if (pitch)
  if (commandString[0] == "quit") {
    std::cout << "quit if statement" << '\n';
  }//if (quit)
  if (commandString[0] == "wavetype") {
    std::cout << "wavetype if statement" << '\n';
  }//if (wavetype)
}//commands

void UI::split(std::string input) {
  /*
  Function: Split a string by spaces and put them in an array.
  Works for extracting four words out of an string.
  Refrence: https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c
  */
  std::string inputStr = input;
  std::string delimiter = " ";                    //split factor

  unsigned int pos = 0;
  std::string token = ".";
  for (int i = 0; i < 4; i++) {
    pos = inputStr.find(delimiter);
    if (inputStr.substr(0,pos) != token) {
      if (token == " ") {
        token = " ";                              //still enter " " even when the previous was " ".
      } else {
        token = inputStr.substr(0, pos);          //extract token from string.
      }
    } else {
      token = " ";                                //enter " " when there's no new token to be extracted.
    }//else

    commandString[i] = token;                     //put token in the array
    inputStr.erase(0, pos + delimiter.length());  //delete token from string so new token could be extracted.
  }//for
}//split()
