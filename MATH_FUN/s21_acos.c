#include "../s21_math.h"

long double s21_acos(double x) {
  long double res = 0;
  res = s21_atan(s21_sqrt(1 - (x * x)) / x);

  if (x < 0) {
    res = S21_PI + res;
  }
  return res;
}