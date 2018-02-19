CC=g++
LIBS=libs/jack libs/oscillators libs/synthesizers libs/filters
CFLAGS=-Wall -std=c++1z
LDFLAGS=-L"C:/Program Files (x86)/Jack/lib" -llibjack
INCLUDE_PATH=libs/


synthesizer: libraries main.cpp
	$(CC) main.cpp $(wildcard libraries/*) -I$(INCLUDE_PATH) -o synthesizer $(LDFLAGS)

libraries: $(wildcard libs/jack/* libs/oscillators/* libs/synthesizers/* libs/filters/*)
	for dir in $(LIBS); do \
		cd $$dir; \
		$(CC) -c *.cpp -I../; \
		mv *.o ../../libraries; \
		cd -; \
	done

# jack: $(wildcard libs/jack/*)
# 	#jack
# 	cd libs/jack;
# 	$(CC) -c *.cpp -I../;
# 	mv *.o ../../libraries;
# 	cd ../..;
#
# oscillators: $(wildcard libs/oscillators/*)
# 	#oscillators
# 	cd libs/oscillators;
# 	$(CC) -c *.cpp -I../;
# 	mv *.o ../../libraries;
# 	cd ../..;
#
# synthesizers: $(wildcard libs/synthesizers/*)
# 	#synthesizers
# 	cd libs/synthesizers;
# 	$(CC) -c *.cpp -I../;
# 	mv *.o ../../libraries;
# 	cd ../..;

clean:
	rm -r libraries/*.o synthesizer
