#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <float.h>
#include <stdio.h>
#include <unistd.h>

#define S21_PI 3.14159265358979323846
#define S21_E 2.71828182845904523536028747
#define S21_Inf +1.0 / 0.0
#define S21_Inf_Neg -1.0 / 0.0
#define S21_NaN 0.0 / 0.0
#define s21_EPS 1e-9
#define S21_IF_NaN(x) (x != x)
#define S21_IF_INF(x) (x == S21_Inf || x == S21_Inf_Neg)
#define S21_ACC 1e-09

int s21_abs(int x);
long double s21_fact(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

#endif  // SRC_S21_MATH_H_