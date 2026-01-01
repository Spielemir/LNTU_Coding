#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    int day;

    printf("Введiть номер дня тижня (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1: printf("Понедiлок\n"); break;
        case 2: printf("Вiвторок\n"); break;
        case 3: printf("Середа\n"); break;
        case 4: printf("Четвер\n"); break;
        case 5: printf("П'ятниця\n"); break;
        case 6: printf("Субота\n"); break;
        case 7: printf("Недiля\n"); break;
        default: printf("Такого дня не існує!\n");
    }
    return 0;
}