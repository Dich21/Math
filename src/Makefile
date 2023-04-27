CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c11
FUN= MATH_FUN/*.c
CHECK_LIBS=$(shell pkg-config --libs check)
CHECK_CFLAGS=$(shell pkg-config --cflags check)
GCOV_FLAGS=-fprofile-arcs -ftest-coverage
TESTS=TESTS/*.c

#build

all: style test anime  

anime:
	@$(CC) $(CFLAGS) -o $@ MISC/animation.c
	@./$@

test: clean s21_math.a
	@$(CC) -c $(TESTS) $(CHECK_CFLAGS)
	@$(CC) $(CFLAGS) *.o s21_math.a $(CHECK_LIBS) -o test
	@./test

s21_math.a: 
	
	@$(CC) $(CFLAGS) -c $(FUN)
	@ar rcs s21_math.a *.o
	@ranlib s21_math.a

#styling

style: 
	@clang-format -i $(FUN) $(TESTS) MISC/*.c

#cleaning

clean: 
	@rm -f *.o *.a *.gcno *.gcda *.html *.png *.info *.css
	@rm -rf MATH_FUN/*.html *.png *.info *.css
	@rm -rf TESTS/*.html *.png *.info *.css
	@rm -rf s21_math_test
	@rm -rf icovOutput
	@rm -rf Library
	@rm -rf test
	@rm -rf anime
	@rm -rf src

clean_finish: 
	@rm -f *.o *.a *.gcno *.gcda *.html *.png *.info *.css
	@rm -rf MATH_FUN/*.html *.png *.info *.css
	@rm -rf TESTS/*.html *.png *.info *.css
	@rm -rf s21_math_test 
	@rm -rf icovOutput
	@rm Library
	@rm -rf test
	@rm -rf anime

#gcov_report
gcov_report: s21_mathGR grBuild grRun icov htmlGen open 

s21_mathGR:
	@$(CC) $(CFLAGS) $(GCOV_FLAGS) -c $(FUN)
	@ar rc s21_math.a *.o
	@ranlib s21_math.a

grBuild:
	@$(CC) $(CFLAGS) $(GCOV_FLAGS) $(TESTS) $(CHECK_LIBS) $(CHECK_CFLAGS) s21_math.a -o icovOutput

grRun:
	@./icovOutput

icov:
	@lcov -t "test" -o icovOutput.info -c -d ./

htmlGen:
	@genhtml  icovOutput.info

open:
	@open ./index.html

#docker

docker:
	docker build . -t s21_decimal --platform linux/amd64
	docker run s21_decimal
