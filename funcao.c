#include <stdio.h>

int sqr (int num);
void printl();

int main(){
int i;

for(i=0; i<=10; i++){
    printf("%d^2 = %d", i, sqr(i));
    printl();
}

return 0;
}

int sqr (int num){
    return num * num;
}
void printl(){
printf("\n==========================\n");
return;
}
