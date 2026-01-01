#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");

    double S, a;
    double b, c, P;

    printf("Введіть площу трикутника: ");
    scanf("%lf", &S);

    printf("Введіть довжину відомого катета: ");
    scanf("%lf", &a);

    if (a <= 0 || S <= 0) {
        printf("\nПлоща та катет мають бути більші за 0!\n");
        return 1;
    }

    b = (2.0 * S) / a;
    c = sqrt(pow(a, 2) + pow(b, 2));
    P = a + b + c;

    printf("\n--- Результати обчислень ---\n");
    printf("Другий катет b = %.2f\n", b);
    printf("Гіпотенуза c = %.2f\n", c);
    printf("Периметр трикутника P = %.2f\n", P);

    return 0;
}