#include <stdio.h>

int main() {
    const int n = 10;
    int x[n];
    int i;
    int col = 0;

    for (i = 0; i < n; i++) {
        printf("%d елемент: ", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < n; i++) {
        if (x[i] > 0) {
            col++;
        }
    }

    printf("\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", x[i]);
    }
    
    printf("\nКількість додатних елементів: %d\n", col);

    return 0;
}