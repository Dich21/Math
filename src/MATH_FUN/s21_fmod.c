#include "../s21_math.h"

long double s21_fmod(double x, double y) {
  long double per = 0;
  long double sec = 0;
  sec = s21_fabs(y);
  if (y == 0) {
    per = S21_NaN;
  } else {
    per = s21_fabs(x);
    while (per >= sec)
      per = per - sec;
    if (x < 0) {
      per = -s21_fabs(per);
    } else if (x > 0)
      if (x < sec) {
        per = x;
      }
  }
  return per;
}