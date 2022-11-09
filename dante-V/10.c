#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char in[1002]="\0", out[500]="\0";
    int len,i,newWord=0,m,wordLen=0,k=0,l;
    printf("Podaj tekst: ");
    fgets(in,1002,stdin);
    len=strlen(in)-1;
    for(i=0;i<=len;i++){
        if(isdigit(in[i])|| ispunct(in[i])){
            printf("Incorrect input");
            return 1;
        }
        for(i=0;i<=len;i++) {
            if (isspace(in[i])) {
                newWord++;
            }else{
                out[k]=in[i];
                wordLen++;
            }
        }
    }
    for(m=1;m<newWord;m++) {
        for(l=0;l<=k;l++){
            printf("%c", out[m]);
        }
        printf("\n");
    }
}
