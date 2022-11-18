#include <stdio.h>
#include <stdlib.h>

void escreve(int *num, int n);

int main(){
    int *num;
    int n, i;

    printf("qnt de numeros: ");
    scanf("%i", &n);

    num = malloc(n*sizeof(int));

    for( i = 0; i < n; i++){
        printf("numero %i\n", i);
        scanf("%d", &num[i]);
    }

    escreve(num, n);

    free(num);

}

void escreve(int *num, int n){
    int i;
    printf("numeros lidos: ");
    for(i = 0; i < n; i++){
        printf("%d\n", num[i]);
    }

}
