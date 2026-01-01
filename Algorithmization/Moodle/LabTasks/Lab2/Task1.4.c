#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    
    double number = 12.5E2;

    printf("Число в коді: 12.5E2\n");
    printf("Число у звичайному форматі: %f\n", number);

    return 0;
}