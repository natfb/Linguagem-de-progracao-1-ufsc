#include <stdio.h>

int main(){
    int n;
scanf("%d", &n);

int a = fib(n);
int b = fibr(n);
printf("%d %d", a, b);
}

int fib(n){
    int f1, f2, f, i;
f1=1;
f2=1;
f = 1;

for(i =3;i<n;i++){
f = f1+f2;
f1 =f2;
f2 =f;
}
return f;
}

int fibr(n){
if(n==1 || n==2){
    return 1;
}else{
    return fibr(n-1)+fibr(n-2);
}
}
