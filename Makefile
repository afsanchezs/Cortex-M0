cc = gcc
CFlAGS = -O3 -c -Wall

all:	obj
	$(cc) -o main *.o

obj:
	$(cc) $(CFLAGS) *.c

clean:
	rm main.exe 
