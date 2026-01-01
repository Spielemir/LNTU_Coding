#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    float tariff, duration, cost;
    int day;

    printf("Тариф (грн/хв): ");
    scanf("%f", &tariff);
    printf("Тривалiсть (хв): ");
    scanf("%f", &duration);
    printf("День тижня (1-7): ");
    scanf("%d", &day);

    cost = tariff * duration;

    switch(day) {
        case 6:
        case 7:
            printf("Вихiдний день: знижка 20%%\n");
            cost = cost * 0.8; 
            break;
        default:
            printf("Буднiй день: повна вартiсть\n");
    }

    printf("До сплати: %.2f грн\n", cost);
    return 0;
}