#include "../s21_math.h"

long double s21_tan(double x) {
    if (x == S21_Inf) return S21_NaN;
    x = s21_fmod(x, S21_PI);
    long double res = s21_sin(x) / s21_cos(x);
    return res;
}