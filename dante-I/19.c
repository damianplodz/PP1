#include <stdio.h>
#include <stdlib.h>

int main() {
  float x;
  float y;
  
  printf("Podaj liczbe: ");
  scanf("%f", &x);
y = (2*x*x*x)-(4*x*x)+3*x-7;
  printf("\n %f", y);
  
  return 0;
}