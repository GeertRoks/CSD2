CC = g++
CFLAGS = -Wall -std=c++1z

all: oscillator sine saw square
	mv *.o ../../libraries

oscillator: oscillator.cpp
	$(CC) $(CFLAGS) -c oscillator.cpp

sine: sineWave.cpp
	$(CC) $(CFLAGS) -c sineWave.cpp

saw: sawWave.cpp
	$(CC) $(CFLAGS) -c sawWave.cpp

square: squareWave.cpp
	$(CC) $(CFLAGS) -c squareWave.cpp
