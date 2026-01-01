/* Варіант 1*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    float a, b;

    printf("Введiть два числа: ");
    scanf("%f %f", &a, &b);
    
    if (a > b) {
        printf("%f\n", a);
    } else {
        printf("%f %f\n", a, b);
    }

    return 0;
}