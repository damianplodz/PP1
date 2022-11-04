#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=1,t, check, tab[1000],a;
    float avg, suma=0, lower=0, bigger=0;

    printf("podaj liczby oddzielone spacja: ");
    for (int i = 0; i < n; i++) {
        if (n <= 1000) {
            check = scanf("%i", &a);
            if (a != 0) {
                if (check != 1) {
                    printf("Incorrect input ");
                    return 1;
                } else {
                    tab[i] = a;
                    suma+=a;
                    n++;
                }
            }else if(n==1){
              if (check != 1) {
                    printf("Incorrect input ");
                    return 1;
                }
                printf("Brak danych");
                return 0;
            }
        }
    }
    n-=1;
    avg=suma/n;
    for(t=0;t<n;t++){
        if(tab[t]<avg){
            lower+=tab[t];
        }else if(tab[t]>avg){
            bigger+=tab[t];
        }
    }
    printf("%0.2f\n", avg);
    printf("%f\n", bigger);
    printf("%f\n", lower);
}