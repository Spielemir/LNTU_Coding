#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    float height, weight, optimal;

    printf("Введiть зрiст (см): ");
    scanf("%f", &height);
    printf("Введiть реальну вагу (кг): ");
    scanf("%f", &weight);

    optimal = height - 100.0;
    printf("Ваша оптимальна вага: %.1f кг\n", optimal);

    if (weight > optimal) {
        printf("Рекомендацiя: Треба схуднути.\n");
    } else if (weight < optimal) {
        printf("Рекомендацiя: Треба поправитися.\n");
    } else {
        printf("Рекомендацiя: Вага iдеальна!\n");
    }

    return 0;
}