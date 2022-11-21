#include <stdlib.h>
#include <stdio.h>

int main(){
    int i, n, *nn;
    scanf("%i", &n);

    nn = (int*) malloc(n*sizeof(int));
    printf("%i", nn);

    int v[*nn];
    int vv[*nn];

    printf("primeiro vetor");
    for(i = 0; i < *nn; i++){
        scanf("%i", &v[i]);
    }
    printf("segundo vetor");
    for(i = 0; i < *nn; i++){
        scanf("%i", &vv[i]);
    }
    printf("produtor escalar");
    int prod[*nn];
    for(i = 0; i < *nn; i++){
       prod[i] = v[i] * vv[i];
    }
    for(i = 0; i < *nn; i++){
      printf("%i", prod[i]);
    }
}

