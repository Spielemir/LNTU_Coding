#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukr");
    char game_end;
    
    printf("Продовжимо гру? (t/n): ");
    scanf(" %c", &game_end);
    
    if (game_end == 't') {
        printf("Правила гри:\n");
        printf("Опис правил гри...\n");
    }
    
    return 0;
}