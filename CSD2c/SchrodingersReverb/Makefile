GXX = g++
CFLAGS = -std=c++11 -I/inc/mingw-std-threads/ -mwindows
LDFLAGS = -L"C:/Program Files (x86)/Jack/lib" -llibjack -lpthread

all: main jack reverb
	$(GXX) $(CFLAGS) $(wildcard obj/*) -o Reverb $(LDFLAGS)

main: src/main.cpp
	$(GXX) $(CFLAGS) -c src/main.cpp
	mv main.o obj/

jack: src/jack/
	cd src/jack/ && $(MAKE)

reverb: src/reverb/
	cd src/reverb/ && $(MAKE)

clean:
	rm obj/*.o
