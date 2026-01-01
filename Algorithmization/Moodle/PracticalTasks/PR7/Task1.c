#include <stdio.h>
#include <string.h>

int main() {
    char s[40], f[20], sr[40]; 
    int l, ll;

    printf("\n Input stroky s:\n");
    scanf("%s", s);

    printf("Input stroky f:\n");
    scanf("%s", f);

    l = strlen(s);
    printf("\n Dlina stroki s= %d", l);

    ll = strlen(f);
    printf("\n Dlina stroki f= %d", ll);

    strcat(s, f);

    strcpy(sr, s);
    printf("\n Novaya stroka: %s", sr);

    strncpy(sr, "eeeeee", 4);
    printf("\n Novaya stroka= %s\n", sr);

    return 0;
}