#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A[5][5] = {0};
    int a = 0, wiersz, kolumna, check, sum[5]={0};
    double avg;
    printf("podaj liczby: \n");
    for (wiersz = 0; wiersz < 5; wiersz++) {
        for (kolumna = 0; kolumna < 5; kolumna++) {
            check = scanf("%i", &a);
            if (check != 1) {
                printf("incorrect input ");
                return 1;
            } else {
                A[wiersz][kolumna] = a;
                sum[kolumna]+=A[wiersz][kolumna];
            }
        }
    }
    for(kolumna=0;kolumna<5;kolumna++){
        avg=sum[kolumna]/5.00;
        printf("%0.2f ",avg);
    }
}