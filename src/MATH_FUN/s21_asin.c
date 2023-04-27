#include "../s21_math.h"

long double s21_asin(double x) {
  if (S21_IF_NaN(x) || S21_IF_INF(x)) return S21_NaN;

  long double res = 0;
  if (x > 1 || x < -1) {
    res = S21_NaN;
  } else {
    res = s21_atan(x / s21_sqrt(1 - x * x));
  }

  return res;
}