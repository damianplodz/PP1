#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A[5][5] = {0};
    int a=0,i,p,check, sum=0;
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
        for(p=0;p<5;p++){
            if(i==p){
                sum+=A[p][i];
            }
        }
    }
    printf("%i ",sum);
    sum=0;
    for(i=0; i<5; i++){
        for(p=0;p<5;p++){
            if(p==4-i){
                sum+=A[p][i];
            }
        }
    }
    printf("%i ",sum);
}
