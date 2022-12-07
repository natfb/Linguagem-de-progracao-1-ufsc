#include <stdio.h>

int main(){

    int v[15], *v2, *v3, i, c = 0, n =0, cn = 0;

    for(i = 0; i < 15; i++){
        printf("digi num:");
        scanf("%i", &v[i]);
    }
    for(i = 0; i < 15; i++){
        printf("%i ", v[i]);
    }
    printf("\n");

    for(i = 0; i < 15; i++){
        if(v[i] % 2 != 0){
           c++;
        }
    }

    v2 = (int *) malloc(c * sizeof(int));

    c = 0;
    for(i = 0; i < 15; i++){
        if(v[i]% 2!= 0){
           v2[c] = v[i];
           c++;
        }
    }

    for(i = 0; i < c; i++){
       printf("%i ", v2[i]);
    }
    printf("\n");

    printf("digi num");
    scanf("%i", &n);

    for(i = 0; i < 15; i++){
        if(v2[i] > n){
            cn++;
        }
    }
    printf("%i \n", n);
    v3 = (int *) malloc(cn * sizeof(int));

    c = 0;
    for(i = 0; i < 15; i++){
        if(v2[i] > n){
            v3[c] = v2[i];
            c++;
        }
    }
    for(i = 0; i < cn; i++){
        printf("%i ", v3[i]);
    }
    printf("\n");


}
