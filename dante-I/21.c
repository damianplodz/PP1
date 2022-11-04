#include <stdio.h>
#include <stdlib.h>

int main() {
  double c;
  double k;
  double f;
  
  printf("Podaj temperature w stopniach Celsjusza: ");
  scanf("%lf", &c);
  k = 273.15+c;
  f = c*9/5 + 32;    
  
  printf("\n %lf \n %lf", k, f);
  
  return 0;
}