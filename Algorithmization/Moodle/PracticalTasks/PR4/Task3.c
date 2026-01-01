#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    float n1, n2, n3;

    printf("Введiть три числа: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Початковi числа: %.2f, %.2f, %.2f\n", n1, n2, n3);

    if (n1 > 0) n1 = n1 * n1;
    if (n2 > 0) n2 = n2 * n2;
    if (n3 > 0) n3 = n3 * n3;

    printf("Результат:%.2f, %.2f, %.2f\n", n1, n2, n3);

    return 0;
}