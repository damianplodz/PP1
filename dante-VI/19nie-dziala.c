#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A[5][5] = {0},B[5][5] = {0};
    int rep[5];
    int a = 0, wiersz, kolumna, check,n,wierszRoll;
    printf("podaj liczby: \n");
    for (wiersz = 0; wiersz < 5; wiersz++) {
        for (kolumna = 0; kolumna < 5; kolumna++) {
            check = scanf("%i", &a);
            if (check != 1) {
                printf("incorrect input ");
                return 1;
            } else {
                A[wiersz][kolumna] = a;
            }
        }
    }
    printf("podaj liczby: \n");
    for (wiersz = 0; wiersz < 5; wiersz++) {
        for (kolumna = 0; kolumna < 5; kolumna++) {
            check = scanf("%i", &a);
            if (check != 1) {
                printf("incorrect input ");
                return 1;
            } else {
                B[wiersz][kolumna] = a;
            }
        }
    }


    for (wiersz = 0; wiersz < 5; wiersz++) {
        n=0;
        for (kolumna = 0; kolumna < 5; kolumna++) {
            for(wierszRoll=0;wierszRoll<5;wierszRoll++) {
                if (A[wiersz][kolumna] == B[wierszRoll][kolumna]) {
                    rep[n] = B[wierszRoll][kolumna];
                    n++;
                }
            }
                printf("%i razy: ", n);
                for (wiersz = 0; wiersz < n; wiersz++) {
                    printf("%i ", rep[wiersz]);
                }
                printf("\n");
        }
    }
}