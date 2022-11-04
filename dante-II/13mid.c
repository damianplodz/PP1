#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c, d, e, max, min, mid, amin, amax;
    printf("podaj 5 liczb \n");
    scanf("%f \n", &a);
    max = a;
    scanf("%f \n", &b);
    if(b>max){
        max = b;
        min = a;
    }else{min=b;}
    scanf("%f", &c);
    if(c>max){
        max=c;
    }else if(c<min){
        min=c;
    }else{
        mid=c;
    }
    scanf("%f", &d);
    if(d>max){
        max=d;
    }else if(d<min){
        min=d;
    }else if(d>mid){
        amax=d;
        amin=mid;
    }else if(d<mid){
        amin=d;
        amax=mid;
    }
    scanf("%f", &e);
    if(e>max){
        max=e;
    }else if(e<min){
        min=e;
    }else if(e<amin){
        mid=amin;
        amin=e;
    }else if(e>amax){
        mid=amax;
        amax=e;
    }else{
        mid=e;
    }
    printf("\n %.2f \n %.2f \n %.2f", min, max, mid);
    return 0;
}