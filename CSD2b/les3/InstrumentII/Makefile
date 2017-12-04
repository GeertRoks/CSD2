all: main.o instrument.o wind.o stringInst.o
	g++ -o instrumentII main.o instrument.o wind.o stringInst.o

main.o: main.cpp
	g++ -c main.cpp

instrument.o: instrument.cpp
	g++ -c instrument.cpp

wind.o: wind.cpp
	g++ -c wind.cpp

stringInst.o: stringInst.cpp
	g++ -c stringInst.cpp
