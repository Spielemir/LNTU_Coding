#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");

    int a[] = {5, 6, 9, 6, 12, 7};
    int n = 6; 
    
    double S = 0;
    double y;
    int i;

    for (i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            S = S + a[i];
        }
    }
    printf("Сума S = %.0f\n\n", S);

    printf(" x \t y \n");

    for (i = 0; i < n; i++) {
        if (a[i] - 5 >= 0) {
            y = sqrt(a[i] - 5) + (4 + S) / 3.0;
            printf(" %d \t %.3f \n", a[i], y);
        } else {
            printf(" %d \t не існує \n", a[i]);
        }
    }
    
    getchar(); 
    return 0;
}
