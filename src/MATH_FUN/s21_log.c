#include "../s21_math.h"

long double s21_log(double x) {
    long double x;
    long double res = 0;
    long double sec = 0;
    int count = 0;

    if (x == 1) {
        res = 0;
    } else if (x == 0) {
        res = -S21_Inf;

    } else if (x == S21_Inf) {
        res = S21_Inf;
    }

    else if (x < 0 || x == -S21_Inf) {
        res = S21_NaN;
    } else {
        for (; x >= S21_E; x /= S21_E) count++;

        for (int i = 0; i < 100; i++) {
            sec = res;
            res = sec + 2 * ((x - s21_exp(sec)) / (x + s21_exp(sec)));
        }
    }

    return res;
}
