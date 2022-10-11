CC = g++
CFLAG = -Wall

all: main

main: main.o util.o
	$(CC) $(CFLAG) -o main main.o util.o

main.o: main.cpp util.hpp
	$(CC) $(CFLAG) -c main.cpp

bdd.o: util.cpp util.hpp
	$(CC) $(CFLAG) -c util.cpp


clean:
	rm -f *.o main