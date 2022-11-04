#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c, d, e, max, min, avg;
    printf("podaj 5 liczb \n");
    scanf("%f \n", &a);
    max = a;
    scanf("%f \n", &b);
    if(b>max){
        max = b;
        min = a;
    }else{
      min=b;
      }
    scanf("%f", &c);
    if(c>max){
        max=c;
    }else if(c<min){
        min=c;
      }
    scanf("%f", &d);
    if(d>max){
        max=d;
    }else if(d<min){
        min=d;
    }
    scanf("%f", &e);
    if(e>max){
        max=e;
    }else if(e<min){
        min=e;
      }
      avg = (a+b+c+d+e)/5;
    printf("\n %.2f \n %.2f \n %.2f", min, max, avg);
    return 0;
}