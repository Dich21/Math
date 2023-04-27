#include "../s21_math.h"

long double s21_pow(double base, double exp) {
  if (!exp) return 1;
  if (S21_IF_NaN(base) || S21_IF_NaN(exp)) return S21_NaN;
  if (((base == S21_Inf_Neg || base == S21_Inf) && exp == S21_Inf_Neg) ||
      (base == 0 && exp == S21_Inf))
    return 0;
  if ((base == S21_Inf_Neg && exp == S21_Inf) ||
      (base == 0 && exp == S21_Inf_Neg))
    return S21_Inf;
  if (base < 0 && exp != (long long int)exp) return S21_NaN;

  long double res = 1;

  if (exp == 0) {
    res = 1;
  } else if (exp < 0) {
    base = 1. / base;
    exp = -exp;
    for (int i = 0; i < exp; i++) {
      res *= base;
    }
  } else {
    for (int i = 0; i < exp; i++) {
      res *= base;
      if (S21_IF_NaN(res) || res > DBL_MAX) {
        if (base < 0) {
          res = S21_Inf_Neg;
          break;
        }
        break;
      }
    }
  }
  return res;
}