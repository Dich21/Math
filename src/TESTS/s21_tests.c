#include "../s21_tests.h"

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

START_TEST(abs_4) { ck_assert_int_eq(s21_abs(5), abs(5)); }
END_TEST

START_TEST(abs_5) { ck_assert_int_eq(s21_abs(-5), abs(-5)); }
END_TEST

START_TEST(abs_6) {
  ck_assert_int_eq(s21_abs((int)INFINITY), abs((int)INFINITY));
}
END_TEST

START_TEST(abs_7) { ck_assert_int_eq(s21_abs((int)NAN), abs((int)NAN)); }
END_TEST

START_TEST(abs_8) {
  ck_assert_int_eq(s21_abs((int)-INFINITY), abs((int)-INFINITY));
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

START_TEST(ceil_4) {
  ck_assert_double_eq_tol(s21_ceil(-0.1), ceil(-0.1), 0.000001);
}
END_TEST

START_TEST(ceil_5) {
  ck_assert_double_eq_tol(s21_ceil(-213.3), ceil(-213.3), 0.000001);
}
END_TEST

START_TEST(ceil_6) { ck_assert_double_eq(s21_ceil(INFINITY), ceil(INFINITY)); }
END_TEST

START_TEST(ceil_7) {
  ck_assert_double_nan(s21_ceil(NAN));
  ck_assert_double_nan(ceil(NAN));
}
END_TEST

START_TEST(ceil_8) {
  ck_assert_double_eq(s21_ceil(-INFINITY), ceil(-INFINITY));
}
END_TEST

START_TEST(ceil_9) {
  ck_assert_double_eq_tol(s21_ceil(50), ceil(50), 0.000001);
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

START_TEST(floor_4) {
  for (double x = -2000; x < 2000; x += 50)
    ck_assert_int_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(floor_5) {
  ck_assert_double_eq_tol(s21_floor(-0.8), floor(-0.8), 0.000001);
}
END_TEST

START_TEST(floor_6) {
  ck_assert_double_eq_tol(s21_floor(0.8), floor(0.8), 0.000001);
}
END_TEST

START_TEST(floor_7) {
  ck_assert_double_eq_tol(s21_floor(-10.23), floor(-10.23), 0.000001);
}
END_TEST

START_TEST(floor_8) {
  ck_assert_double_eq(s21_floor(INFINITY), floor(INFINITY));
}
END_TEST

START_TEST(floor_9) {
  ck_assert_double_nan(s21_floor(NAN));
  ck_assert_double_nan(floor(NAN));
}
END_TEST

START_TEST(floor_10) {
  ck_assert_double_eq(s21_floor(-INFINITY), floor(-INFINITY));
}
END_TEST

START_TEST(floor_11) {
  ck_assert_double_eq_tol(s21_floor(-1200), floor(-1200), 0.000001);
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

// exp

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

START_TEST(exp_4) { ck_assert_double_eq(s21_exp(25048.369), exp(25048.369)); }
END_TEST

START_TEST(exp_5) {
  ck_assert_double_eq_tol(s21_exp(-14.96), exp(-14.96), 0.000001);
}
END_TEST

START_TEST(exp_6) { ck_assert_double_eq(s21_exp(INFINITY), exp(INFINITY)); }
END_TEST

START_TEST(exp_7) {
  ck_assert_double_nan(s21_exp(NAN));
  ck_assert_double_nan(exp(NAN));
}
END_TEST

START_TEST(exp_8) { ck_assert_double_eq(s21_exp(-INFINITY), exp(-INFINITY)); }
END_TEST

START_TEST(exp_9) { ck_assert_double_eq_tol(s21_exp(0), exp(0), 0.000001); }
END_TEST

START_TEST(exp_10) { ck_assert_double_eq_tol(s21_exp(1), exp(1), 0.000001); }
END_TEST

START_TEST(exp_11) { ck_assert_double_eq_tol(s21_exp(-1), exp(-1), 0.000001); }
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

START_TEST(pow_18) {
  ck_assert_double_nan(s21_pow(-20, 0.4));
  ck_assert_double_nan(pow(-20, 0.4));
}
END_TEST

START_TEST(pow_19) {
  ck_assert_double_eq(s21_pow(INFINITY, INFINITY), pow(INFINITY, INFINITY));
}
END_TEST

START_TEST(pow_20) {
  ck_assert_double_eq(s21_pow(-INFINITY, -INFINITY), pow(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(pow_21) {
  ck_assert_double_nan(s21_pow(NAN, NAN));
  ck_assert_double_nan(pow(NAN, NAN));
}
END_TEST

START_TEST(pow_22) {
  ck_assert_double_nan(s21_pow(INFINITY, NAN));
  ck_assert_double_nan(pow(INFINITY, NAN));
}
END_TEST

START_TEST(pow_23) {
  ck_assert_double_nan(s21_pow(NAN, INFINITY));
  ck_assert_double_nan(pow(NAN, INFINITY));
}
END_TEST

START_TEST(pow_24) {
  ck_assert_double_nan(s21_pow(-INFINITY, NAN));
  ck_assert_double_nan(pow(-INFINITY, NAN));
}
END_TEST

START_TEST(pow_25) {
  ck_assert_double_nan(s21_pow(NAN, -INFINITY));
  ck_assert_double_nan(pow(NAN, -INFINITY));
}
END_TEST

START_TEST(pow_26) {
  ck_assert_double_eq(s21_pow(-INFINITY, INFINITY), pow(-INFINITY, INFINITY));
}
END_TEST

START_TEST(pow_27) {
  ck_assert_double_eq(s21_pow(INFINITY, -INFINITY), pow(INFINITY, -INFINITY));
}
END_TEST

START_TEST(pow_28) {
  ck_assert_double_eq_tol(s21_pow(12.69, 0), pow(12.69, 0), 0.000001);
}
END_TEST

START_TEST(pow_29) {
  ck_assert_double_eq_tol(s21_pow(-20.63, 3), pow(-20.63, 3), 0.000001);
}
END_TEST

START_TEST(pow_30) {
  ck_assert_double_eq_tol(s21_pow(-20.63, 6), pow(-20.63, 6), 0.000001);
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

START_TEST(sqrt_18) {
  ck_assert_double_nan(s21_sqrt(-0.01));
  ck_assert_double_nan(sqrt(-0.01));
}
END_TEST

START_TEST(sqrt_19) { ck_assert_double_eq(s21_sqrt(INFINITY), sqrt(INFINITY)); }
END_TEST

START_TEST(sqrt_20) {
  ck_assert_double_nan(s21_sqrt(NAN));
  ck_assert_double_nan(sqrt(NAN));
}
END_TEST

START_TEST(sqrt_21) {
  ck_assert_double_nan(s21_sqrt(-INFINITY));
  ck_assert_double_nan(sqrt(-INFINITY));
}
END_TEST

START_TEST(sqrt_22) {
  ck_assert_double_nan(s21_sqrt(-231.41));
  ck_assert_double_nan(sqrt(-231.41));
}
END_TEST

START_TEST(sqrt_23) {
  long double arr[] = {5898.467, 8427.928,  5698.0035, 1289.244, 7025.7,
                       12.1357,  4745.5,    2930.637,  8187.391, 1015.89,
                       3155.844, 3954.143,  2862.1,    2782.954, 5097.545,
                       2630.4,   1075.747,  1889.786,  1782,     0.0001,
                       21345678, 7432,      0.3245,    12345,    13456,
                       0.03213,  324.42342, 0,         50,       0.24};
  for (int i = 0; i < 30; i++) {
    ck_assert_double_eq_tol(s21_sqrt(arr[i]), sqrt(arr[i]), 0.000001);
  }
}

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

START_TEST(sin_11) {
  ck_assert_double_eq_tol(s21_sin(1000000), sin(1000000), 0.000001);
}
END_TEST

START_TEST(sin_12) {
  ck_assert_double_eq_tol(s21_sin(-14.96), sin(-14.96), 0.000001);
}
END_TEST

START_TEST(sin_13) {
  ck_assert_double_nan(s21_sin(INFINITY));
  ck_assert_double_nan(sin(INFINITY));
}
END_TEST

START_TEST(sin_14) {
  ck_assert_double_nan(s21_sin(NAN));
  ck_assert_double_nan(sin(NAN));
}
END_TEST

START_TEST(sin_15) {
  ck_assert_double_nan(s21_sin(-INFINITY));
  ck_assert_double_nan(sin(-INFINITY));
}
END_TEST

START_TEST(sin_16) {
  ck_assert_double_eq_tol(s21_sin(M_PI), sin(M_PI), 0.000001);
}
END_TEST

START_TEST(sin_17) {
  ck_assert_double_eq_tol(s21_sin(M_PI_2), sin(M_PI_2), 0.000001);
}
END_TEST

START_TEST(sin_18) { ck_assert_double_eq_tol(s21_sin(0), sin(0), 0.000001); }
END_TEST

START_TEST(sin_19) {
  ck_assert_double_eq_tol(s21_sin(-M_PI_2), sin(-M_PI_2), 0.000001);
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

START_TEST(atan_11) {
  long double arr[] = {-25.1235, 23464, 0,
                       1,        0.156, -1}; // -25.1235, 0.23464, 0, 1, -1};
  for (int i = 0; i < 6; i++)
    ck_assert_double_eq_tol(s21_atan(arr[i]), atan(arr[i]), 0.000001);
}
END_TEST

START_TEST(atan_12) { ck_assert_double_eq(s21_atan(INFINITY), atan(INFINITY)); }
END_TEST

START_TEST(atan_13) {
  ck_assert_double_nan(s21_atan(NAN));
  ck_assert_double_nan(atan(NAN));
}
END_TEST

START_TEST(atan_14) {
  ck_assert_double_eq(s21_atan(-INFINITY), atan(-INFINITY));
}
END_TEST

START_TEST(atan_15) {
  for (double i = -1.; i < 1.; i += 0.3) {
    ck_assert_double_eq_tol(s21_atan(i), atan(i), 0.000001);
  }
}
END_TEST;

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

START_TEST(cos_11) {
  for (int i = -2300; i == 2000; i += 30)
    ck_assert_int_eq(s21_fact(i), s21_fact(i));
}
END_TEST

START_TEST(cos_12) {
  int i = 0;
  ck_assert_int_eq(s21_fact(i), s21_fact(i));
}
END_TEST

START_TEST(cos_13) {
  int x = S21_PI * -1;
  ck_assert_int_eq(s21_fact(x), cos(x));
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

START_TEST(asin_11) {
  ck_assert_double_eq_tol(s21_asin(0.156), asin(0.156), 0.000001);
}
END_TEST

START_TEST(asin_12) { ck_assert_double_eq_tol(s21_asin(1), asin(1), 0.000001); }
END_TEST

START_TEST(asin_13) {
  ck_assert_double_eq_tol(s21_asin(-1), asin(-1), 0.000001);
}
END_TEST

START_TEST(asin_14) {
  ck_assert_double_nan(s21_asin(INFINITY));
  ck_assert_double_nan(asin(INFINITY));
}
END_TEST

START_TEST(asin_15) {
  ck_assert_double_nan(s21_asin(NAN));
  ck_assert_double_nan(asin(NAN));
}
END_TEST

START_TEST(asin_16) {
  ck_assert_double_nan(s21_asin(-INFINITY));
  ck_assert_double_nan(asin(-INFINITY));
}
END_TEST

START_TEST(asin_17) {
  ck_assert_double_nan(s21_asin(16));
  ck_assert_double_nan(asin(16));
}
END_TEST

START_TEST(asin_18) {
  ck_assert_double_nan(s21_asin(-16));
  ck_assert_double_nan(asin(-16));
}
END_TEST

START_TEST(asin_19) { ck_assert_double_eq_tol(s21_asin(0), asin(0), 0.000001); }
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

START_TEST(acos_11) { ck_assert_double_eq_tol(s21_acos(0), acos(0), 0.000001); }
END_TEST

START_TEST(acos_12) {
  ck_assert_double_eq_tol(s21_acos(-0.369), acos(-0.369), 0.000001);
}
END_TEST

START_TEST(acos_13) {
  ck_assert_double_eq_tol(s21_acos(-1), acos(-1), 0.000001);
}
END_TEST

START_TEST(acos_14) {
  ck_assert_double_nan(s21_acos(INFINITY));
  ck_assert_double_nan(acos(INFINITY));
}
END_TEST

START_TEST(acos_15) {
  ck_assert_double_nan(s21_acos(NAN));
  ck_assert_double_nan(acos(NAN));
}
END_TEST

START_TEST(acos_16) {
  ck_assert_double_nan(s21_acos(-INFINITY));
  ck_assert_double_nan(acos(-INFINITY));
}
END_TEST

START_TEST(acos_17) {
  ck_assert_double_nan(s21_acos(16));
  ck_assert_double_nan(acos(16));
}
END_TEST

START_TEST(acos_18) {
  ck_assert_double_nan(s21_acos(-16));
  ck_assert_double_nan(acos(-16));
}
END_TEST

START_TEST(acos_19) { ck_assert_double_eq_tol(s21_acos(1), acos(1), 0.000001); }
END_TEST

// tan

START_TEST(tan_1) {
  double x = 1;
  ck_assert_int_eq(s21_tan(x), tan(x));
}
END_TEST

START_TEST(tan_2) {
  double x = 0;
  ck_assert_int_eq(s21_tan(x), tan(x));
}
END_TEST

START_TEST(tan_3) {
  double x = -3;
  ck_assert_int_eq(s21_tan(x), tan(x));
}
END_TEST

START_TEST(tan_4) {
  double x = 10000;
  ck_assert_int_eq(s21_tan(x), tan(x));
}
END_TEST

START_TEST(tan_5) {
  double x = -2;
  ck_assert_int_eq(s21_tan(x), tan(x));
}
END_TEST

START_TEST(tan_6) {
  double x = 2.51;
  ck_assert_int_eq(s21_tan(x), tan(x));
}
END_TEST

START_TEST(tan_7) {
  double x = -0;
  ck_assert_int_eq(s21_tan(x), tan(x));
}
END_TEST

START_TEST(tan_8) {
  double x = S21_Inf;
  ck_assert_int_eq(s21_tan(x), tan(x));
}
END_TEST

START_TEST(tan_9) {
  double x = S21_PI;
  ck_assert_int_eq(s21_tan(x), tan(x));
}
END_TEST

START_TEST(tan_10) {
  double x = S21_NaN;
  ck_assert_int_eq(s21_tan(x), tan(x));
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
  tcase_add_test(tm, abs_4);
  tcase_add_test(tm, abs_5);
  tcase_add_test(tm, abs_6);
  tcase_add_test(tm, abs_7);
  tcase_add_test(tm, abs_8);

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
  tcase_add_test(tm, ceil_4);
  tcase_add_test(tm, ceil_5);
  tcase_add_test(tm, ceil_6);
  tcase_add_test(tm, ceil_7);
  tcase_add_test(tm, ceil_8);
  tcase_add_test(tm, ceil_9);

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
  tcase_add_test(tm, floor_4);
  tcase_add_test(tm, floor_5);
  tcase_add_test(tm, floor_6);
  tcase_add_test(tm, floor_7);
  tcase_add_test(tm, floor_8);
  tcase_add_test(tm, floor_9);
  tcase_add_test(tm, floor_10);
  tcase_add_test(tm, floor_11);

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
  tcase_add_test(tm, exp_4);
  tcase_add_test(tm, exp_5);
  tcase_add_test(tm, exp_6);
  tcase_add_test(tm, exp_7);
  tcase_add_test(tm, exp_8);
  tcase_add_test(tm, exp_9);
  tcase_add_test(tm, exp_10);
  tcase_add_test(tm, exp_11);

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
  tcase_add_test(tm, pow_18);
  tcase_add_test(tm, pow_19);
  tcase_add_test(tm, pow_20);
  tcase_add_test(tm, pow_21);
  tcase_add_test(tm, pow_22);
  tcase_add_test(tm, pow_23);
  tcase_add_test(tm, pow_24);
  tcase_add_test(tm, pow_25);
  tcase_add_test(tm, pow_26);
  tcase_add_test(tm, pow_27);
  tcase_add_test(tm, pow_28);
  tcase_add_test(tm, pow_29);
  tcase_add_test(tm, pow_30);

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
  tcase_add_test(tm, sqrt_18);
  tcase_add_test(tm, sqrt_19);
  tcase_add_test(tm, sqrt_20);
  tcase_add_test(tm, sqrt_21);
  tcase_add_test(tm, sqrt_22);
  tcase_add_test(tm, sqrt_23);

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
  tcase_add_test(tm, sin_10);
  tcase_add_test(tm, sin_11);
  tcase_add_test(tm, sin_12);
  tcase_add_test(tm, sin_13);
  tcase_add_test(tm, sin_14);
  tcase_add_test(tm, sin_15);
  tcase_add_test(tm, sin_16);
  tcase_add_test(tm, sin_17);
  tcase_add_test(tm, sin_18);
  tcase_add_test(tm, sin_19);

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
  tcase_add_test(tm, atan_11);
  tcase_add_test(tm, atan_12);
  tcase_add_test(tm, atan_13);
  tcase_add_test(tm, atan_14);
  tcase_add_test(tm, atan_15);

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
  tcase_add_test(tm, cos_11);
  tcase_add_test(tm, cos_12);
  tcase_add_test(tm, cos_13);

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
  tcase_add_test(tm, asin_11);
  tcase_add_test(tm, asin_12);
  tcase_add_test(tm, asin_13);
  tcase_add_test(tm, asin_14);
  tcase_add_test(tm, asin_15);
  tcase_add_test(tm, asin_16);
  tcase_add_test(tm, asin_17);
  tcase_add_test(tm, asin_18);
  tcase_add_test(tm, asin_19);

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
  tcase_add_test(tm, acos_11);
  tcase_add_test(tm, acos_12);
  tcase_add_test(tm, acos_13);
  tcase_add_test(tm, acos_14);
  tcase_add_test(tm, acos_15);
  tcase_add_test(tm, acos_16);
  tcase_add_test(tm, acos_17);
  tcase_add_test(tm, acos_18);
  tcase_add_test(tm, acos_19);

  suite_add_tcase(m, tm);

  return m;
}

// tan
Suite *tan_tests(void) {
  Suite *m = suite_create("S21_TAN_TESTS");

  TCase *tm = tcase_create("s21_tan");

  tcase_add_test(tm, tan_1);
  tcase_add_test(tm, tan_2);
  tcase_add_test(tm, tan_3);
  tcase_add_test(tm, tan_4);
  tcase_add_test(tm, tan_5);
  tcase_add_test(tm, tan_6);
  tcase_add_test(tm, tan_7);
  tcase_add_test(tm, tan_8);
  tcase_add_test(tm, tan_9);
  tcase_add_test(tm, tan_10);

  suite_add_tcase(m, tm);

  return m;
}