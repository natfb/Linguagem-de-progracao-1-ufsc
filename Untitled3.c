#include <stdio.h>

int fatorialr(n){
if(n==1 || n==0){
return 1;
}else{
return n*fatorialr(n-1);
}
}

int main(){
 int n, s;
 scanf("%d", &n);
 s = fatorialr(n);
 //sr = somaintr(n);
 printf("%d",s);
}
