#include <stdio.h>
#include <stdlib.h>

/*Criar vetor a com 10 elementos float e vetor b com 15 elementos float.
• Ciar e fazer uso das funções a seguir:
◦ minv para achar o menor elemento em vetor com protótipo:
float minv (float v[ ], int n) ou float minv (float * v, int n)
◦ sumv para achar a soma dos elementos do vetor com protótipo:
float sumv (float v[ ], int n) ou float sumv (float * v, int n)
◦ meanv para achar o valor médio dos elementos do vetor com
protótipo:
float meanv (float v[ ], int n) ou float meanv (float * v, int n)*/
float minv(float * v, int n);
float sumv(float * v, int n);
float meanv(float * v, int n);

int main(){
    float v1[10] = {1, 2, 5, 4, -10, 4, 4, 6, 3, 10};
    float v2[15] = {1, 2, 5, 4, -1, 4, 4, 6, 3, 10, 11, 12, 13, 14, 15};
    float *ptv1 = v1;
    float *ptv2 = v2;
    printf("menor valor do vetor\n");
    minv(ptv1, 10);
    printf("soma dos valores do vetor\n");
    sumv(ptv1, 10);
    printf("valor médio\n");
    meanv(ptv1, 10);
}
float minv(float * v, int n){
    int i;
    float menor = 0;
    //float vfloat = (float) v;

    for (i = 0; i < n; i++){
        if(*v < menor){
            menor = *v;
        }
        v++;
    }
    printf("menor %f\n", menor);
}
float sumv(float * v, int n){
    int i;
    float soma = 0;

    for (i = 0; i < n; i++){
        soma += *v;
        v++;
    }
    printf("soma %f\n", soma);
}
float meanv(float * v, int n){
    int i;
    float soma = 0, media =0 ;

    for (i = 0; i < n; i++){
        soma += *v;
        v++;
    }

    media = soma / n;

    printf("media %f\n", media);
}
