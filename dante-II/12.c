#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  double a;
  double b;
  double c;
  double delta;
  double x1;
  double x2;

  printf("Program rozwiązujący równanie kwadratowe postaci 0 = ax^2 + bx + c \n podaj a " );
  scanf("%lf", &a);
  printf("podaj b ");
  scanf("%lf", &b);
  printf("podaj c ");
  scanf("%lf", &c);
  delta = b*b-4*a*c;
  if(a==0 && b==0 && c==0){
    printf("nieskonczonosc");
    return 0;
  }else if(a==0 && b==0){
    printf("brak");
    return 0;
  }else if(a==0){
    printf("jeden pierwiastek %lf", -c/b);
    return 0;
  }
    if(delta==0){
      x1 = -b/(a*2);
      printf("jeden pierwiastek %lf", x1);
      }else if(delta>0){
      delta = sqrt(delta);
      x1 = ((-b)-delta)/(2*a);
      x2 = ((-b)+delta)/(2*a);
      printf("dwa pierwiastki %lf %lf", x1, x2);
    }else if(delta<0){
      printf("brak");
    }
  return 0;
}