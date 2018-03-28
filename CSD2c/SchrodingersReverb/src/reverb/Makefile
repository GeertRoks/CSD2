GXX = g++
CFLAGS = -std=c++11 -Wall

all: filter schrodingersReverb
	mv *.o ../../obj

schrodingersReverb: schrodingersReverb.cpp
	$(GXX) $(CFLAGS) -c schrodingersReverb.cpp

filter: filter/*.cpp
	cd filter/ && $(MAKE)
