CFLAGS = -Wall -pedantic -g

all: ex1 ex2

clean:  
	rm ex1 ex2
	
ex1: ex1.c
	gcc ${CFLAGS} ex1.c -o ex1

ex2: ex2.c
	gcc ${CFLAGS} ex2.c -o ex2