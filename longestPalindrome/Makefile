CC := cc

clean:
	\rm -f a.out test answer hint

test: test.c question.c
	$(CC) test.c question.c -o test

answer: test.c answer.c
	$(CC) test.c answer.c -o answer

hint: test.c hint.c
	$(CC) test.c hint.c -o hint

all: test.c question.c hint.c answer.c
	$(CC) test.c question.c -o test
	$(CC) test.c answer.c -o answer
	$(CC) test.c hint.c -o hint
