CFLAGS = -g3 -Wall -I../include
LDLIBS = -l:func.o
LDFLAGS = -L../

.PHONY: test
test: build_test
	#./test

build_test: clean test.o
	$(CC) $(CFLAGS) $(LDFLAGS) -o test test.o $(LDLIBS)

clean:
	rm *.o
