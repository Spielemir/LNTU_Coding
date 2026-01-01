#include <stdio.h>

struct stud {
    char fam[25];
    int mat, fiz, prg;
    float sb;
};

int main() {
    const int n = 5;
    
    struct stud ved[5] = {
        {"Сидоренко С", 5, 5, 5, 0},
        {"Іваненко Д", 3, 3, 4, 0},
        {"Агеєнко А", 4, 5, 4, 0},
        {"Петренко П", 3, 3, 3, 0},
        {"Головко Г", 3, 4, 5, 0}
    };

    int i;
    float sm = 0, sf = 0, sp = 0;

    for (i = 0; i < n; i++) {
        ved[i].sb = (float)(ved[i].mat + ved[i].fiz + ved[i].prg) / 3;

        sm = sm + ved[i].mat;
        sf = sf + ved[i].fiz;
        sp = sp + ved[i].prg;
    }

    printf("\n Результати сесії \n");
    
    for (i = 0; i < n; i++) {
        printf("%d. %-15s \tМат:%d Фіз:%d Прог:%d | Ср.бал: %.2f", 
               i + 1, ved[i].fam, ved[i].mat, ved[i].fiz, ved[i].prg, ved[i].sb);

        if (ved[i].sb >= 4.0) {
            printf(" -> СТИПЕНДІЯ\n");
        } else {
            printf(" -> БЕЗ стипендії\n");
        }
    }

    printf("\n----------------------------------");
    printf("\nСередній бал групи по математиці    = %.2f", sm / n);
    printf("\nСередній бал групи по фізиці        = %.2f", sf / n);
    printf("\nСередній бал групи по програмуванню = %.2f", sp / n);

    printf("\n Відмінники з програмування: \n");
    for (i = 0; i < n; i++) {
        if (ved[i].prg == 5) {
            printf("%s\n", ved[i].fam);
        }
    }

    printf("\n Відмінники з фізики: \n");
    for (i = 0; i < n; i++) {
        if (ved[i].fiz == 5) {
            printf("%s\n", ved[i].fam);
        }
    }

    getchar(); 

    return 0;
}