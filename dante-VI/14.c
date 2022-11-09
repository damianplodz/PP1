#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A[5][5] = {0};
    int a=0,i,p,check, max;
    printf("podaj liczby: \n");
    for(i=0; i<5; i++){
        for(p=0;p<5;p++){
            check = scanf("%i", &a);
            if(check!=1){
                printf("incorrect input ");
                return 1;
            }else{
                A[i][p]=a;
            }
        }
    }
    for(i=0; i<5; i++){
        max=A[i][0];
        for(p=0;p<5;p++){
            if(A[i][p]>max){
                max=A[i][p];
            }
        }
        printf("%i ",max);
    }
    for(p=0; p<5; p++){
        max=A[0][p];
        for(i=0;i<5;i++){
            if(A[i][p]>max){
                max=A[i][p];
            }
        }
        printf("%i ",max);
    }
}
