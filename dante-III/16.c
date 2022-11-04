#include <stdio.h>
#include <stdlib.h>

int main() {
  float a, check=1, wynik=1;

  printf("podaj liczbe ");
  while (check==1) {
    check = scanf("%f", &a);
        if (check == 0) {
          printf("Incorrect input ");
          return 0;
        }
      printf("wynik: %.2f \n",wynik*=a);
    }
  
  return 0;
}