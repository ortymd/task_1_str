CFLAGS = -g3 -Wall -I./include

.PHONY: test clean main 
all: test main 

main: main.o func.o
	$(CC) $(CFLAGS)  -o $@ main.o func.o

test:
	$(MAKE) -C test

clean:
	rm *.o
