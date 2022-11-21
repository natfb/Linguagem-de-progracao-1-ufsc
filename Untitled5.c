#include <stdio.h>
#include <stdlib.h>
void soma(){

}
int main(){
     int i, n, *nn;
    printf("tamanho do vetor: ");
    scanf("%i", &n);

    nn = (int*) malloc(n*sizeof(int));
    //printf("%i", *nn);

    for(i = 0; i < n; i++){
       scanf("%i", &*(nn + i));
    }
    for(i = 0; i < n; i++){
       scanf("%i", &*(nn + i));
    }
    for(i = 0; i < n; i++){
       printf("%i", *(nn + i));
    }

}
