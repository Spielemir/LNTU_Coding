#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    float a, b, c;

    printf("Введiть сторони трикутника a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        
        if (a == b || a == c || b == c) {
            printf("Трикутник є РIВНОБЕДРЕНИМ.\n");
            if (a == b && b == c) {
                printf("(Він також є рівностороннім)\n");
            }
        } else {
            printf("Трикутник НЕ є рівнобедреним.\n");
        }
        
    } else {
        printf("Трикутник з такими сторонами не iснує.\n");
    }

    return 0;
}