#include <stdio.h>

int main(void)
{
    double x, y;
    int K;
    
    printf("Введіть x: ");
    scanf("%lf", &x);
    
    printf("Введіть K від 1 до 4: ");
    scanf("%d", &K);
    
    if (K == 1)
        y = x * x;
    else if (K == 2)
        y = 3 * x;
    else if (K == 3)
        y = 4 * x;
    else if (K == 4)
        y = 5 * x - 2;
    else
    {
        printf("Помилка! K має бути від 1 до 4.");
        return 1;
    }
    
    printf(" y = %.4f\n", y);
    return 0;
}
