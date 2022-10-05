#include <stdio.h>
#define MAX_LIMIT 20

int main(){

    int i;
    char mai[100];

    printf("Escreva algo que será transformado em maiusculo: ");
    scanf("%[^\n]%*c", mai);


    int len = strlen(mai);

    for(i=0; i<len; i++){
        if(mai[i]>=97 && mai[i]<=122){
            printf("%c", mai[i]-32);
        }else{
            printf("%c", mai[i]);
        }

    }





return 0;
}




