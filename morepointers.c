#include <stdlib.h>
#include <stdio.h>

void troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}
int main(){
    int a=3, b=5;
    printf("a %d b %d\n", a, b);
    troca(&a, &b);
    printf("a %d b %d\n", a, b);
}
