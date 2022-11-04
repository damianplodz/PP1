#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  int check;
  

  printf("podaj liczbe:" );
  check = scanf("%i", &a);
  if(check==1){
    if(a>10 || a<0){
      printf("Incorrect input data");
      return 2;
    }
    if(a==10){
      printf("dziesiec");
    }else if(a==9){
      printf("dziewiec");
    }else if(a==8){
      printf("osiem");
    }else if(a==7){
      printf("siedem");
    }else if(a==6){
      printf("szesc");
    }else if(a==5){
      printf("piec");
    }else if(a==4){
      printf("cztery");
    }else if(a==3){
      printf("trzy");
    }else if(a==2){
      printf("dwa");
    }else if(a==1){
      printf("jeden");
    }else if(a==0){
      printf("zero");
    }
  }else{
    printf("Incorrect input ");
    return 1;
  }
  return 0;
}