CC = gcc
CFLAGS = -O3 -c -Wall

all: obj
	$(CC) -o main *.o -lncurses
	rm *.o
	
obj:
	$(CC) $(CFLAGS) *.c	
	
clean:
	rm main
