#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A[5][5] = {0},B[5][5] = {0};
    int a = 0, i, p, check;
    printf("podaj liczby: \n");
    for (i = 0; i < 5; i++) {
        for (p = 0; p < 5; p++) {
            check = scanf("%i", &a);
            if (check != 1) {
                printf("incorrect input ");
                return 1;
            } else {
                A[i][p] = a;
            }
        }
    }
    printf("podaj liczby: \n");
    for (i = 0; i < 5; i++) {
        for (p = 0; p < 5; p++) {
            check = scanf("%i", &a);
            if (check != 1) {
                printf("incorrect input ");
                return 1;
            } else {
                B[i][p] = a;
            }
        }
    }


    for (i = 0; i < 5; i++) {
        for (p = 0; p < 5; p++) {
            if(A[i][p]>B[i][p]){
                printf("%i ",A[i][p]);
            }else{
                printf("%i ", B[i][p]);
            }
        }
        printf("\n");
    }
}