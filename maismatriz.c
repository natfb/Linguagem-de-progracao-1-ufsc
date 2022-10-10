/*• criar uma matriz 3 x 3 A com elementos do tipo float;
• criar uma matriz B com elementos da matriz A que estão acima da
media (os outros elementos devem ser iguais a 0);
• cria uma matriz C com elementos da matriz A com suas posições
invertidas em relação a diagonal principal:  */

#include <stdio.h>

int main(){

float A[3][3]= {
    {17, 10, 40},
    {51, 10, 11},
    {10, 10, 15},
};
float B[3][3], C[3][3], soma, media;
int i, j;

printf("Matriz A \n");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("%.0f  ", A[i][j]);
    }
     printf("\n");
}

for(i=0; i<3; i++){
    for(j=0; j< 3; j++){   //media
        soma += A[i][j];
    }
}

media = soma/9;

printf("\nMatriz B \n");
for(i=0; i<3; i++){
    for(j=0; j< 3; j++){
        if(A[i][j] > media){
            B[i][j] = A[i][j];
            printf("%.0f ", B[i][j]);
        }else{
            B[i][j] = 0;
            printf("%.0f  ", B[i][j]);
        }
    }
    printf("\n");
}

printf("\nMatriz C \n");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("%.0f  ", A[j][i]);
    }
     printf("\n");
}

return 0;
}


