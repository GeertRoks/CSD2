GXX = g++
CFLAGS = -std=c++11 -Wall

all: module ring
	mv *.o ../../obj

module: jack_module.cpp
	$(GXX) $(CFLAGS) -c jack_module.cpp

ring: ringbuffer.cpp
	$(GXX) $(CFLAGS) -c ringbuffer.cpp
