/*criar vetor com 10 elementos do tipo float
• calcular o valor médio dos elementos
• imprimir os elementos do vetor que estão acima da média com suas
respectivas posições*/

#include <stdio.h>

int main(){

float v[10]= {1, 4, 7, 8, 9, 3, 5, 0, 3, 6};
int i;
float media, mem;

for(i=0; i<10; i++){
   mem += v[i];
}

media = mem/10;
printf("media: %.2f \n\n", media);

printf("Vetores maiores que a media\n");
for(i=0; i<10; i++){
   if(v[i] > media){
    printf("vetor[%i] = %.2f \n",i ,v[i]);
   }
}


return 0;
}
