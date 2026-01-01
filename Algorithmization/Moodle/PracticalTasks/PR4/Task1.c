#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    double x, y;

    printf("Введiть значення x: ");
    scanf("%lf", &x);

    if (x <= -1) {
        y = 2 * x + 4;
        printf("Результат (x <= -1): y = %.2f\n", y);
    } else if (x > -1 && x < 0) {
        y = x - 4;
        printf("Результат (-1 < x < 0): y = %.2f\n", y);
    } else {
        y = pow(x, 3) + 4;
        printf("Результат (x >= 0): y = %.2f\n", y);
    }

    return 0;
}