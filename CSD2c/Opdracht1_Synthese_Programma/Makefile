CC = g++
CFLAGS = -Wall -std=c++1z
LDFLAGS = -L"C:/Program Files (x86)/Jack/lib" -llibjack
INCLUDE_PATH = libs/
LIBS = libs/jack/ libs/synthesizers/

build: synth jack main.cpp
	$(CC) main.cpp $(wildcard libraries/*) -I$(INCLUDE_PATH) -o synthesizer $(LDFLAGS)

synth:
	cd libs/synthesizers && $(MAKE)

jack:
	cd libs/jack && $(MAKE)

clean:
	rm -r libraries/*.o synthesizer
