#include <stdio.h>
#include <stdlib.h>

int main() {
  int liczba1 = 5;
  int liczba2 = 12;
  int iloczyn;
  float iloraz;
  int suma; 
  int roznica;

  printf("\n %i %i", liczba1, liczba2);

  printf("\n %i", iloczyn = liczba1 * liczba2);
  float f1 = liczba1;
  float f2 = liczba2;
  printf("\n %.2f", iloraz = f1 / f2);
  printf("\n %i", suma = liczba1 + liczba2);
  printf("\n %i", roznica = liczba1 - liczba2);
  return 0;
}