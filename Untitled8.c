#include <stdio.h>


int main(){
    int x,y;

    printf("DIGITE UM VALOR PARA X: \n");
    scanf("%i", &x);

    if(-2<=x<=2){
        y = x*x;

    }

    if(x>2  ||  x<-2 ){
        y=4;

    }

    printf("Y = %i",y);

    return 0;
}
