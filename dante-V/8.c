#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char in[202]="\0",tab[202]="\0", out[202]="\0", last[]="\0";
    int len,i,k,m,n=0,num;
    printf("Podaj tekst: ");
    fgets(in,202,stdin);
    len=strlen(in);
   if(len>100){
        printf("Input is too long");
        return 2;
    }
    len--;
    for(i=0;i<=len;i++){
        if(in[i]==48 || isupper(in[i]) || (isdigit(in[i]) && isdigit(in[i+1]))){
            printf("Incorrect input");
            return 1;
        }
        out[i]=in[len-i];
    }
    if(isdigit(out[1])){
        printf("Incorrect input");
        return 1;
    }
    for(k=0; k<=len; k++) {
        if(isdigit(out[k])){
            num=out[k]-49;
            for(int tmp=0;tmp<num;tmp++){
                tab[n]=last[0];
                n++;
            }
        }else{
            tab[n]=out[k];
            last[0] = out[k];
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
