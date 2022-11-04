#include <stdio.h>
#include <stdlib.h>

int main() {
  float liczba1;
  float liczba2;
  
  float suma;
  float roznica;
  float iloraz;
  float iloczyn;

  printf("Wprowadz pierwsza liczbe: ");
  scanf("%f", &liczba1);
  printf("Wprowadz druga liczbe: ");
  scanf("%f", &liczba2);

  suma = liczba1 + liczba2;
  roznica = liczba1 - liczba2;
  iloczyn = liczba1 * liczba2;
  iloraz = liczba1 / liczba2;
  
  printf("\n %f \n %f \n %f \n %f", suma, roznica, iloczyn, iloraz);
  return 0;
}