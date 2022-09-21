#include<stdio.h>

int main(){
    int num;
    printf("escreva um numero inteiro: ");
    scanf("%d", &num);

    if(num<0)
        num = -1*num;
    printf("%d \n\n", num);

////////////////////////////////////////////////////////////////
    
    int num2, num3;
    printf("exercicio 2 \nEscreva dois numeros inteiros: ");
    scanf("%d %d", &num2, &num3);

    if(num2<num3){
        printf("%d %d", num2, num3);
    }else{
        printf("%d %d", num3, num2);
    }

//////////////////////////////////////////////////////////////////
    
    int num4, num5, num6;
        printf("exercicio 3 \nEscreva tres numeros inteiros: ");
    scanf("%d %d %d", &num4, &num5, &num6);

    if(num4 > num5 && num6){
        printf("%d e maior", num4);
    }else if(num5 > num4 && num6){
        printf("%d e maior", num5);
    }else{
        printf("%d e maior", num6);
    }

    return 0;
}
