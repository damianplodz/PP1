#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, check, max, min, i, tab[10];
  float sum = 0, avg;

  printf("podaj dwie liczby oddzielone spacja: ");
  for (i = 0; i < 10; i += 2) {
    check = scanf("%i", &a) && scanf("%i", &b);
    if (check != 1) {
      printf("Input data type error ");
      return 1;
    } else {
      tab[i] = a;
      tab[i + 1] = b;
    }
  }
  max = min = tab[0];
  for (int k = 0; k < 10; k++) {
    sum = sum + tab[k];
    if (tab[k] > max) {
      max = tab[k];
    } else if (tab[k] < min) {
      min = tab[k];
    }
  }
  avg = sum / 10;
  printf("%0.4f\n", avg);
  printf("%i \n", max);
  printf("%i \n", min);
}