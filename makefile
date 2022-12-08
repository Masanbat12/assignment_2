CC = gcc
FLAG = -g -Wall

all: connections

connections: main.o my_mat.o
	$(CC) $(FLAG) -o connections main.o my_mat.o

main.o: main.c my_mat.h
	$(CC) $(CFLAGS) -c main.c -o main.o

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAG) -c my_mat.c -o my_mat.o


.PHONY: clean all

clean:
	rm -f *.o *.a *.so  connections