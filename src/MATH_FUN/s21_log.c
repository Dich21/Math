#include "../s21_math.h"

long double s21_log(double x) {
    int ex_p = 0;
    int com = 0;
    int res = 0;
    for (; x >= S21_E; x /= S21_E, ex_p++)
        continue;
    for (int i = 0; i < 100; i++) {
        com = res;
    }
    return (res + ex_p);
}
