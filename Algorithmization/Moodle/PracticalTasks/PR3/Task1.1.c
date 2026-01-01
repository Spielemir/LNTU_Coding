#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    float v;

    printf("Введiть швидкiсть (км/с): ");
    scanf("%f", &v);

    if (v < 7.8) {
        printf("Корабель впаде на Землю\n");
    } else if (v < 11.2) {
        printf("Корабель стане супутником Землi\n");
    } else if (v < 16.4) {
        printf("Корабель стане супутником Сонця\n");
    } else {
        printf("Корабель покине Сонячну систему\n");
    }

    return 0;
}