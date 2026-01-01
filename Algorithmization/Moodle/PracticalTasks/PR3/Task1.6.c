#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    int hour;

    printf("Котра година (0-23)? ");
    scanf("%d", &hour);

    if (hour < 0 || hour > 23) {
        printf("Невірний час!\n");
    } else {
        switch(hour / 6) {
            case 0: printf("Доброї ночi!\n"); break;
            case 1: printf("Доброго ранку!\n"); break;
            case 2: printf("Доброго дня!\n"); break;
            case 3: printf("Доброго вечора!\n"); break;
        }
    }
    return 0;
}