all: main.o

main.o:
	g++ main.cpp -lncurses -o main.o
