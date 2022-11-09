#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A[5][5] = {0},B[5][5] = {0},out[5][5] = {0};
    int a = 0, wiersz, kolumna, check, sumA[5]={0},sumB[5]={0};
    printf("podaj liczby: \n");
    for (wiersz = 0; wiersz < 5; wiersz++) {
        for (kolumna = 0; kolumna < 5; kolumna++) {
            check = scanf("%i", &a);
            if (check != 1) {
                printf("incorrect input ");
                return 1;
            } else {
                A[wiersz][kolumna] = a;
                sumA[kolumna]+=A[wiersz][kolumna];
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
                sumB[kolumna]+=B[wiersz][kolumna];
            }
        }
    }

    for (kolumna = 0; kolumna < 5; kolumna++) {
        if(sumB[kolumna]>sumA[kolumna]){
            for(wiersz=0;wiersz<5;wiersz++) {
                out[wiersz][kolumna] = B[wiersz][kolumna];
            }
        }else{
            for(wiersz=0;wiersz<5;wiersz++) {
                out[wiersz][kolumna] = A[wiersz][kolumna];
            }
        }
    }
    printf("\n");
    for (wiersz = 0; wiersz < 5; wiersz++) {
        for (kolumna = 0; kolumna < 5; kolumna++) {
            printf("%i ",out[wiersz][kolumna]);
        }
        printf("\n");
    }
}