#! /bin/bash

#compile both files
g++ -c world.cpp
g++ -c hello.cpp

#link everything and produce .exe
g++ -o hello hello.o world.o
