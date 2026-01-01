#include <stdio.h>

int main() {
    const int n = 15;
    int M[n];
    int k;

    for (k = 0; k < n; k++) {
        M[k] = k + 1;
    }

    printf("Елемент \t Значення\n");
    
    for (k = 0; k < n; k++) {
        if (k % 2 != 0) {
            printf("%d \t\t %d\n", k, M[k]);
        }
    }

    return 0;
}