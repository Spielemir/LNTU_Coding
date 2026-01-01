#include <stdio.h>

int main() {
    int i, Smax, n, sum = 0;
    int k = 0;

    printf("Vvedit n: ");
    scanf("%d", &n);
    
    printf("Vvedit Smax: ");
    scanf("%d", &Smax);

    for (i = 1; i <= n; i++) {
        if (sum <= Smax) {
            sum = sum + i;
            k++;
        }
    }

    printf("Wikonano: %d operaciy\n", k);
    printf("Final sum: %d\n", sum);
    
    return 0;
}