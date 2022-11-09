#include <stdio.h>
#include <stdlib.h>


int main() {
    int A[15][15] = {0};
    int a=0,i,p,check,sum=0;

printf("Podaj liczby: \n");
    for(i=0; i<10; i++){
        for(p=0;p<10;p++){
            check = scanf("%i", &a);
            if(check!=1){
                printf("incorrect input ");
                return 1;
            }else{
                A[i][p]=a;
            }
        }
    }

    for(i=0; i<10; i++){
        for(p=0;p<10;p++){
            if((i+p)%2==0){
                sum+=A[p][i];
            }else{
                sum-=A[p][i];
            }
        }
    }

    printf("\n %i", sum);
}
