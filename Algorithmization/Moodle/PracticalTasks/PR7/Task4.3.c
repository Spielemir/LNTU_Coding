#include <stdio.h>

int main() {
    char hello[] = { 'D', 'O', 'B', 'R', 'O', 'E', 'Y', 'T', 'R', 'O' };
    
    int i;
    int size = sizeof(hello) / sizeof(hello[0]);

    printf("Вивід масиву: ");
    for (i = 0; i < size; i++) {
        printf("%c", hello[i]);
    }
    printf("\n");

    return 0;
}