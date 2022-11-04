#include <stdio.h>
#include <stdlib.h>

int main() {
  float liczba1 = 5;
  float liczba2 = 12;
  float iloczyn;
  float iloraz;
  float suma; 
  float roznica;

  printf("\n %f %f", liczba1, liczba2);

  printf("\n %f", iloczyn = liczba1 * liczba2);
  printf("\n %.2f", iloraz = liczba1 / liczba2);
  printf("\n %f", suma = liczba1 + liczba2);
  printf("\n %f", roznica = liczba1 - liczba2);
  return 0;
}