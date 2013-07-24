CC := cc

clean:
	\rm -f a.out test answer hints

test: test.c question.c
	$(CC) test.c question.c -o test

answer: test.c answer.c
	$(CC) test.c answer.c -o answer

hints: test.c hints.c
	$(CC) test.c hints.c -o hints

all: test.c question.c hints.c answer.c
	$(CC) test.c question.c -o test
	$(CC) test.c answer.c -o answer
