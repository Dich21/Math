#include "../s21_math.h"

long double s21_asin(double x) {
  long double res = 0;
  if (x > 1 || x < -1) {
    res = S21_NaN;
  } else if (S21_IF_NaN(x)) {
    res = S21_NaN;
  } else {
    res = s21_atan(x / s21_sqrt(1 - x * x));
  }
  return res;
}