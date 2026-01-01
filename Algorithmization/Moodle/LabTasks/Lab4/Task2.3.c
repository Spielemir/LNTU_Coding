#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    float tc, tk;
    float t0 = -273.0;

    printf("Введiть температуру (C): ");
    scanf("%f", &tc);

    if (tc < t0) {
        printf("Температура нижче абсолютного нуля!\n");
    } else {
        tk = tc - t0;
        printf("Температура за Кельвiном: %.2f K\n", tk);
    }

    return 0;
}