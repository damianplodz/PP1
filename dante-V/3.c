#include <stdio.h>
#include <stdlib.h>

int main() {
    char imie[30]="\0";

    printf("Podaj imie: ");
    fscanf(stdin, "%30[^\n ]", imie);
    printf("Witaj %s", imie);
    printf("!");
}
