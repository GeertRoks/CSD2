# Makefile for ringbuffer
#
CPP = g++ --std=c++11
CFLAGS = -Wall
LDFLAGS= -lpthread -llibjack


JACKOBJ = ringbuffer.o jack_module.o jack_test.o
FXOBJ = ringbuffer.o jack_module.o
RINGBUFOBJ = ringbuffer.o ringbuffer_test.o
ATOMICOBJ = atomic_test.o

all: ringbuffer_test atomic_test flanger

flanger: $(FXOBJ) flanger.o
	$(CPP) -o $@ $(CFLAGS) $(FXOBJ) flanger.o $(LDFLAGS)

ringbuffer_test: $(RINGBUFOBJ)
	$(CPP) -o $@ $(CFLAGS) $(RINGBUFOBJ) $(LDFLAGS)

atomic_test: $(ATOMICOBJ)
	$(CPP) -o $@ $(CFLAGS) $(ATOMICOBJ)

.cpp.o:
	$(CPP) -c $< $(CFLAGS)

clean:
	rm -f *.o
	rm -f `find . -perm /111 -type f`
