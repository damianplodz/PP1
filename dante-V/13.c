#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char in[1001]="\0";
    int len,i,n=0;
    printf("Podaj ciag: ");
    fgets(in,1001,stdin);
    len=strlen(in);
    //printf("%i\n", len);
    for(i=0;in[i]!='\0';i++) {
        if ((isalpha(in[i+1])) && (isspace(in[i]))) {
            n++;
        }
    }
    n++;
        printf("%i",n);
}
