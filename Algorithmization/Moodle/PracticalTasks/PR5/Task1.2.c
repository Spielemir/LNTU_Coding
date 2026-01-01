#include <stdio.h>

int main() {
    int i, n;
    
    printf("Vvedit' chislo: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}