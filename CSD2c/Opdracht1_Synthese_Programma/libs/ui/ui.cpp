
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

void UI::UIprocess(SubSynth *subsynth) {
/**
  Function: Routing the functions and keeping it looped.
*/
  while (running) {
    split(getInput());
    commands(subsynth);
  }//while
}//UIprocess()

std::string UI::getInput() {
/**
  Function: get input from command line and return it.
*/
  std::string input;
  std::getline(std::cin, input);
  return input;
}//getInput()

void UI::commands(SubSynth *subsynth) {
/**
  Function: Contains all commands to be used and controls SubSynth directly.

  NOTE: switch would work better here, but switch doesn't work with strings.
*/
  if (commandString[0] == "help") {               //help
    std::cout << "help if statement" << std::endl;
  }//if (help)

  if (commandString[0] == "pitch") {              //pitch
    subsynth->setPitch(std::stof(commandString[1]));
  }//if (pitch)

  if (commandString[0] == "osc2offset") {         //osc2offset
    subsynth->setPitchOffset(std::stoi(commandString[1]));
  }//if (freq)

  if (commandString[0] == "wavetype") {           //wavetype
    if (is_number(commandString[2])) {
      if (commandString[1] == "1") {              //oscillator 1
        subsynth->setWaveType1(std::stoi(commandString[2]));
      } else if (commandString[1] == "2") {       //oscillator 2
        subsynth->setWaveType2(std::stoi(commandString[2]));
      } else { //if
        std::cout << "Invalid oscillator command for wavetype. Type 'help' to see all of the valid options." << std::endl;
      }//else
    } else {
      std::cout << commandString[2] << " is not a valid wavetype. Type 'help' to see all of the valid options." << std::endl;
    }//else
  }//if (wavetype)

  if (commandString[0] == "quit") {               //quit
    running = false;
  }//if (quit)
}//commands

void UI::split(std::string input) {
/**
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
    token = inputStr.substr(0, pos);              //extract token from string.
    commandString[i] = token;                     //put token in the array
    inputStr.erase(0, pos + delimiter.length());  //delete token from string so new token can be extracted.
  }//for
}//split()

bool UI::is_number(const std::string &str) {
/**
  Function: Check if a string contains a number.
  Refrence: https://stackoverflow.com/questions/4654636/how-to-determine-if-a-string-is-a-number-with-c
*/
    return !str.empty() && std::find_if(str.begin(), str.end(), [](char c) { return !std::isdigit(c); }) == str.end();
}//is_number()
