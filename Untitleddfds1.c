#include <stdio.h>

int a;
void f(int b);

int main(){

int b=4;

printf("a em main %d \n", a);
printf("b em main %d \n", b);

f(b);
return 0;
}

void f(int b){
int c;
b=78;

printf("a em f() %d \n", a);
printf("b em f() %d \n", b);
printf("c em f() %d \n", c);
}
