#include <stdio.h>
#include <stdlib.h>

int main() {
    int k, n=1;
    int a, check, max, min, tab[100];
    float avg, sum = 0;

    printf("podaj liczby oddzielone spacja: ");
    for(int i=0;i<n;i++) {
        if (n <= 100) {
            check = scanf("%i", &a);
            if (a != -1) {
                if (check != 1) {
                    printf("Incorrect input ");
                    return 1;
                } else {
                    tab[i] = a;
                    n++;
                }
            }
        }
    }
    n-=1;
    max = tab[0];
    min = tab[0];
    for (k = 0; k < n; k++) {
        sum+=tab[k];
        if (tab[k] > max) {
            max = tab[k];
        } else if (tab[k] < min) {
            min = tab[k];
        }
    }
    avg = sum / n;
    printf("%i \n", n);
    printf("%i \n ", min);
    printf("%i \n", max);
    printf("%f\n", avg);
    printf("%.0f \n", sum);

}
