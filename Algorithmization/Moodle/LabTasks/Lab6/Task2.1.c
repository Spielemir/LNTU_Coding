#include <stdio.h>

int main() {
    const int n = 5; 
    int A[n];
    int j;
    long product = 1;
    int has_positive = 0;

    printf("Введіть масив із %d чисел:\n", n);
    for (j = 0; j < n; j++) {
        printf("A[%d] = ", j);
        scanf("%d", &A[j]);
    }

    for (j = 0; j < n; j++) {
        if (A[j] > 0) {
            product = product * A[j];
            has_positive = 1;
        }
    }

    if (has_positive) {
        printf("Добуток додатних елементів: %ld\n", product);
    } else {
        printf("Додатні елементи відсутні.\n");
    }

    return 0;
}