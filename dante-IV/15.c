#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=1, t, k, check;
    float tab[1000], a, utab[1000];

    printf("podaj liczby oddzielone spacja: ");
    for (int i = 0; i < n; i++) {
        if (n <= 1000) {
            check = scanf("%f", &a);
            if (a != 0) {
                if (check != 1) {
                    printf("Incorrect input ");
                    return 1;
                } else {
                    tab[i] = a;
                    n++;
                }
            }else if(n==1 || n==2){
                if (check != 1) {
                    printf("Incorrect input ");
                    return 1;
                }
                printf("not enough data available");
                return 2;
            }
        }
    }
    for(t=0;t<n;t++){
        utab[t]=(tab[t]+tab[t+1])/2;
    }
    for(k=0;k<(n-2);k++){
        printf("%.2f ",utab[k]);
    }
}