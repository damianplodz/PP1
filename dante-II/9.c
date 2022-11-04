#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  int b;
  int check;
  int suma;
  int roznica;
  int iloraz;
  int iloczyn;

  printf("Wprowadz pierwsza liczbe: \n");
  check = scanf("%i", &a);
  if (check!=1){
    printf("incorrect input \n");
      return 1;
  }
  printf("Wprowadz druga liczbe: \n");
  check = scanf("%i", &b);
  if (check!=1){
    printf("incorrect input \n");
      return 1;
  }
  suma = a+b;
  roznica = a-b;
  iloczyn = a*b;
  iloraz = a/b;
   if (b!=0){
    printf("%i \n %i \n %i \n %i", suma, roznica, iloczyn, iloraz);
    }else{
    printf("%i \n %i \n %i \n Operation not permited", suma, roznica, iloczyn);
    }
  return 0;
}