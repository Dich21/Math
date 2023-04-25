#ifndef TEST_S21_TESTS_H_
#define TEST_S21_TESTS_H_

#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../s21_math.h"

Suite *math_tests(void);

int main(void) {
    int number_failed = 0;
    int total_tests = 0;
    int total_success = 0;
    int total_failed = 0;

    Suite *math[] = {math_tests(), NULL};

    for (int i = 0; math[i] != NULL; i++) {
        printf("\n\n");
        SRunner *sr = srunner_create(math[i]);

        srunner_run_all(sr, CK_NORMAL);

        int ntests = srunner_ntests_run(sr);
        total_tests += ntests;
        number_failed = srunner_ntests_failed(sr);
        total_failed += number_failed;
        srunner_free(sr);
    }
    printf("\n\n");
    int total_passed = total_tests - total_failed;
    printf("\033[34mTotal tests run: %d\033[0m\t", total_tests);
    printf("\033[32mTotal tests passed: %d\033[0m\t", total_passed);
    printf("\033[31mTotal tests failed: %d\033[0m\n", total_failed);

    return (number_failed == 0) ? 0 : 1;
}

#endif  // TEST_S21_TESTS_H_