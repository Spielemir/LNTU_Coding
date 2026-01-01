#include <stdio.h>

int main() {
    int i;
    int value = 1;

    printf("Таблиця степенів двійки:\n");
    
    for (i = 0; i <= 10; i++) {
        printf("%d \t %d\n", i, value);
        value = value * 2;
    }

    return 0;
}