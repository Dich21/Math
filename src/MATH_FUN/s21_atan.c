#include "../s21_math.h"

long double s21_atan(double x) {
  long double res = 0;
  if (S21_IF_NaN(x)) {
    res = x;
  } else if (x == S21_Inf) {
    res = S21_PI / 2;
  } else if (x == -S21_Inf) {
    res = -(S21_PI / 2);
  } else if (x == 1) {
    res = S21_PI / 4;
  } else if (x == -1) {
    res = -(S21_PI / 4);
  } else if (x == 0) {
    res = 0;
  } else {
    if (x < 1 && x > -1) {
      for (int i = 0; i < 5000; i++) {
        res += s21_pow(-1, i) * s21_pow(x, 2 * i + 1) /
               (2 * i +
                1); // гоним с помощью ряда тейлора на промежутке от -1 до 1
      }
    } else {
      for (int i = 0; i < 7000; i++) {
        res += s21_pow(-1, i) * s21_pow(x, -1 - (2 * i)) /
               (1 + (2 * i)); // гоним с помощью ряда лейбницы если произойдет
                              // выходт из интервала
      }
    }
    res = S21_PI * s21_sqrt(x * x) / (2 * x) - res;
  }
  return res;
}