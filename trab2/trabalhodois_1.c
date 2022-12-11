/*
   // FILE:          trabalho2_1.c
   // TITLE:
   // SUBMITTED BY:  Natalia Farias Bianchini
   //                All code is my own except where credited to others.
   // FOR COURSE:    Engenharia de Computação - Linguagem de programação I
   // DUE DATE:      09/12/2022
   //
   // PURPOSE:
   // Este programa recebe informações sobre estrelas. O programa lê o
      nome, temperatura e massa de três estrelas e escreve as informações
      providenciadas pelo usuário em um arquivo de texto.
   //
   // OVERALL METHOD:
   // O programa faz o seguinte:
   // 1. Recebe inputs do usuário e armazena em variáveis struct.
   // 2. Escreve os dados fornecidos em um arquivo texto.
   //
   // INCLUDED FILES:
   //    <stdio.h>
   //    <locale.h>
   //
   // DATA FILES:
   //    stars.txt
*/


#include <stdio.h>
#include <locale.h>

#define total_stars 3

typedef struct{
    char nome[100];
    char massa[15];
    float temperatura;
}dados;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i;

    dados star[total_stars]; //quantidade de variaveis

    printf("Digite os dados da estrela 1: \n");

//__________INPUTS___________________________________//
//__________stara 1________________________________//

    printf("Nome: ");
    scanf("%[^\n]", &star[0].nome);

    printf("Massa: ");
    scanf(" %[^\n]", &star[0].massa);

    printf("Temperatura: ");
    scanf("%f", &star[0].temperatura);
    printf("\n");

//__________stars 2________________________________//

    printf("Digite os dados da estrela 2:\n");

    printf("Nome: ");
    scanf(" %[^\n]", &star[1].nome);

    printf("Massa: ");
    scanf(" %[^\n]", &star[1].massa);

    printf("Temperatura: ");
    scanf("%f", &star[1].temperatura);
    printf("\n");

//__________stara 3________________________________//

    printf("Digite os dados da estrela 3: \n");

    printf("Nome: ");
    scanf(" %[^\n]", &star[2].nome);

    printf("Massa: ");
    scanf(" %[^\n]", &star[2].massa);

    printf("Temperatura: ");
    scanf("%f", &star[2].temperatura);
    printf("\n");

//__________ARQUIVO________________________________//

    FILE *filep;
    filep = fopen("stars.txt", "w");

    if(filep == NULL){
        printf("ERRO");
        return 1;
    }

    fprintf(filep, "--Catálogo de estrelas--\n\n");   //ESCREVENDO NO ARQUIVO

    for(int i = 0; i < total_stars; i++){
        fprintf(filep, "Nome: %s\nMassa: %s kg\nTemperatura: %.2f Kelvin\n________________________\n\n",
                star[i].nome,
                star[i].massa,
                star[i].temperatura);
    }

    return 0;
}

