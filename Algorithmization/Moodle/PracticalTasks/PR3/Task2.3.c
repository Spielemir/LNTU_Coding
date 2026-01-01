#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    float a, b;
    int op;

    printf("Введiть два числа: ");
    scanf("%f %f", &a, &b);

    printf("Оберiть дiю:\n1-Сума\n2-Рiзниця\n3-Добуток\n4-Частка\nОбрано: ");
    scanf("%d", &op);

    switch(op) {
        case 1: printf("Сума: %.2f\n", a + b); break;
        case 2: printf("Рiзниця: %.2f\n", a - b); break;
        case 3: printf("Добуток: %.2f\n", a * b); break;
        case 4: 
            if(b != 0) printf("Частка: %.2f\n", a / b);
            else printf("Помилка: дiлення на нуль\n");
            break;
        default: printf("Невiдома операцiя\n");
    }
    return 0;
}