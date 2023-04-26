#include "../s21_math.h"

long double s21_sqrt(double x) {
  if (x < 0)
    return S21_NaN;

  if (x == 0)
    return 0;

  if (x == S21_Inf)
    return S21_Inf;

  double prev, curr = 1;
  do {
    prev = curr;
    curr = (prev + x / prev) / 2;
  } while (s21_fabs(curr - prev) > DBL_EPSILON);
  return curr;
}
