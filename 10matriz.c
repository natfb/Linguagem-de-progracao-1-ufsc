/*10 O programa deve calcular o determinante de uma matriz A 3x3
regra de Sarrus:*/

#include <stdio.h>

int main(){

int m[3][3], i, j;

for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("Digite o elemento M = %d, %d  ", i+1, j+1);
        scanf("%d", &m[i][j]);
    }
}

for(i=0; i<3; i++){
    for(j=0; j<3; j++){             //input dos num da matriz
        printf("%d ", m[i][j]);
    }
     printf("\n\n");
}

int det = ((m[0][0] * m[1][1] * m[2][2])+(m[0][1] * m[1][2] * m[2][0])
       + (m[0][2] * m[1][0] * m[2][1]))-((m[0][1] * m[1][0] * m[2][2])
      +(m[0][0] * m[1][2] * m[2][1])+(m[0][2] * m[1][1] * m[2][0]));

printf("\n Determinante: %d", det);

return 0;
}
