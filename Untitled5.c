 #include <stdio.h>

 int main(){

    int c[10];
    int i;

    for (i = 0; i<10; i++)
        c[i] = i*2;

    printf("Elemento=     Valor \n");

    for(i=0; i<10; i++)
        printf("c[%i]=       %i \n", i, c[i]);


 return 0;
 }
