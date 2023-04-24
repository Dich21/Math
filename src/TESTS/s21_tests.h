#ifndef TEST_S21_TESTS_H_
#define TEST_S21_TESTS_H_

#include "../s21_math.h"

#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

Suite* math_tests(void);

int main(void) {
    int number_failed= 0;

    Suite *math = math_tests();
    SRunner *sr = srunner_create(math);

    srunner_run_all(sr, CK_NORMAL);

    number_failed += srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? 0 : 1;
}

#endif // TEST_S21_TESTS_H_