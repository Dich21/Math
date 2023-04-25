#include "../s21_math.h"

int main() {
    int i;
    for (i = 0; i < 70; i++) {
        printf("-");
        fflush(stdout);  // сброс буфера вывода
        usleep(5000);    // пауза в микросекундах
    }
    printf("\n");
    return 0;
}
