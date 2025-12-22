#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");

    int n, i;
    int sum = 0;
    int k = 0;

    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    int a[n];
    
    printf("Введіть %d чисел:\n", n);
    for (i = 0; i < n; i++) {
        
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            sum += a[i];
            k++;
        }
    }

    printf("\nРезультат:\n");
    printf("Кількість непарних: %d\n", k);
    printf("Сума непарних: %d\n", sum);

    return 0;
}
