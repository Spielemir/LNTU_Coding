#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    int oc;
    
    printf("Введiть оцiнку: ");
    scanf("%d", &oc);
    
    if (oc >= 5) {
        printf("Ваша оцiнка %d балiв\n", oc);
        printf("Залiк!\n");
    } else {
        printf("Ваша оцiнка %d балiв\n", oc);
        printf("Незалiк!\n");
    }
    
    return 0;
}