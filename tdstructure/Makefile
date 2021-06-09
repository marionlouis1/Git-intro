all: main

liste.o: liste.c liste.h date.h
	gcc -c liste.c

date.o: date.c date.h
	gcc -c date.c

main.o: main.c
	gcc -c main.c

main: main.o liste.o date.o
	gcc -o main main.o liste.o date.o
