#include <stdio.h>
//iterativa
int somaint(n){
int soma=0, i;
    for(i=1; i<n;i++){
    soma+=i;
    return soma;
}
}
int somaintr(int n){
if(n==1)
    return 1;
    else
        return n+somaintr(n-1);
}
int main(){
int n, s;

scanf("%d", &n);
s = somaintr(n);
printf("%d", s);

return 0;
}

////recursiva/////////////////
