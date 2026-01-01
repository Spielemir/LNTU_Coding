#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    setlocale(LC_ALL, "Ukr");

    double m = -2.0;
    double n = 3.87;
    double x, y, j;

    printf("Вхідні дані: m = %.2f, n = %.2f\n\n", m, n);

    y = m - 3.0 + log(pow(n, 2));

    double arg_ctg = 5.4 + m * n;
    x = (M_PI / 2.0) - atan(arg_ctg);

    double arg_log = x - m + 5.0 - y;

    if (arg_log <= 0) {
        printf("Помилка: вираз під логарифмом менше або дорівнює нулю!\n");
    } else {
        j = log(arg_log) / log(M_PI);

        printf("Результати:\n");
        printf("y = %f\n", y);
        printf("x = %f\n", x);
        printf("j = %f\n", j);
    }

    return 0;
}