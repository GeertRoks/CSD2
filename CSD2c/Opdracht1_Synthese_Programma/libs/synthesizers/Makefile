CC = g++
CFLAGS = -Wall -std=c++1z

# default make recipe (compile everything)
all: synth simple sub oscillator filter
	mv *.o ../../libraries

# make specific synths and leave out the unused files.
subSynth: synth sub oscillator filter
	mv *.o ../../libraries

simpleSynth: synth simple oscillator filter
	mv *.o ../../libraries

# targets of synthesizer itself
synth: synthesizer.cpp
	$(CC) $(CFLAGS) -c synthesizer.cpp

simple: simpleSynth.cpp
	$(CC) $(CFLAGS) -c simpleSynth.cpp

sub: subSynth.cpp
	$(CC) $(CFLAGS) -c subSynth.cpp

# targets of sub directories
oscillator:
	cd ../oscillators && $(MAKE)

filter:
	cd ../filters && $(MAKE)
