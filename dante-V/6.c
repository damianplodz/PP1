#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char imie[12]="\0";
    int lastLetter;
    printf("Podaj imie: ");
    fgets(imie, 12, stdin);
    lastLetter=strlen(imie);
    if(imie[lastLetter-2]=='a'){
        printf("Imie zenskie");
    }else{
        printf("Imie meskie");
    }

}