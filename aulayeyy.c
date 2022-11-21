#include <stdlib.h>
#include <stdio.h>

void troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}
int main(){
    int a=3, b=5;
    troca(&a, &b);
    printf("%d %d\n", a, b);
}
