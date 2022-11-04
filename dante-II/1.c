#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, check;
  
  printf("podaj dwie liczby oddzielone spacja: ");
  check = scanf("%i", &a) && scanf("%i", &b);
  if(check==1){
    printf("\n suma wynosi %i", a+b);
  }else{
    printf("Incorrect input");
    return 1;
  }
  return 0;
}