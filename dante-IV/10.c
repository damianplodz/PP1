#include <stdio.h>
#include <stdlib.h>

int main() {
    int k, n = 1;
    int a,t,l, check, max, min, ima[100], imi[100], t1, t2, tab[100];
    float avg, sum = 0;

    printf("podaj liczby oddzielone spacja: ");
    for (int i = 0; i < n; i++) {
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
    n -= 1;
    max = tab[0];
    min = tab[0];
    for (k = 0; k < n; k++) {
        sum += tab[k];
        if (tab[k] > max) {
            max = tab[k];
            ima[0] = k;
            t1 = 0;
        } else if (tab[k] == max) {
            ima[t1] = k;
            t1++;
        } else if (tab[k] < min) {
            min = tab[k];
            imi[0] = k;
            t2 = 0;
        } else if (tab[k] == min) {
            imi[t1] = k;
            t2++;
        }
    }
        avg = sum / n;
        printf("%i \n", n);
        printf("%i \n ", min);
        printf("%i \n", max);
        printf("%f\n", avg);
        printf("%.0f \n", sum);
        for (t=0; t < t1; t++) {
            printf("%i ", ima[t]);
        }
        printf("\n");
        for (l=0; l < t2; l++) {
            printf("%i ", imi[l]);
        }
    }