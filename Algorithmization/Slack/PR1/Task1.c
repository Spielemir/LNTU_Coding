#include <stdio.h>
#include <math.h>

int main(void) {
    double x, y, z;

    printf("Введіть y: ");
    scanf("%lf", &y);

    printf("Введіть x: ");
    scanf("%lf", &x);

    printf("Введіть z: ");
    scanf("%lf", &z);

    double numerator = 1.0 + cos(y - 2.0);
    double denom = pow(x, 4) / 2.0 + pow(sin(z), 2);
    double b = numerator / denom;

    printf("b = %.15f\n", b);

    return 0;
}
