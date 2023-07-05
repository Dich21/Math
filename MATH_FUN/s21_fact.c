#include "../s21_math.h"

long double s21_fact(int x) {
  long double y = 1;
  if (x < 0) {
    y = 0;
  } else if (x == 0) {
    y = 1;
  } else {
    for (int i = 1; i <= x; i++) {
      y *= i;
    }
  }
  return y;
}