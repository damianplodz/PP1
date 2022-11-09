#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char tekst[1001]="\0";
    int samogloski=0,a=0,e=0,i=0,u=0,y=0,o=0,A=0,E=0,I=0,U=0,Y=0,O=0, k,size;
    printf("Podaj tekst: ");
    fgets(tekst, 1001, stdin);
    size=sizeof(tekst);
    for(k=0;k<size;k++){
        if(tekst[k]=='a'){
            a=1;
        }if(tekst[k]=='e'){
            e=1;
        }if(tekst[k]=='o'){
            o=1;
        }if(tekst[k]=='i'){
            i=1;
        }if(tekst[k]=='u'){
            u=1;
        }if(tekst[k]=='y'){
            y=1;
        }if(tekst[k]=='A'){
            A=1;
        }if(tekst[k]=='E'){
            E=1;
        }if(tekst[k]=='O'){
            O=1;
        }if(tekst[k]=='I'){
            I=1;
        }if(tekst[k]=='U'){
            U=1;
        }if(tekst[k]=='Y'){
            Y=1;
        }
        samogloski=a+o+e+i+y+u+A+E+I+O+U+Y;
    }
    printf("%i", samogloski);

}