CC := cc

clean:
	\rm -f a.out test answer

test: test.c scaffold.c
	$(CC) test.c scaffold.c -o test

answer: test.c answer.c
	$(CC) test.c answer.c -o answer

hints: test.c hints.c
	$(CC) test.c hints.c -o hints

all: test.c scaffold.c hints.c answer.c
	$(CC) test.c scaffold.c -o test
	$(CC) test.c solution.c -o answer
