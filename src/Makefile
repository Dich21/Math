CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c11
FUN= MATH_FUN/*.c
CHECK_PATH=$(shell pkg-config --libs --cflags check)
TESTS=TESTS/s21_tests.c

libs21_math.a: 
	
	$(CC) $(CFLAGS) -c $(FUN)
	ar rcs libs21_math.a *.o
	ranlib libs21_math.a

test: clean libs21_math.a
	$(CC) -c $(TESTS) $(CHECK_PATH)
	$(CC) $(CFLAGS) *.o libs21_math.a $(CHECK_PATH) -o test
	./test
	clean

gcov_report:

r: test

style: 
	clang-format -i $(FUN) $(TESTS)

clean: 
	rm -f *.o *.a
