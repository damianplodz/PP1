#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char in[102]="\0";
    int len,i,sum=0,k,num=0,d=0,tmp;
    printf("Podaj ciag: ");
    fgets(in,102,stdin);
    len=strlen(in)-1;
    //printf("%i\n", len);
    for(i=0;i<=len;i++) {
        if (isalpha(in[i])) {
            printf("Incorrect input");
            return 1;
        }else if(isdigit(in[i])){
            in[i]=in[i]-48;
        }
    }

        for(k=len; k>=0;k--){
            if(in[k]==43){
                sum+=num;
            }else if(in[k]==45){
                sum-=num;
            }else{

                num = in[k];
            }
        }
        if(in[0]==43){
            sum-=num;
        }else{
            sum+=num;
        }
    printf("%i", sum);

}
