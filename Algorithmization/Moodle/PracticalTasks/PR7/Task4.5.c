#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Programuvannia";
    char destination[20];

    strncpy(destination, source, 7);
    
    destination[7] = '\0'; 

    printf("Джерело: %s\n", source);
    printf("Результат копіювання (7 символів): %s\n", destination);

    return 0;
}