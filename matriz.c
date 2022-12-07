#include <stdio.h>

int main(){
    int *matPtr;
    int i, j;
    matPtr = (int *) malloc(5 * 4 * sizeof(int));

    for (i=0; i < 5; i++)
        for (j=0; j < 4; j++)
            matPtr[(i*4) + j] = 0;

    matPtr[(3*4) + 2] = 15;

    for (i=0; i < 5; i++){
        for (j=0; j < 4; j++){
            printf("%i " ,matPtr[(i*4) + j]);
        }
    }


}
