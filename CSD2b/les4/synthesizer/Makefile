CFLAGS = -Wall -std=c++1z
LDFLAGS= -L"C:/Program Files (x86)/Jack/lib" -llibjack

all: synthesizer.o simpleSynth.o oscillator.o sineWave.o squareWave.o jack_module.o main.o
	g++ -o synthesizer $(CFLAGS) synthesizer.o simpleSynth.o oscillator.o sineWave.o squareWave.o jack_module.o main.o $(LDFLAGS)

main.o: main.cpp
	g++ -c main.cpp

synthesizer.o: synthesizer.cpp
	g++ -c synthesizer.cpp

simpleSynth.o: simpleSynth.cpp
	g++ -c simpleSynth.cpp

oscillator.o: oscillator.cpp
	g++ -c oscillator.cpp

sineWave.o: sineWave.cpp
	g++ -c sineWave.cpp

squareWave.o: squareWave.cpp
	g++ -c squareWave.cpp

jack_module.o: jack_module.cpp
	g++ -c jack_module.cpp
