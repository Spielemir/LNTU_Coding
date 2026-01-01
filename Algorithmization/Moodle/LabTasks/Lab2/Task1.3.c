#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");

    double x, q;

    printf("Введіть значення x: ");
    scanf("%lf", &x);

    double ln_part = log(1.0 / fabs(x));
    double sqrt_part = sqrt(fabs(x + 1.0));
    q = pow(fabs(ln_part - sqrt_part), 1.0/3.0);

    printf("Результат Q = %f\n", q);

    return 0;
}