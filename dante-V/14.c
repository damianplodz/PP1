#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char in[1001]="\0";
    int i,n=0;
    printf("Podaj ciag: ");
    fgets(in,1001,stdin);
    for(i=0;in[i]!='\0';i++) {
        if ((isalpha(in[i+1])) && (!isalpha(in[i]))) {
            n++;
        }
    }
    n++;
    if(!isalpha(in[0])){
        n--;
    }
        printf("%i",n);
}
