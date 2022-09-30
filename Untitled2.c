#include <stdio.h>

int main(){
   float nota;
   float soma;
   int cont;


   for(cont=1; cont<=15; cont++){

    printf("Digite a %d nota: \n",cont);
    scanf("%f", &nota);

    while(nota < 0 || nota > 10){
        printf("Digite a %d nota entre 0 e 10 \n", cont);
        scanf("%f", &nota);
    }
    soma+=nota;
   }

   float media = soma/7;
   printf("a media e %.2f", media);

return 0;
}
