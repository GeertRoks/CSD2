LIBS=libs/jack libs/oscillators libs/synthesizers
CFLAGS=-Wall -std=c++1z
LDFLAGS=-L"C:/Program Files (x86)/Jack/lib" -llibjack
INCLUDE_PATH=libs/

synthesizer: libraries
	g++ main.cpp $(wildcard libraries/*) -I$(INCLUDE_PATH) -o synthesizer $(LDFLAGS)

libraries:
	mkdir libraries/
	for dir in $(LIBS); do \
		cd $$dir; \
		g++ -c *.cpp -I../; \
		mv *.o ../../libraries; \
		cd -; \
	done
clean:
	rm -r libraries/ synthesizer
