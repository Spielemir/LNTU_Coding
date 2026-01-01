#include <stdio.h>

int main() {
    int B[8];
    int i;

    for (i = 0; i < 8; i++) {
        B[i] = 5;
    }

    printf("Номер \t Значення\n");
    for (i = 0; i < 8; i++) {
        printf("%d \t %d\n", i, B[i]);
    }

    return 0;
}