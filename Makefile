all: test

test: msia.c test.c
	gcc -o test msia.c test.c

clean:
	rm test
