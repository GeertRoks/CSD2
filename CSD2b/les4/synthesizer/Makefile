all: synthesizer.o simpleSynth.o oscillator.o sineWave.o squareWave.o main.o
	g++ -o synthesizer synthesizer.o simpleSynth.o oscillator.o sineWave.o squareWave.o main.o

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
