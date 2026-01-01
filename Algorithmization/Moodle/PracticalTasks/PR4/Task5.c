#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    
    int choice;
    double x, y, k, m, n;
    
    printf("Оберiть варiант параметрiв:\n");
    printf("1: k=3.1,  m=5.15, n=-1.15\n");
    printf("2: k=0.78, m=-2.4, n=4.36\n");
    printf("3: k=1.1,  m=0.8,  n=0.41\n");
    printf("Ваш вибiр: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            k = 3.1; m = 5.15; n = -1.15;
            break;
        case 2:
            k = 0.78; m = -2.4; n = 4.36;
            break;
        case 3:
            k = 1.1; m = 0.8; n = 0.41;
            break;
        default:
            printf("Помилка: Неправильний номер варiанту.\n");
            return 1;
    }

    printf("Використовуємо: k=%.2f, m=%.2f, n=%.2f\n", k, m, n);
    printf("Введiть значення x: ");
    scanf("%lf", &x);

    double x2 = x * x;
    double sum_mn = m + n;
    double eps = 0.0001; 
    if (x2 > sum_mn) {
        if ((m * x + n) <= 0) {
            printf("Вираз пiд логарифмом (mx+n) <= 0\n");
            return 1;
        }
        y = log(m * x + n);
        printf("Спрацювала умова: x^2 > m + n\n");
    } 
    else if (fabs(x2 - sum_mn) < eps) { 
        y = cos(m * x - n);
        printf("Спрацювала умова: x^2 = m + n\n");
    } 
    else { 
        y = k * k + pow(cos(x), 2);
        printf("Спрацювала умова: x^2 < m + n\n");
    }

    printf("Результат y = %f\n", y);

    return 0;
}