#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    double x = 2.0;
    
    printf("Перевірка умови: tg(x) < x <= pi/4 для x = %.2f\n", x);

    if (tan(x) < x && x <= (M_PI / 4.0)) {
        printf("Результат: TRUE\n");
    } else {
        printf("Результат: FALSE\n");
    }

    return 0;
}