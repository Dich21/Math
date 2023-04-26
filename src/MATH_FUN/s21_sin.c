#include "../s21_math.h"

long double s21_sin(double x) {
  if (x == S21_Inf)
    return S21_NaN;
  x = s21_fmod(x, 2 * S21_PI);

  long double res = 0;
  for (int i = 0; i < 300; i++) {
    res += s21_pow(-1, i) * s21_pow(x, 1 + 2 * i) / s21_fact(1 + 2 * i);
  }

  return res;
}