CC=g++
CFLAGS=-Wall -Wextra -std=c++11
PROGS=test

.PHONY: all clean

all: $(PROGS)

clean:
	rm -rf *.o $(PROGS)

test: lattice.o

lattice.o: lattice.cpp lattice.h
