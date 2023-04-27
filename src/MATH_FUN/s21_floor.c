#include "../s21_math.h"

long double s21_floor(double x) {
  if (S21_IF_NaN(x) || S21_IF_INF(x)) return x;
  long double per = 0;
  int int_x = (int)x;
  if (x > 0) {
    per = ((long long int)x);
  } else {
    if (x < 0) {
      if (x != int_x)
        per = ((long long int)x - 1);
      else
        per = ((long long int)x);
    } else if (x == 0) {
      per = x;
    }
  }
  return per;
}