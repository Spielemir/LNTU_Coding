#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    int month;

    printf("Введiть номер мiсяця (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 12: case 1: case 2:
            printf("Зима\n");
            break;
        case 3: case 4: case 5:
            printf("Весна\n");
            break;
        case 6: case 7: case 8:
            printf("Лiто\n");
            break;
        case 9: case 10: case 11:
            printf("Осiнь\n");
            break;
        default:
            printf("Помилка введення даних\n");
    }

    return 0;
}