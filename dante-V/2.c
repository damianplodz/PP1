#include <stdio.h>
#include <stdlib.h>

int main() {
    char tekst[] = {'T','o',' ','j','e','s','t',' ','t','e','k','s','t','\x0'};
    int i;

    for(i=0;i<13;i++){
        putc(tekst[i], stdout);
        printf(" ");
    }
    printf("\n");
    for(i=0;i<13;i++){
        printf("%i ",tekst[i]);
    }
    printf("\n");
    for(i=0;i<13;i++){
        printf("%c ",tekst[i]);
    }
}
