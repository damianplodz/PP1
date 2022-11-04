#include <stdio.h>
#include <stdlib.h>

int main() {
  float tab[10], suma=0, check;
  for(int i=0; i<10; i++){
    printf("Podaj %i liczbe: ", i+1);
    check = scanf("%f", &tab[i]);
    if(check==1){
    suma=suma+tab[i];
      }else{
      printf("Incorrect input ");
      return 1;
      }
  }
  printf("%f", suma);
    
  return 0;
}