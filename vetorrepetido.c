//Selecionar valores repetidos de um vetor de 10 elementos sem repetições.

#include <stdio.h>

int main(){

int v[10]= {1, 2, 2, 8, 9, 3, 5, 8, 3, 5};
int ve[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int i, j, i2;
int c;

printf("valores repetidos do vetor: \n");
for(i=0; i<10; i++){
    for(j=0; j<10; j++){
        if(i != j && v[i] == v[j] && ve[i] != v[i]){
            printf("%d \n", v[i]);
            ve[j] = v[i];
        }
}
}

return 0;
}
