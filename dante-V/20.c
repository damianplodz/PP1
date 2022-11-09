#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char in[1001] = "\0";
    int i, code, len, k;
    printf("Podaj ciag: ");
    fgets(in, 1001, stdin);
    printf("Podaj przesuniecie: ");
    scanf("%i", &code);
    len = strlen(in) - 1;
    for (i = 0; i < len; i++) {
        if (isalpha(in[i])) {
            if(isupper(in[i])) {
                if ((in[i] + code) > 90) {
                    in[i] = ((in[i] + code) % 90) + 64;
                } else {
                    in[i] += code;
                }
            }else if(islower(in[i])) {
                if ((in[i] + code) > 122) {
                    in[i] = ((in[i] + code) % 122) + 96;
                } else {
                    in[i] += code;
                }
            }
        }
    }
    for (k = 0; k < len; k++) {
        printf("%c", in[k]);
    }
}