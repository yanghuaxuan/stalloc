CFLAGS := -Wall -pedantic
CC := gcc

test: test.c stalloc.c
	$(CC) $(CFLAGS) $^ -o test
