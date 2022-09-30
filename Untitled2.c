#include <stdio.h>

int main(){

    int a;
    int soma;
    int med;
    int c=1;

    do{
    printf("digite um numero: ");
    scanf("%d", &a);
    soma += a;
    c++;
    }while(c<=5);
    printf("a media e %d", soma/5);

}
