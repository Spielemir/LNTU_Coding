#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");

    double x, y;

    printf("Введіть значення x: ");
    scanf("%lf", &x);
    
    double num1 = 0.2 * x * x - x;
    double den1 = (sqrt(3.0) + x) * (1.0 + 2.0 * x); 
    
    double num2 = 2.0 * pow(x - 1.0, 3);
    double den2 = pow(sin(x), 2) + 1.0;
    
    y = (num1 / den1) + (num2 / den2);

    printf("Результат y = %f\n", y);

    return 0;
}