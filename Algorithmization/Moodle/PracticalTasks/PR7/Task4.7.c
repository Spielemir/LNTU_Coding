#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Slava ";
    char str2[] = "Ukraini!";

    printf("Рядок 1: %s\n", str1);
    printf("Рядок 2: %s\n", str2);

    strcat(str1, str2);

    printf("Результат об'єднання: %s\n", str1);

    return 0;
}