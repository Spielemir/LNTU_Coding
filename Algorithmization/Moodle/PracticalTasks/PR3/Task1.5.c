#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    float v;
    int swid;

    printf("Введiть швидкiсть км/с: ");
    scanf("%f", &v);

    swid = (v < 7.8) + (v < 11.2) + (v < 16.4);

    switch(swid) {
        case 3:
            printf("Корабель впаде на Землю\n");
            break;
        case 2:
            printf("Корабель стане супутником Землi\n");
            break;
        case 1:
            printf("Корабель стане супутником Сонця\n");
            break;
        case 0:
            printf("Корабель покине Сонячну систему\n");
            break;
    }
    return 0;
}