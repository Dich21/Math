#include "s21_tests.h"

// abs
START_TEST(abs_1) {
  int x = -3;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(abs_2) {
  int x = 0;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(abs_3) {
  int x = 6;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

// ceil
START_TEST(ceil_1) {
  double x = 6.5673839393;
  ck_assert_int_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(ceil_2) {
  double x = -6.999999999;
  ck_assert_int_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(ceil_3) {
  double x = 0;
  ck_assert_int_eq(s21_ceil(x), ceil(x));
}
END_TEST

// floor
START_TEST(floor_1) {
  double x = 6.5673839393;
  ck_assert_int_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(floor_2) {
  double x = -6.999999999;
  ck_assert_int_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(floor_3) {
  double x = 0;
  ck_assert_int_eq(s21_floor(x), floor(x));
}
END_TEST

// fabs
START_TEST(fabs_1) {
  double x = 6.5673839393;
  ck_assert_int_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(fabs_2) {
  double x = -6.999999999;
  ck_assert_int_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(fabs_3) {
  double x = 0;
  ck_assert_int_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(exp_1) {
  double x = 0;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_2) {
  double x = 5;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_3) {
  double x = 10;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

// fmod

START_TEST(fmod_1) {
  double x = 6.5673839393;
  double y = 3.68686;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

START_TEST(fmod_2) {
  double x = -6.999999999;
  double y = 3.68686;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

START_TEST(fmod_3) {
  double x = 0;
  double y = 3.68686;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

START_TEST(fmod_4) {
  double x = 3.68686;
  double y = 0.00;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

START_TEST(fmod_5) {
  double x = 3.68686;
  double y = -6.00;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

START_TEST(fmod_6) {
  double x = -0.000;
  double y = 56.787878;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

START_TEST(fmod_7) {
  double x = S21_NaN;
  double y = 56.787878;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

START_TEST(fmod_8) {
  double x = 56.787878;
  double y = S21_NaN;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

START_TEST(fmod_9) {
  double x = S21_Inf;
  double y = S21_NaN;
  ck_assert_int_eq(s21_fmod(x, y), fmod(x, y));
}
END_TEST

// pow

START_TEST(pow_1) {
  double x = 1;
  double y = 1;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_2) {
  double x = 0;
  double y = 0;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_3) {
  double x = 1;
  double y = 0;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_4) {
  double x = 0;
  double y = 1;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_5) {
  double x = 1;
  double y = 3;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_6) {
  double x = 3;
  double y = 1;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_7) {
  double x = 3;
  double y = 1000000;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_8) {
  double x = 10000;
  double y = 80;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_9) {
  double x = 2;
  double y = -4;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_10) {
  double x = 2.51;
  double y = -4;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_11) {
  double x = 2.51;
  double y = -4.11;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_12) {
  double x = 2;
  double y = -4.11;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_13) {
  double x = 2.51;
  double y = -4;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_14) {
  double x = S21_Inf;
  double y = 5;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_15) {
  double x = 2;
  double y = S21_Inf;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_16) {
  double x = S21_NaN;
  double y = 4;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

START_TEST(pow_17) {
  double x = 12;
  double y = S21_NaN;
  ck_assert_int_eq(s21_pow(x, y), pow(x, y));
}
END_TEST

// sqrt

START_TEST(sqrt_1) {
  double x = 1;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_2) {
  double x = 0;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_3) {
  double x = -0;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_4) {
  double x = 000;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_5) {
  double x = 17;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_6) {
  double x = s21_pow(17, 10);
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_7) {
  double x = 3;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_8) {
  double x = 10000;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_9) {
  double x = 2;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_10) {
  double x = 2.51;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_11) {
  double x = -4000;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_12) {
  double x = 2;

  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_13) {
  double x = 01;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_14) {
  double x = S21_Inf;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_15) {
  double x = 2;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_16) {
  double x = S21_NaN;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_17) {
  double x = 12;
  ck_assert_int_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

// log

START_TEST(log_1) {
  double x = 1;
  ck_assert_int_eq(s21_log(x), log(x));
}
END_TEST

START_TEST(log_2) {
  double x = 0;
  ck_assert_int_eq(s21_log(x), log(x));
}
END_TEST

START_TEST(log_3) {
  double x = 3;
  ck_assert_int_eq(s21_log(x), log(x));
}
END_TEST

START_TEST(log_4) {
  double x = 10000;
  ck_assert_int_eq(s21_log(x), log(x));
}
END_TEST

START_TEST(log_5) {
  double x = -2;
  ck_assert_int_eq(s21_log(x), log(x));
}
END_TEST

START_TEST(log_6) {
  double x = 2.51;
  ck_assert_int_eq(s21_log(x), log(x));
}
END_TEST

START_TEST(log_7) {
  double x = -0;
  ck_assert_int_eq(s21_log(x), log(x));
}
END_TEST

START_TEST(log_8) {
  double x = S21_Inf;
  ck_assert_int_eq(s21_log(x), log(x));
}
END_TEST

START_TEST(log_9) {
  double x = 2;
  ck_assert_int_eq(s21_log(x), log(x));
}
END_TEST

START_TEST(log_10) {
  double x = S21_NaN;
  ck_assert_int_eq(s21_log(x), log(x));
}
END_TEST

// sin

START_TEST(sin_1) {
  double x = 1;
  ck_assert_int_eq(s21_sin(x), sin(x));
}
END_TEST

START_TEST(sin_2) {
  double x = 0;
  ck_assert_int_eq(s21_sin(x), sin(x));
}
END_TEST

START_TEST(sin_3) {
  double x = 3;
  ck_assert_int_eq(s21_sin(x), sin(x));
}
END_TEST

START_TEST(sin_4) {
  double x = 10000;
  ck_assert_int_eq(s21_sin(x), sin(x));
}
END_TEST

START_TEST(sin_5) {
  double x = -2;
  ck_assert_int_eq(s21_sin(x), sin(x));
}
END_TEST

START_TEST(sin_6) {
  double x = 2.51;
  ck_assert_int_eq(s21_sin(x), sin(x));
}
END_TEST

START_TEST(sin_7) {
  double x = -0;
  ck_assert_int_eq(s21_sin(x), sin(x));
}
END_TEST

START_TEST(sin_8) {
  double x = S21_Inf;
  ck_assert_int_eq(s21_sin(x), sin(x));
}
END_TEST

START_TEST(sin_9) {
  double x = 2;
  ck_assert_int_eq(s21_sin(x), sin(x));
}
END_TEST

START_TEST(sin_10) {
  double x = S21_NaN;
  ck_assert_int_eq(s21_sin(x), sin(x));
}
END_TEST

// atan

START_TEST(atan_1) {
  double x = 1;
  ck_assert_int_eq(s21_atan(x), atan(x));
}
END_TEST

START_TEST(atan_2) {
  double x = 0;
  ck_assert_int_eq(s21_atan(x), atan(x));
}
END_TEST

START_TEST(atan_3) {
  double x = 3;
  ck_assert_int_eq(s21_atan(x), atan(x));
}
END_TEST

START_TEST(atan_4) {
  double x = 10000;
  ck_assert_int_eq(s21_atan(x), atan(x));
}
END_TEST

START_TEST(atan_5) {
  double x = -2;
  ck_assert_int_eq(s21_atan(x), atan(x));
}
END_TEST

START_TEST(atan_6) {
  double x = 2.51;
  ck_assert_int_eq(s21_atan(x), atan(x));
}
END_TEST

START_TEST(atan_7) {
  double x = -0;
  ck_assert_int_eq(s21_atan(x), atan(x));
}
END_TEST

START_TEST(atan_8) {
  double x = S21_Inf;
  ck_assert_int_eq(s21_atan(x), atan(x));
}
END_TEST

START_TEST(atan_9) {
  double x = 2;
  ck_assert_int_eq(s21_atan(x), atan(x));
}
END_TEST

START_TEST(atan_10) {
  double x = S21_NaN;
  ck_assert_int_eq(s21_atan(x), atan(x));
}
END_TEST

// cos

START_TEST(cos_1) {
  double x = 1;
  ck_assert_int_eq(s21_cos(x), cos(x));
}
END_TEST

START_TEST(cos_2) {
  double x = 0;
  ck_assert_int_eq(s21_cos(x), cos(x));
}
END_TEST

START_TEST(cos_3) {
  double x = 3;
  ck_assert_int_eq(s21_cos(x), cos(x));
}
END_TEST

START_TEST(cos_4) {
  double x = 10000;
  ck_assert_int_eq(s21_cos(x), cos(x));
}
END_TEST

START_TEST(cos_5) {
  double x = -2;
  ck_assert_int_eq(s21_cos(x), cos(x));
}
END_TEST

START_TEST(cos_6) {
  double x = 2.51;
  ck_assert_int_eq(s21_cos(x), cos(x));
}
END_TEST

START_TEST(cos_7) {
  double x = -0;
  ck_assert_int_eq(s21_cos(x), cos(x));
}
END_TEST

START_TEST(cos_8) {
  double x = S21_Inf;
  ck_assert_int_eq(s21_cos(x), cos(x));
}
END_TEST

START_TEST(cos_9) {
  double x = S21_PI;
  ck_assert_int_eq(s21_cos(x), cos(x));
}
END_TEST

START_TEST(cos_10) {
  double x = S21_NaN;
  ck_assert_int_eq(s21_cos(x), cos(x));
}
END_TEST

// asin

START_TEST(asin_1) {
  double x = 1;
  ck_assert_int_eq(s21_asin(x), asin(x));
}
END_TEST

START_TEST(asin_2) {
  double x = 0;
  ck_assert_int_eq(s21_asin(x), asin(x));
}
END_TEST

START_TEST(asin_3) {
  double x = 3;
  ck_assert_int_eq(s21_asin(x), asin(x));
}
END_TEST

START_TEST(asin_4) {
  double x = 10000;
  ck_assert_int_eq(s21_asin(x), asin(x));
}
END_TEST

START_TEST(asin_5) {
  double x = -2;
  ck_assert_int_eq(s21_asin(x), asin(x));
}
END_TEST

START_TEST(asin_6) {
  double x = 2.51;
  ck_assert_int_eq(s21_asin(x), asin(x));
}
END_TEST

START_TEST(asin_7) {
  double x = -0;
  ck_assert_int_eq(s21_asin(x), asin(x));
}
END_TEST

START_TEST(asin_8) {
  double x = S21_Inf;
  ck_assert_int_eq(s21_asin(x), asin(x));
}
END_TEST

START_TEST(asin_9) {
  double x = S21_PI;
  ck_assert_int_eq(s21_asin(x), asin(x));
}
END_TEST

START_TEST(asin_10) {
  double x = S21_NaN;
  ck_assert_int_eq(s21_asin(x), asin(x));
}
END_TEST

// acos

START_TEST(acos_1) {
  double x = 1;
  ck_assert_int_eq(s21_acos(x), acos(x));
}
END_TEST

START_TEST(acos_2) {
  double x = 0;
  ck_assert_int_eq(s21_acos(x), acos(x));
}
END_TEST

START_TEST(acos_3) {
  double x = 3;
  ck_assert_int_eq(s21_acos(x), acos(x));
}
END_TEST

START_TEST(acos_4) {
  double x = 10000;
  ck_assert_int_eq(s21_acos(x), acos(x));
}
END_TEST

START_TEST(acos_5) {
  double x = -2;
  ck_assert_int_eq(s21_acos(x), acos(x));
}
END_TEST

START_TEST(acos_6) {
  double x = 2.51;
  ck_assert_int_eq(s21_acos(x), acos(x));
}
END_TEST

START_TEST(acos_7) {
  double x = -0;
  ck_assert_int_eq(s21_acos(x), acos(x));
}
END_TEST

START_TEST(acos_8) {
  double x = S21_Inf;
  ck_assert_int_eq(s21_acos(x), acos(x));
}
END_TEST

START_TEST(acos_9) {
  double x = S21_PI;
  ck_assert_int_eq(s21_acos(x), acos(x));
}
END_TEST

START_TEST(acos_10) {
  double x = S21_NaN;
  ck_assert_int_eq(s21_acos(x), acos(x));
}
END_TEST

/////////////////SSUUIITTEE
///////
///////////
////////////

// abs
Suite *abs_tests(void) {
  Suite *m = suite_create("S21_ABS_TESTS");

  TCase *tm = tcase_create("s21_abs");

  tcase_add_test(tm, abs_1);
  tcase_add_test(tm, abs_2);
  tcase_add_test(tm, abs_3);

  suite_add_tcase(m, tm);

  return m;
}
// ceil
Suite *ceil_tests(void) {
  Suite *m = suite_create("S21_CEIL_TESTS");

  TCase *tm = tcase_create("s21_ceil");

  tcase_add_test(tm, ceil_1);
  tcase_add_test(tm, ceil_2);
  tcase_add_test(tm, ceil_3);

  suite_add_tcase(m, tm);

  return m;
}
// floor
Suite *floor_tests(void) {
  Suite *m = suite_create("S21_FLOOR_TESTS");

  TCase *tm = tcase_create("s21_floor");

  tcase_add_test(tm, floor_1);
  tcase_add_test(tm, floor_2);
  tcase_add_test(tm, floor_3);

  suite_add_tcase(m, tm);

  return m;
}
// fabs
Suite *fabs_tests(void) {
  Suite *m = suite_create("S21_FABS_TESTS");

  TCase *tm = tcase_create("s21_fabs");

  tcase_add_test(tm, fabs_1);
  tcase_add_test(tm, fabs_2);
  tcase_add_test(tm, fabs_3);

  suite_add_tcase(m, tm);

  return m;
}
// exp
Suite *exp_tests(void) {
  Suite *m = suite_create("S21_EXP_TESTS");

  TCase *tm = tcase_create("s21_exp");

  tcase_add_test(tm, exp_1);
  tcase_add_test(tm, exp_2);
  tcase_add_test(tm, exp_3);

  suite_add_tcase(m, tm);

  return m;
}
// fmod
Suite *fmod_tests(void) {
  Suite *m = suite_create("S21_FMOD_TESTS");

  TCase *tm = tcase_create("s21_fmod");

  tcase_add_test(tm, fmod_1);
  tcase_add_test(tm, fmod_2);
  tcase_add_test(tm, fmod_3);
  tcase_add_test(tm, fmod_4);
  tcase_add_test(tm, fmod_5);
  tcase_add_test(tm, fmod_6);
  tcase_add_test(tm, fmod_7);
  tcase_add_test(tm, fmod_8);
  tcase_add_test(tm, fmod_9);

  suite_add_tcase(m, tm);

  return m;
}

// pow
Suite *pow_tests(void) {
  Suite *m = suite_create("S21_POW_TESTS");

  TCase *tm = tcase_create("s21_pow");

  tcase_add_test(tm, pow_1);
  tcase_add_test(tm, pow_2);
  tcase_add_test(tm, pow_3);
  tcase_add_test(tm, pow_4);
  tcase_add_test(tm, pow_5);
  tcase_add_test(tm, pow_6);
  tcase_add_test(tm, pow_7);
  tcase_add_test(tm, pow_8);
  tcase_add_test(tm, pow_9);
  tcase_add_test(tm, pow_10);
  tcase_add_test(tm, pow_11);
  tcase_add_test(tm, pow_12);
  tcase_add_test(tm, pow_13);
  tcase_add_test(tm, pow_14);
  tcase_add_test(tm, pow_15);
  tcase_add_test(tm, pow_16);
  tcase_add_test(tm, pow_17);

  suite_add_tcase(m, tm);

  return m;
}

// sqrt
Suite *sqrt_tests(void) {
  Suite *m = suite_create("S21_SQRT_TESTS");

  TCase *tm = tcase_create("s21_sqrt");

  tcase_add_test(tm, sqrt_1);
  tcase_add_test(tm, sqrt_2);
  tcase_add_test(tm, sqrt_3);
  tcase_add_test(tm, sqrt_4);
  tcase_add_test(tm, sqrt_5);
  tcase_add_test(tm, sqrt_6);
  tcase_add_test(tm, sqrt_7);
  tcase_add_test(tm, sqrt_8);
  tcase_add_test(tm, sqrt_9);
  tcase_add_test(tm, sqrt_10);
  tcase_add_test(tm, sqrt_11);
  tcase_add_test(tm, sqrt_12);
  tcase_add_test(tm, sqrt_13);
  tcase_add_test(tm, sqrt_14);
  tcase_add_test(tm, sqrt_15);
  tcase_add_test(tm, sqrt_16);
  tcase_add_test(tm, sqrt_17);

  suite_add_tcase(m, tm);

  return m;
}

// log
Suite *log_tests(void) {
  Suite *m = suite_create("S21_LOG_TESTS");

  TCase *tm = tcase_create("s21_log");

  tcase_add_test(tm, log_1);
  tcase_add_test(tm, log_2);
  tcase_add_test(tm, log_3);
  tcase_add_test(tm, log_4);
  tcase_add_test(tm, log_5);
  tcase_add_test(tm, log_6);
  tcase_add_test(tm, log_7);
  tcase_add_test(tm, log_8);
  tcase_add_test(tm, log_9);
  tcase_add_test(tm, log_10);

  suite_add_tcase(m, tm);

  return m;
}

// sin
Suite *sin_tests(void) {
  Suite *m = suite_create("S21_SIN_TESTS");

  TCase *tm = tcase_create("s21_sin");

  tcase_add_test(tm, sin_1);
  tcase_add_test(tm, sin_2);
  tcase_add_test(tm, sin_3);
  tcase_add_test(tm, sin_4);
  tcase_add_test(tm, sin_5);
  tcase_add_test(tm, sin_6);
  tcase_add_test(tm, sin_7);
  tcase_add_test(tm, sin_8);
  tcase_add_test(tm, sin_9);
  tcase_add_test(tm, sin_10);

  suite_add_tcase(m, tm);

  return m;
}

// atan
Suite *atan_tests(void) {
  Suite *m = suite_create("S21_ATAN_TESTS");

  TCase *tm = tcase_create("s21_atan");

  tcase_add_test(tm, atan_1);
  tcase_add_test(tm, atan_2);
  tcase_add_test(tm, atan_3);
  tcase_add_test(tm, atan_4);
  tcase_add_test(tm, atan_5);
  tcase_add_test(tm, atan_6);
  tcase_add_test(tm, atan_7);
  tcase_add_test(tm, atan_8);
  tcase_add_test(tm, atan_9);
  tcase_add_test(tm, atan_10);

  suite_add_tcase(m, tm);

  return m;
}

// cos
Suite *cos_tests(void) {
  Suite *m = suite_create("S21_COS_TESTS");

  TCase *tm = tcase_create("s21_cos");

  tcase_add_test(tm, cos_1);
  tcase_add_test(tm, cos_2);
  tcase_add_test(tm, cos_3);
  tcase_add_test(tm, cos_4);
  tcase_add_test(tm, cos_5);
  tcase_add_test(tm, cos_6);
  tcase_add_test(tm, cos_7);
  tcase_add_test(tm, cos_8);
  tcase_add_test(tm, cos_9);
  tcase_add_test(tm, cos_10);

  suite_add_tcase(m, tm);

  return m;
}

// asin
Suite *asin_tests(void) {
  Suite *m = suite_create("S21_ASIN_TESTS");

  TCase *tm = tcase_create("s21_asin");

  tcase_add_test(tm, asin_1);
  tcase_add_test(tm, asin_2);
  tcase_add_test(tm, asin_3);
  tcase_add_test(tm, asin_4);
  tcase_add_test(tm, asin_5);
  tcase_add_test(tm, asin_6);
  tcase_add_test(tm, asin_7);
  tcase_add_test(tm, asin_8);
  tcase_add_test(tm, asin_9);
  tcase_add_test(tm, asin_10);

  suite_add_tcase(m, tm);

  return m;
}

// acos
Suite *acos_tests(void) {
  Suite *m = suite_create("S21_ACOS_TESTS");

  TCase *tm = tcase_create("s21_acos");

  tcase_add_test(tm, acos_1);
  tcase_add_test(tm, acos_2);
  tcase_add_test(tm, acos_3);
  tcase_add_test(tm, acos_4);
  tcase_add_test(tm, acos_5);
  tcase_add_test(tm, acos_6);
  tcase_add_test(tm, acos_7);
  tcase_add_test(tm, acos_8);
  tcase_add_test(tm, acos_9);
  tcase_add_test(tm, acos_10);

  suite_add_tcase(m, tm);

  return m;
}