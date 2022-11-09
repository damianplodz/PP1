#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A[10][10] = {0};
    int a=0,i,p,check,max=-9999,min=9999, sr, min1,min2,max1,max2,sr1,sr2;
    double rw,rh,rl,avg,sum=0,Roz=9999,potRoz;
    printf("podaj liczby: ");
    for(i=0; i<10; i++){
        for(p=0;p<10;p++){
            check = scanf("%i", &a);
            if(check!=1){
                printf("incorrect input ");
                return 1;
            }else{
                A[i][p]=a;
                sum+=A[i][p];
            }
        }
    }
    avg=sum/100.00;
    for(i=0; i<10; i++){
        for(p=0;p<10;p++){
            potRoz=avg-A[i][p];
            if(potRoz<0){
                potRoz*=-1;
            }
            if(potRoz<=Roz){
                if(A[i][p]==sr){
                    printf("error");
                    return 2;
                }
                Roz=potRoz;
                sr=A[i][p];
                sr1=p;
                sr2=i;
            }
            if(A[i][p]>=max){
                if(A[i][p]==max){
                    printf("error");
                    return 2;
                }
                max=A[i][p];
                max1=p;
                max2=i;
            }
            if(A[i][p]<=min){
                if(A[i][p]==min){
                    printf("error");
                    return 2;
                }
                min=A[i][p];
                min1=p;
                min2=i;
            }
        }
    }
    rw=sqrt(pow(abs(min1-max1),2) + pow(abs(min2-max2),2));
    rh=sqrt(pow(abs(sr1-max1),2) + pow(abs(sr2-max2),2));
    rl=sqrt(pow(abs(min1-sr1),2) + pow(abs(min2-sr2),2));
    printf("%0.2f %0.2f %0.2f", rw,rl,rh);

}
