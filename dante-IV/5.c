#include <stdio.h>

int main()
{
    int check, i;
    float a,b, tab[20];

    printf("podaj dwie liczby oddzielone spacja: ");
    for(i=0; i<10; i+=2){
        check = scanf("%f", &a) && scanf("%f", &b);
        if(check!=1){
            printf("Input data type error ");
            return 1;
        }else{
            tab[i]=a;
            tab[i+1]=b;
        }
    }
    for(i=0;i<10; i++){
      printf("%i %f \n", i, tab[i]);
    }
}