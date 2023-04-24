#include "s21_tests.h"

START_TEST(abc_1) {
    int x = -3;
    ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(abc_2) {
    int x = 0;
    ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(abc_3) {
    int x = 6;
    ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(ceil_1) {
    int x = 6;
    ck_assert_int_eq(s21_ceil(x), ceil(x));
}
END_TEST

Suite *math_tests(void) {
    Suite *m = suite_create("S21_MATH_TESTS");

    TCase *tm = tcase_create("s21_abs");

    tcase_add_test(tm, abc_1);
    tcase_add_test(tm, abc_2);
    tcase_add_test(tm, abc_3);

    suite_add_tcase(m, tm);

    return m;
}
