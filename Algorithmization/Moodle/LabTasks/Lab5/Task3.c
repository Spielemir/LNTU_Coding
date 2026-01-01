#include <stdio.h>
#include <string.h>

int main() {

    const int n = 5;
    char sp[5][15];
    char r[15];
    int i, k;

    printf("-Введіть %d прізвищ-\n", n);
    for (i = 0; i < n; i++) {
        printf("Введіть %d прізвище: ", i + 1);
        scanf("%s", sp[i]);
    }

    for (k = 1; k < n; k++) {
        for (i = 0; i < n - k; i++) {
            if (strcmp(sp[i], sp[i+1]) > 0) {
                strcpy(r, sp[i]);
                strcpy(sp[i], sp[i+1]);
                strcpy(sp[i+1], r);
            }
        }
    }

    printf("\nВідсортований масив прізвищ:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", sp[i]);
    }

    getchar(); getchar();

    return 0;
}