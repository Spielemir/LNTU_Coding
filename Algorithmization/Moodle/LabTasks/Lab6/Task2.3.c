#include <stdio.h>

int main() {
    const int n = 5;
    float a[n];
    int i;
    float Min;

    for (i = 0; i < n; i++) {
        printf("Введіть %d елемент:", i);
        scanf("%f", &a[i]);
    }

    Min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < Min) {
            Min = a[i];
        }
    }

    printf("\nМінімальний елемент: %.2f\n", Min);
    printf("Змінений масив:\n");

    for (i = 0; i < n; i++) {
        a[i] = a[i] - Min;
        printf("%.2f\t", a[i]);
    }
    printf("\n");

    return 0;
}