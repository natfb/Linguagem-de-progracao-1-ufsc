#include<stdio.h>

int main(){
    int num, num1, num2;
        printf("exercicio 3 \nEscreva tres numeros inteiros: ");
    scanf("%d %d %d", &num, &num1, &num2);

    if(num1+num2 > num && num2 < num+num1 && num1 < num+num2){
        printf("estes numeros formam um triangulo");
    }else{
        printf("estes numeros nao formam um triangulo");
    }

    return 0;
}

