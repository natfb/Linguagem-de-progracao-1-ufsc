#include <stdio.h>

int main(){

    int counter;

    printf("Estrutura For \n");

    for(counter = 1; counter <=10; counter++){
        printf("%i \n", counter);

    }
////////////////////////////////////////////////////////
        int counter2;

    printf("\n Estrutura For multiplos de 3\n");

    for(counter2 = 0; counter2 <=30; counter2 +=3){
        printf("%i \n ", counter2);

    }
////////////////////////////////////////////////////////
    int counter3;

    printf("\n Estrutura For multiplos de 5 comecando em -10 e terminando em 20.\n");

    for(counter3 = -10; counter3 <=20; counter3 +=5){
        printf("\n %i", counter3);

    }
return 0;
}
