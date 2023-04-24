CC=gcc
CFLAGS= -Wall -Wextra -Werror -std=c11
FUN= MATH_FUN/*.c
CHECK_LINK=$(shell pkg-config --libs --cflags check)
TESTS= TESTS/*.c

s21_abc.a: $(CC) $(CFLAGS) -c MATH_FUN/s21_abc.c
	ar rcs libs21_abc.a *.o
	runlib libs21_abc.a

test_abc: s21_abc.a
	$(CC) $(CFLAGS) s21_abc.a $(TESTS) $(CHECK_PATH) -o s21_abc_tests_o

abc: $(CC) $(CFLAGS) -c MATH_FUN/s21_abc.c -o s21_abc.o
	$(CC) $(CFLAGS) -c $(TESTS) -o s21_tests.o
	$(CC) $(CFLAGS) -c $@
	./$@

s21_math.a: $(CC) $(CFLAGS) -c $(FUN)
	ar rcs libs21_math.a *.o
	runlib libs21_math.a

test: s21_math.a
	$(CC) $(CFLAGS) s21_math.a $(TESTS) $(CHECK_PATH) -o s21_math_tests_o

gcov_report:

run: 
	test

r: 
	clean run

style: 
	clang-format -i $(FUN) $(TESTS)

clean: 
	rm -f *.o *.a
