/*Programa recebe as escolhas dos 10 eleitores e calcula os votos para 5
candidatos.
• Modifique programa permitindo:
◦ receber a quantidade de votos a ser analisada
◦ receber os votos para 7 candidatos
◦ calcular a percentagem de votos de cada candidato e votos nulos*/

#include <stdio.h>

int main(){
const int arraySize = 6;
int cand[arraySize];

int i, v;
int n = -1;
   

printf("\n Apuracéo de votos: ");
for ( i = 0; i < arraySize; i++ )
cand[i] = 0;

 

for ( i= 0; i< 10; i++){

printf("\n Escolha o candidato (1..5)");
scanf("%i", &v);

if(v >= 0 && v <=5 )
    cand[v]++;
else
    cand[0]++;
}

printf("\n Candidato Votos \n");
for ( i= 1; i < arraySize; i++ )
printf(" %i %i \n", i, cand[i]);
printf("\n Votos nulos: %i \n", cand[0]);

return 0;
}



