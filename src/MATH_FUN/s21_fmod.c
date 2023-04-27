#include "../s21_math.h"

long double s21_fmod(double x, double y) {
  if (S21_IF_INF(x)) return S21_NaN;
  if (y == 0 || S21_IF_NaN(y)) return S21_NaN;
  if (x == 0) return 0;

  long double per = 0;
  long double sec = 0;
  int div = 0;
  sec = s21_fabs(y);
  per = s21_fabs(x);

  // while (per >= sec)
  div = per / sec;
  per = per - div * sec;
  if (x < 0) {
    per *= -1;
  } else if (x > 0)
    if (x < sec) {
      per = x;
    }
  return per;
}
