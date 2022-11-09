#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char in[202]="\0",tab[202]="\0", out[202]="\0";
    int len,i,k,m,n=0;
    printf("Podaj tekst: ");
    fgets(in,202,stdin);
    len=strlen(in);
   if(len>101){
        printf("Input is too long");
        return 2;
    }
    len--;
    for(i=0;i<=len;i++){
        if(isdigit(in[i])|| ispunct(in[i])){
            printf("Incorrect input");
            return 1;
        }
        out[i]=in[len-i];
    }
    for(k=0; k<=len; k++) {
        if(isupper(out[k])){
            for(int tmp=0;tmp<3;tmp++){
                tab[n]=out[k];
                n++;
            }
        }else{
            tab[n]=out[k];
            n++;
        }
    }
    if(n>201){
        printf("Output is too long");
        return 3;
    }
    for(m=1;m<n;m++) {
        printf("%c", tab[m]);
    }
}
