#include <stdio.h>

int main(){
    int n;
    int cont;
    int mult=1;

    printf("intervalo de 1 ate: ");
    scanf("%d", &n);

    do{
        if(mult%3 == 0){
            printf("%d\n", mult);
        }
        mult++;

    }while(mult<=n);


return 0;
}
