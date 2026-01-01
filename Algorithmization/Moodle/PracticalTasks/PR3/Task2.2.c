#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    float sum;

    printf("Сума покупки: ");
    scanf("%f", &sum);

    if (sum > 1000) {
        printf("Знижка 5%%\n");
        sum = sum * 0.95;
    } else if (sum > 500) {
        printf("Знижка 3%%\n");
        sum = sum * 0.97;
    } else {
        printf("Знижки немає\n");
    }

    printf("До сплати: %.2f грн\n", sum);
    return 0;
}