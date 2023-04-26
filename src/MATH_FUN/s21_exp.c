#include "../s21_math.h"

long double s21_exp(double x) {
    long double res = 1, div = 1, gap = 1;
    if (x != x) {
        res = S21_NaN;
    } else if (x == S21_Inf) {
        res = S21_Inf;
    } else {
        while (s21_fabs(gap) > s21_EPS) {
            gap *= x / div;
            div += 1;
            res += gap;
            if (res > DBL_MAX) {
                res = S21_Inf;
                break;
            }
        }
    }

    return res;
}