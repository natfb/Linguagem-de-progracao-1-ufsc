#include <stdio.h>

int main(){

    float a=0;
    float soma=0;

    int c=1;

    do{
    printf("digite um numero: ");
    scanf("%f", &a);
    soma +=a;
    c++;
    }while(c<=5);


    float med = soma/5;
    printf("a media e %.1f", med);

return 0;
}
