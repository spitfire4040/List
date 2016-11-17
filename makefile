CC=g++
CXXFLAGS= -g -Wall -std=c++0x

all:		run

run:		main.o list.o
			$(CC) $(CXXFLAGS) -o run main.o list.o

main.o:		main.cpp
			$(CC) $(CXXFLAGS) -c main.cpp

Animal.o:	list.cpp list.h
			$(CC) $(CXXFLAGS) -c list.cpp

clean:		
			\rm *.o run
