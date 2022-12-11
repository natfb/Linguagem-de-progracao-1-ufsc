#include <stdio.h>
#include <locale.h>

int jogada(int y, char *jogo[3][3], char *xo, int *x);
int printar(char *jogo[3][3]);
int win(char *jogo[3][3], int *win1, int *win2, char xo, char xo2);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int pos, win1 = 0, win2 = 0, c = 0;  //posicao, vencer e var contadora
    char xo;  //x ou o 1 e 2
    char xo2;
    char * jogo[3][3] = {{49, 50, 51},
                         {52, 53, 54},
                         {55, 56, 57}};

    printf("####JOGO DA VELHA#####\n\n");

    while(xo != 'x' && xo != 'o'){
        printf("\nJogador 1: X ou O?");
        scanf("%c", &xo);
    }
    printf("\n");

    if(xo == 'x'){
        xo2 = 'o';
    }else{
        xo2 = 'x';
    }

    printf("Jogador 1: %c\nJogador 2: %c\n\n", xo, xo2);
    sleep(1);
    system("cls");

    printar(&jogo);

    while(1){

        printf("Jogador 1, quer jogar o(a) %c em qual posição? ", xo-32);
        scanf("%i", &pos);
        printf("\n");
        system("cls");

        jogada(pos, &jogo, &xo, &c);
        printar(&jogo);
        win(&jogo, &win1, &win2, xo, xo2);

        if(win1 == 1){            //verificar se j1 venceu
            return 1;
        }

        if(c > 8){                //verificar se deu velha
            printf("\nDeu velha!");

            return 1;
        }

        printf("\nJogador 2, quer jogar o(a) %c em qual posição? ", xo2-32);

        scanf("%i", &pos);
        printf("\n");
        system("cls");

        jogada(pos, &jogo, &xo2, &c);
        printar(&jogo);
        win(&jogo, &win1, &win2, xo, xo2);

        if(win2 == 1){            //verificar se j2 venceu
            return 1;
        }

        if(c > 8){                //verificar se deu velha
            printf("\nDeu velha!");
            return 1;
        }
    }

    return 0;
}

int jogada(int y, char *jogo[3][3], char *xo, int *x){

    int sair = 0;
    char ox;

    *x = *x + 1; //contador de jogadas

    if(*xo == 'x'){
        ox = 'X';
    }else{
        ox = 'O';
    }
    do{

    if(sair == 1){
        scanf("%d", &y);
        system("cls");
    }
    sair = 0;

    switch(y){
        case 1:
        if(jogo[0][0] == 'X' || jogo[0][0] == 'O'){
            printar(jogo);
            printf("Posição ocupada, digite novamente: \n");
            sair = 1;
        }else{
            jogo[0][0] = ox;
        }
        break;

        case 2:
        if(jogo[0][1] == 'X' || jogo[0][1] == 'O'){
            printar(jogo);
            printf("Posição ocupada, digite novamente: \n");
            sair = 1;
        }else{
            jogo[0][1] = ox;
        }

        break;

        case 3:
            if(jogo[0][2] == 'X' || jogo[0][2] == 'O'){
            printar(jogo);
            printf("Posição ocupada, digite novamente: \n");
            sair = 1;
        }else{
            jogo[0][2] = ox;
        }
        break;

        case 4:
        if(jogo[1][0] == 'X' || jogo[1][0] == 'O'){
            printar(jogo);
            printf("Posição ocupada, digite novamente: \n");
            sair = 1;
        }else{
            jogo[1][0] = ox;
        }
        break;

        case 5:
        if(jogo[1][1] == 'X' || jogo[1][1] == 'O'){
            printar(jogo);
            printf("Posição ocupada, digite novamente: \n");
            sair = 1;
        }else{
            jogo[1][1] = ox;
        }
        break;

        case 6:
        if(jogo[1][2] == 'X' || jogo[1][2] == 'O'){
            printar(jogo);
            printf("Posição ocupada, digite novamente: \n");
            sair = 1;
        }else{
            jogo[1][2] = ox;
        }
        break;

        case 7:
        if(jogo[2][0] == 'X' || jogo[2][0] == 'O'){
            printar(jogo);
            printf("Posição ocupada, digite novamente: \n");
            sair = 1;
        }else{
            jogo[2][0] = ox;
        }
        break;

        case 8:
        if(jogo[2][1] == 'X' || jogo[2][1] == 'O'){
            printar(jogo);
            printf("Posição ocupada, digite novamente: \n");
            sair = 1;
        }else{
            jogo[2][1] = ox;
        }
        break;

        case 9:
        if(jogo[2][2] == 'X' || jogo[2][2] == 'O'){
            printar(jogo);
            printf("Posição ocupada, digite novamente: \n");
            sair = 1;
        }else{
            jogo[2][2] = ox;
        }
        break;

    }
    }while(sair == 1);

    return 0;
}

int printar(char *jogo[3][3]){

    int i, j;

    printf("####JOGO DA VELHA####\n\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("  %c  :", jogo[i][j]);
        }
        printf("\n.....................\n");
    }

    return 0;
}

int win(char *jogo[3][3], int *win1, int *win2, char xo, char xo2){
    int i, j, c_win1, c_win2;

    for(i = 0; i < 3; i++){     //linha
        c_win1 = 0;
        c_win2 = 0;
        for(j = 0; j < 3; j++){
            if(jogo[i][j] == 'X'){
                c_win1 += 1;
            }else if(jogo[i][j] == 'O'){
                c_win2 += 1;
            }
        }
        if(c_win1 == 3 && xo == 'x'){
            *win1 = 1;
            printf("Jogador 1 venceu");
        }else if(c_win1 == 3 && xo2 == 'x'){
            *win2 = 1;
            printf("Jogador 2 venceu");
        }
        if(c_win2 == 3 && xo == 'o'){
            *win1 = 1;
            printf("Jogador 1 venceu");
        }else if(c_win2 == 3 && xo2 == 'o'){
            *win2 = 1;
            printf("Jogador 2 venceu");
        }
    }
    printf("%i", *win2);

    for(i = 0; i < 3; i++){     //coluna
        c_win1 = 0;
        c_win2 = 0;
        for(j = 0; j < 3; j++){
            if(jogo[j][i] == 'X'){
                c_win1 += 1;
            }else if(jogo[j][i] == 'O'){
                c_win2 += 1;
            }
        }
        if(c_win1 == 3 && xo == 'x'){
            *win1 = 1;
            printf("Jogador 1 venceu");
        }else if(c_win1 == 3 && xo2 == 'x'){
            *win2 = 1;
            printf("Jogador 2 venceu");
        }
        if(c_win2 == 3 && xo == 'o'){
            *win1 = 1;
            printf("Jogador 1 venceu");
        }else if(c_win2 == 3 && xo2 == 'o'){
            *win2 = 1;
            printf("Jogador 2 venceu");
        }
    }
    printf("%i", win2);
    c_win1 = 0;
    c_win2 = 0;
    for(i = 0; i < 3; i++){     //diagonal
        for(j = 0; j < 3; j++){
            if(i == j && jogo[i][j] == 'X'){
                c_win1 += 1;
            }else if(i == j && jogo[i][j] == 'O'){
                c_win2 += 1;
            }
        }
        if(c_win1 == 3 && xo == 'x'){
            *win1 = 1;
            printf("Jogador 1 venceu");
        }else if(c_win1 == 3 && xo2 == 'x'){
            *win2 = 1;
            printf("Jogador 2 venceu");
        }
        if(c_win2 == 3 && xo == 'o'){
            *win1 = 1;
            printf("Jogador 1 venceu");
        }else if(c_win2 == 3 && xo2 == 'o'){
            *win2 = 1;
            printf("Jogador 2 venceu");
        }
    }

    c_win1 = 0;
    c_win2 = 0;
    for(i = 0; i < 3; i++){     ////outra diagonal
        for(j = 0; j < 3; j++){
            if(i + j == 2 && jogo[i][j] == 'X'){
                c_win1 += 1;
            }else if(i + j == 2 && jogo[i][j] == 'O'){
                c_win2 += 1;
            }
        }

        if(c_win1 == 3 && xo == 'x'){
            *win1 = 1;
            printf("Jogador 1 venceu");
        }else if(c_win1 == 3 && xo2 == 'x'){
            *win2 = 1;
            printf("Jogador 2 venceu");
        }
        if(c_win2 == 3 && xo == 'o'){
            *win1 = 1;
            printf("Jogador 1 venceu");
        }else if(c_win2 == 3 && xo2 == 'o'){
            *win2 = 1;
            printf("Jogador 2 venceu");
        }
    }
    return 0;
}


