CC=gcc
CFLAGS=-I.

main: main.o hash_table.o prime.o
	$(CC) -o main main.o hash_table.o prime.o
