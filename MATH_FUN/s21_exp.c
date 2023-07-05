#include "../s21_math.h"

long double s21_exp(double x) {
  long double res = 1, div = 1, gap = 1;
  if (x != x) return S21_NaN;
  if (x == S21_Inf) return x;
  if (x == S21_Inf_Neg) return 0;

  while (s21_fabs(gap) > s21_EPS) {
    gap *= x / div;
    div += 1;
    res += gap;
    if (res > DBL_MAX && x > 0) {
      res = S21_Inf;
      break;
    }
    if (res > DBL_MAX && x < 0) {
      res = 0;
      break;
    }
  }

  return res;
}