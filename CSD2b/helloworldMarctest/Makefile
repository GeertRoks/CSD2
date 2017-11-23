#target: source
#	cp source target

#target is afhankelijk van source.
#Als source jonger is dan target, dan copy source naar target.
########################################

#link everything and produce executable
all: world.o hello.o
	g++ -o hello hello.o world.o
world.o: world.cpp
	g++ -c world.cpp

hello.o: hello.cpp
	g++ -c hello.cpp
