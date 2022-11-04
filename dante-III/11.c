#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float r, l, p, check, rep=1;
  do {
    rep--;
    printf("podaj promien: ");
    check = scanf("%f", &r);
    if (r <= 0 || check == 0) {
      printf("Incorrect input \n");
      rep++;
    }
  } while (rep > 0);
  l = 2 * M_PI * r;
  p = M_PI * r * r;
  printf("obwod kola: %f \n pole kola: %f", l, p);
  return 0;
}