#include <stdio.h>

int main(){

int **matPtr;
int *v;
int i, j, m, n, c=0, c2=0;

printf("digi num linha: ");
scanf("%d", &n);

printf("digi num coluna: ");
scanf("%d", &m);

matPtr = (int **)  malloc (n*sizeof(int));

for(i=0; i<n; i++){
    matPtr[i] = (int*) malloc(m * sizeof(int));
    for(j=0; j<m; j++){
            printf("[%d] [%d]", i, j);
            scanf("%d", &matPtr[i][j]);
    }
}

for(i=0; i<n; i++){
    //matPtr = (int*) malloc(m * sizeof(int));
    for(j=0; j<m; j++){
            printf("%d ", matPtr[i][j]);
    }
    printf("\n");
}

for(i=0; i<n; i++){
    //matPtr = (int*) malloc(m * sizeof(int));
    for(j=0; j<m; j++){
        if(i == j){
            c++;
        }
    }
}
v = (int*) malloc(c * sizeof(int));

for(i=0; i<n; i++){
    //matPtr = (int*) malloc(m * sizeof(int));
    for(j=0; j<m; j++){
        if(i == j){
            v[c2] = matPtr[i][j];
            c2++;
        }
    }
    printf("\n");
}
printf("vetor das diagonais");
for(i =0; i<c2; i++){
    printf("%d ", *v);
    v++;
}

//return 0;
}
