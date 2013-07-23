CC := cc

clean:
	\rm -f a.out test answer

test: test.c scaffold.c
	$(CC) test.c scaffold.c -o test

answer: test.c solution.c
	$(CC) test.c solution.c -o answer

all: test.c scaffold.c solution.c
	$(CC) test.c scaffold.c -o test
	$(CC) test.c solution.c -o answer
