GXX = g++
CFLAGS = -std=c++11 -Wall

all: filter allpass comb lowpass
	mv *.o ../../../obj

filter: filter.cpp
	$(GXX) $(CFLAGS) -c filter.cpp

allpass: allpass.cpp
	$(GXX) $(CFLAGS) -c allpass.cpp

comb: comb.cpp
	$(GXX) $(CFLAGS) -c comb.cpp

lowpass: lowpass.cpp
	$(GXX) $(CFLAGS) -c lowpass.cpp

feedbackfilter: feedbackFilter.cpp
	$(GXX) $(CFLAGS) -c feedbackfilter.cpp
