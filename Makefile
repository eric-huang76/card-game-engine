CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -march=haswell

engine: engine.c engine.h
	$(CC) $(CFLAGS) engine.c engine.h -o main

clean:
	rm -f *.o engine
