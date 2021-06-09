all: main

person.o: person.c person.h ../date.h
	gcc -c person.c

date.o: ../date.c ../date.h
	gcc -c ../date.c

main.o: main.c
	gcc -c main.c

main: main.o person.o date.o
	gcc -o main main.o person.o date.o
