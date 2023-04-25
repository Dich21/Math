CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c11
FUN= MATH_FUN/*.c
CHECK_LIBS=$(shell pkg-config --libs check)
CHECK_CFLAGS=$(shell pkg-config --cflags check)
TESTS=TESTS/s21_tests.c

all: style test clean

test: clean libs21_math.a
	$(CC) -c $(TESTS) $(CHECK_CFLAGS)
	$(CC) $(CFLAGS) *.o libs21_math.a $(CHECK_LIBS) -o test
	./test

libs21_math.a: 
	
	$(CC) $(CFLAGS) -c $(FUN)
	ar rcs libs21_math.a *.o
	ranlib libs21_math.a

gcov_report:

style: 
	clang-format -i $(FUN) $(TESTS)

clean: 
	rm -f *.o *.a
	rm -rf s21_math_test
	rm -rf test
