#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");

    double a = 4.0;
    double b = 0.5;
    double y;
    double pi = acos(-1.0);

    printf("Вхідні дані: a = %.2f, b = %.2f\n", a, b);
    
    y = log(fabs(pi / a - b)) + pow(sin(3 * b) / cos(pow(b * b, 2)), 2);

    printf("Результат y = %f\n", y);

    return 0;
}