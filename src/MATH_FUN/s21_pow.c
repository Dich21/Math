#include "../s21_math.h"

long double s21_pow(double base, double exp) {
    long double res = 1;
    if (S21_IF_NaN(base) || S21_IF_NaN(exp)) {
        return S21_NaN;
    } else if (exp == 0) {
        res = 1;
    } else if (exp < 0) {
        base = 1 / base;
        exp = -exp;
        for (int i = 0; i < exp; i++) {
            res *= base;
        }
    } else {
        for (int i = 0; i < exp; i++) {
            res *= base;
            if (S21_IF_NaN(res) || res > DBL_MAX) {
                break;
            }
        }
    }
    return res;
}