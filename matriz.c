/*• criar uma matriz A (4x4)
  • achar o elemento máximo dessa matriz e a sua posição*/

#include <stdio.h>

int main(){

int A[4][4]= {
    {10, 10, 10, 10},
    {10, 10, 10, 10},
    {10, 10, 10, 10},
    {10, 50, 10, 10}
};

int i, j, maior, soma = 0, v[16];
                              //print matriz
for(i=0; i<4; i++){
    for(j=0; j<4; j++){
        printf("%d ", A[i][j]);
    }
     printf("\n");
}

for(i=0; i<4; i++){       //maior
    for(j=0; j<4; j++){
        if(A[i][j]> maior ){
            maior = A[i][j];
        }
    }
}

for(i=0; i<4; i++){     //soma
    for(j=0; j<4; j++){
        soma += A[i][j];
    }
     printf("\n");
}

printf("Maior elemento %d \n", maior);
printf("Soma dos elementos %d ", soma);

return 0;
}

