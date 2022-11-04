#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  printf("Wprowadz liczbe: \n");
  scanf("%i", &a);
  switch(a){
    
    case 1:
      printf("poniedzialek");
      break;
    case 2:
      printf("wtorek");
      break;
    case 3:
      printf("sroda");
      break;
    case 4:
      printf("czwartek");
      break;
    case 5:
      printf("piatek");
      break;
    case 6:
      printf("sobota");
      break;
    case 7:
      printf("niedziela");
      break;
    default: 
      printf("incorrect input \n");
      return 1;
      break;
  }
  
  return 0;
}