#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    float x, y = 6.8;
    
    printf("Введiть x: ");
    scanf("%f", &x);
    
    if (x >= y) {
        printf("x >= y !!!\n");
    }
    
    return 0;
}