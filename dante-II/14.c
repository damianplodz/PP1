#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c, d, e, max, min, avg;
    printf("podaj 5 liczb \n");
    scanf("%f", &a);
    max=a;
    min=a;
    scanf("%f", &b);
    if(b==-1){
      avg=a;
    }else{
    if(b>max){
        max = b;
        min = a;
    }else{
      min=b;
      }
    scanf("%f", &c);
      if(c==-1){
        avg=(a+b)/2;
      }else{
    if(c>max){
        max=c;
    }else if(c<min){
        min=c;
      }
    scanf("%f", &d);
        if(d==-1){
          avg=(a+b+c)/3;
        }else{
    if(d>max){
        max=d;
    }else if(d<min){
        min=d;
    }
    scanf("%f", &e);
          if(e==-1){
            avg = (a+b+c+d)/4;
          }else{
          avg = (a+b+c+d+e)/5;
    if(e>max){
        max=e;
    }else if(e<min){
        min=e;
      }
    }}}}
    printf("\n %.2f \n %.2f \n %.2f", min, max, avg);
    return 0;
}