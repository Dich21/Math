#include "../s21_math.h"

long double s21_fmod(double x, double y) {
  double per = 0;
  if (y == 0) {
    per = S21_Inf;
  } else {
    per = s21_fabs(x);
    while (per >= y)
      per = per - y;
    if (x < 0) {
      per = -s21_fabs(per);
    } else if (x > 0)
      if (x < y) {
        per = x;
      }
  }
  return per;
}