#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A[4][4] = {0},C[4][4] = {0},B[4][4] = {0};
    int i, l, k, n;
    srand(time(NULL));

    for (l = 0; l < 4; l++) {
        for (i = 0; i < 4; i++) {
            A[l][i] = rand() % 9;
            B[l][i] = rand() % 9;
            if(l==i){
                C[l][i] = 1;
            }else{
                C[l][i] = 0;
            }

        }
    }

    for (k = 0; k < 4; k++) {
        for (n = 0; n < 4; n++) {
            printf("%i ", A[k][n]);
        }
        printf("\n");
    }
    printf("\n");

    for (k = 0; k < 4; k++) {
        for (n = 0; n < 4; n++) {
            printf("%i ", B[k][n]);
        }
        printf("\n");
    }
    printf("\n");

    for (k = 0; k < 4; k++) {
        for (n = 0; n < 4; n++) {
            printf("%i ", C[k][n]);
        }
        printf("\n");
    }
    printf("\n");

//dzialania
    for (k = 0; k < 4; k++) {
        for (n = 0; n < 4; n++) {
            printf("%i ", A[k][n]+B[k][n]);
        }
        printf("\n");
    }
    printf("\n");
    for (k = 0; k < 4; k++) {
        for (n = 0; n < 4; n++) {
            printf("%i ", A[k][n]-B[k][n]);
        }
        printf("\n");
    }
    printf("\n");
    for (k = 0; k < 4; k++) {
        for (n = 0; n < 4; n++) {
            printf("%i ", A[k][n]+B[k][n]+C[k][n]);
        }
        printf("\n");
    }
    printf("\n");
    for (k = 0; k < 4; k++) {
        for (n = 0; n < 4; n++) {
            printf("%i ", A[k][n]-B[k][n]-C[k][n]);
        }
        printf("\n");
    }
    printf("\n");
    for (k = 0; k < 4; k++) {
        for (n = 0; n < 4; n++) {
            printf("%i ", -B[k][n]);
        }
        printf("\n");
    }
}