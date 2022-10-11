/*1 se a
pessoa i conhece a pessoa j e 0 caso contrário.*/

#include <stdio.h>

int main(){

int m[5][5], maior, maiorr, i, j, binario;

for(i=0; i<5; i++){
    for(j=0; j<5; j++){
        printf("Pessoa %d, vc conhece a pessoa %d? sim: 1 nao: 0\n", i+1, j+1);
        scanf("%d", &binario);
    if(binario == 1){
      m[i][j] = 1;
    }else{
        m[i][j] = 0;
    }
}
printf("\n");
}

for(i=0; i<5; i++){
    for(j=0; j<5; j++){
        printf("%d ", m[i][j]);
}
printf("\n");
}

for(i=0; i<5; i++){
    for(j=0; j<5; j++){
        if(m[j][i] == 1){
            maior += m[i][j];
        }
}
if(maior > maiorr){
            maiorr = j;
}
}

printf("Mais conhecido: %d", maiorr);

return 0;
}
