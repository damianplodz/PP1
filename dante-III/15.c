#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float check, a, count = 1, max, min, avg, suma = 0;
  printf("podaj liczbe ");
  check = scanf("%f", &a);
  if (check == 0 || a == -1) {
    printf("Incorrect input ");
    return 1;
  } else {
    max = a;
    min = a;
    avg = a;
    suma = suma + a;
  }
  while (a != -1) {
    check = scanf("%f", &a);
    if (a != -1) {
      count = count + 1;
      if (check == 0) {
        printf("Incorrect input ");
        return 1;
      } else {
        if (a > max) {
          max = a;
        } else if (a < min) {
          min = a;
        }
        suma = suma + a;
      }
      avg = suma / count;
    }
  }

  printf("\n min %.2f \n max %.2f \n avg %.2f", min, max, avg);
  return 0;
}