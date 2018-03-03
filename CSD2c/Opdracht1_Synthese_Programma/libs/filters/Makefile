CC = g++
CFLAGS = -Wall -std=c++1z

all: filter highPass lowPass
	mv *.o ../../libraries

filter: filter.cpp
	$(CC) $(CFLAGS) -c filter.cpp

highPass: highPass.cpp
	$(CC) $(CFLAGS) -c highPass.cpp

lowPass: lowPass.cpp
	$(CC) $(CFLAGS) -c lowPass.cpp
