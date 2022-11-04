#include <stdio.h>
#include <stdlib.h>

int main() {
  float a;
  float b;
  float check;
  float suma;
  float roznica;
  float iloraz;
  float iloczyn;

  printf("Wprowadz pierwsza liczbe: ");
  check = scanf("%f", &a);
  if (check!=1){
    printf("incorrect input ");
      return 1;
  }
  printf("Wprowadz druga liczbe: ");
  check = scanf("%f", &b);
  if (check!=1){
    printf("incorrect input ");
      return 1;
  }
  suma = a+b;
  roznica = a-b;
  iloczyn = a*b;
  iloraz = a/b;
   if (b!=0){
    printf(" %f \n %f \n %f \n %f", suma, roznica, iloczyn, iloraz);
    }else if(b==0){
    printf(" %f \n %f \n %f \n Operation not permitted", suma, roznica, iloczyn);
    }
  return 0;
}