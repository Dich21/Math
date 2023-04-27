#include "../s21_math.h"

int main() {
    int i;
    for (i = 0; i < 70; i++) {
        printf("-");
        fflush(stdout);
        usleep(5000);
    }
    printf("\n");
    return 0;
}
