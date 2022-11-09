#include <stdio.h>
#include <stdlib.h>


int main() {
    int A[15][15] = {0},out[15][15] = {0};
    int a=0,i,p,check;

    for(i=0; i<15; i++){
        for(p=0;p<15;p++){
            check = scanf("%i", &a);
            if(check!=1){
                printf("Input data type error ");
                return 1;
            }else if(a<30&&a>=0){
                A[i][p]=a;
            }else{
                printf("value out of range");
                return 2;
            }
        }
    }

    for(i=0; i<15; i++){
        for(p=0;p<15;p++){
            
        }
    }
    
    for (int k = 0; k < 15; k++) {
        for (int n = 0; n < 15; n++) {
            printf("%i ", A[k][n]);
        }
        printf("\n");
    }
    printf("\n");
}
