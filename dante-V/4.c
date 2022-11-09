#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char tekst[1002]="\0";

    printf("Podaj tekst: ");
    fgets(tekst, 1002, stdin);
    printf("%ld", strlen(tekst)-1);

}