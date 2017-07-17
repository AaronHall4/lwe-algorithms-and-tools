CC=g++
CFLAGS=-Wall -Wextra -std=c++11
LDLIBS=-lntl -lgmp -lm
PROGS=test

.PHONY: all clean

all: $(PROGS)

clean:
	rm -rf *.o a.out $(PROGS)

test: llltest.o
	$(CC) llltest.o $(LDLIBS) -o test

llltest.o: llltest.cpp

