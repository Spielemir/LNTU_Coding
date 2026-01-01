#include <stdio.h>

int main() {
    int N;
    int days = 0;
    int portion = 1;
    int lost_hair = 0;

    printf("Введіть кількість волосся (N): ");
    scanf("%d", &N);

    while (lost_hair < N) {
        lost_hair = lost_hair + portion;
        days++;
        portion = portion * 2;
    }

    printf("Дідусеві не знадобиться гребінець через %d днів.\n", days);

    return 0;
}