#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    char category;

    printf("Оберiть категорiю швидкостi:\n");
    printf("a - V < 7.8 км/с\n");
    printf("b - 7.8 <= V < 11.2 км/с\n");
    printf("c - 11.2 <= V < 16.4 км/с\n");
    printf("d - V >= 16.4 км/с\n");
    printf("Оберіть категорію: ");
    
    scanf(" %c", &category); 

    switch(category) {
        case 'a':
            printf("Результат: Впаде на Землю\n");
            break;
        case 'b':
            printf("Результат: Стане супутником Землi\n");
            break;
        case 'c':
            printf("Результат: Стане супутником Сонця\n");
            break;
        case 'd':
            printf("Результат: Покине Сонячну систему\n");
            break;
        default:
            printf("Невiдома категорiя\n");
    }
    return 0;
}