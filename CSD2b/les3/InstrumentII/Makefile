all: instrument.o keys.o strings.o brass.o main.o
	g++ -o instrumentII instrument.o keys.o strings.o brass.o main.o

main.o: main.cpp
	g++ -c main.cpp

instrument.o: instrument.cpp
	g++ -c instrument.cpp

keys.o: keys.cpp
	g++ -c keys.cpp

strings.o: strings.cpp
	g++ -c strings.cpp

brass.o: brass.cpp
	g++ -c brass.cpp
