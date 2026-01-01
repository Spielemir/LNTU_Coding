#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    int finger;

    printf("Введiть номер пальця (1-5): ");
    scanf("%d", &finger);

    switch (finger) {
        case 1: printf("Великий палець\n"); break;
        case 2: printf("Вказiвний палець\n"); break;
        case 3: printf("Середнiй палець\n"); break;
        case 4: printf("Безіменний палець\n"); break;
        case 5: printf("Мiзинець\n"); break;
        default: printf("Помилка: невiрний номер пальця!\n");
    }

    return 0;
}