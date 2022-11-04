#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
  int tab[11];
  for(int i=0; i<=10; i++){
     tab[i]=i;
   }
   for(int i=0; i<=10; i++){
     printf("%i ", tab[i]);
   }
  printf("\n");
}