#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A[5][5] = {0};
    int sum[5];
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
                sum[p]+=a;
            }
        }
    }
    max=sum[0];
    for(p=0; p<5; p++){
        if(sum[p]>max){
            max=sum[p];
        }
    }
    for(p=0; p<5; p++){
        if(sum[p]==max){
            for(i=0; i<5; i++){
                printf("%i ", A[i][p]);
            }
            printf("\n");
        }
    }
}
