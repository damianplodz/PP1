#include <stdio.h>
#include <stdlib.h>

int main() {
  int liczba1;
  int liczba2;
  
  int suma;
  int roznica;
  int iloraz;
  int iloczyn;

  printf("Wprowadz pierwsza liczbe: ");
  scanf("%i", &liczba1);
  printf("Wprowadz druga liczbe: ");
  scanf("%i", &liczba2);

  suma = liczba1 + liczba2;
  roznica = liczba1 - liczba2;
  iloczyn = liczba1 * liczba2;
  iloraz = liczba1 / liczba2;
  
  printf("\n %i \n %i \n %i \n %i", suma, roznica, iloczyn, iloraz);
  return 0;
}