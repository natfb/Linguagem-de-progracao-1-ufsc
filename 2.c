#include <stdio.h>

//iterativa
int somaint(n){
int soma=0, i;
    for(i=1; i>n; i++){
    soma += i;
    return soma;
}
}
//recursiva
int somaintr(int n){
if(n==1)
return 1;
else
return n+somaintr(n-1);
}

int main(){
 int n, s, sr;
 scanf("%d", &n);
 s = somaint(n);
 sr = somaintr(n);
 printf("%d %d",s, sr);
}
