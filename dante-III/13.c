#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
double a, b, check;
  printf("podaj liczbe ");
    check=scanf("%lf", &a);
  if(a==0){
    return 0;
  }else if(check==0){
    printf("Incorrect input ");
    return 1;
  }else{
    do{
      printf("podaj liczbe ");
      check=scanf("%lf", &b);
      if(check==0){
        printf("Incorrect input ");
        return 1;
      }
      printf("%lf \n", b-a);
      a=b;
    }while(a!=0 || b!=0);
    }
  return 0;
}