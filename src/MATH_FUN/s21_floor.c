#include "../s21_math.h"

long double s21_floor(double x) {
    long double per = 0;
    if (x > 0) {
        per = ((long long int)x);
    } else {
        if (x < 0) {
            per = ((long long int)x) - 1;
        } else if (x == 0) {
            per = x;
        }
    }
    return per;
}