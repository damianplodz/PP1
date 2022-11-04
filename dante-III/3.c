#include <stdio.h>
#include <stdlib.h>

int main() {
  int a,m,check;
  printf("podaj kwote poczatkowa: ");
  check = scanf("%i", &a);
  if(check==1 && a>0){
    printf("podaj ilosc miesiecy: ");
    check = scanf("%i",&m);
      if(check==1 && m>0){
        for(int i=0; i<m; i++){
          a=a+a*0.01;
        }
        printf("kwota koncowa: %i", a);
      }else{
      printf("Incorrect input ");
      return 1;
      }
    }else{
    printf("Incorrect input ");
    return 1;
      }
  return 0;
}