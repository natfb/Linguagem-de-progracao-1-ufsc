//quetsao 2

#include<stdio.h>
#include<stdlib.h>
int main(){
int n, s, a;
scanf("%d", &n);       //a) soma dos algarismos de um numero
s = 0;                  // b) -
while(n > 0){
a = n%10;
s += a;
n = n/10;
}
printf("%d\n", s);

int v[10], k, i, soma=0;

printf("digite um numero: ");
scanf("%d", &k);

for(i=0; i<10; i++){
    printf("digite o elemento %d do vetor \n", i);
    scanf("%d", &v[i]);
}
for(i=0; i<10; i++){
    printf("%d", v[i]);
}

for(i=0; i<10; i++){
    if(v[i] > k){
    soma += v[i];
    }
}
printf("\n a soma dos elementos > k: %d \n", soma);

for(i=0; i<10; i++){
    if((v[i] % 2) == 0){
    v[i] = -1;
    }
}
for(i=0; i<10; i++){
    printf(" %d ", v[i]);
}



return(0);
}


