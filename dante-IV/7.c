#include <stdio.h>

int main()
{
    int a,b,check, i, tab[20];

    printf("podaj dwie liczby oddzielone spacja: ");
    for(i=0; i<10; i+=2){
        check = scanf("%i", &a) && scanf("%i", &b);
        if(check!=1){
            printf("Input data type error ");
            return 1;
        }else{
            tab[i]=a;
            tab[i+1]=b;
        }
    }
  for(i=0; i<10; i++){
    if(tab[i]<2){
      printf("%i other \n", tab[i]);
    }
    for(int k=2;k*k<=tab[i];k++)
    if(tab[i]%k==0){
      printf("%i composite \n", tab[i]);
    }else{
      printf("%i prime \n", tab[i]);
    }
  }
}
