#include <stdio.h>
#include <locale.h>

int jogada(int y, char *jogo[3][3], char *xo);
int printar(char *jogo[3][3]);
int win(char *jogo[3][3], int *win1, int *win2);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int pos, win1 = 0, win2 = 0;
    char xo;
    char xo2;
    char * jogo[3][3] = {{49, 50, 51},
                         {52, 53, 54},
                         {55, 56, 57}};

    printf("########JOGO DA VELHA########\n\n");
    printf("Player 1: X ou O? \n");
    scanf("%c", &xo);

    printar(&jogo);

    while(win1 == 0 && win2 == 0){

        printf("Jogador 1, quer jogar %c em qual posição? \n", xo-32);
        scanf("%i", &pos);

        jogada(pos, &jogo, &xo);
        printar(&jogo);
        win(&jogo, &win1, &win2);

        if(xo == 'x'){
            xo2 = 'o';
        }else{
            xo2 = 'x';
        }

        printf("Jogador 2, quer jogar %c em qual posição? \n", xo2-32);
        scanf("%i", &pos);

        jogada(pos, &jogo, &xo2);
        printar(&jogo);
        win(&jogo, &win1, &win2);
    }

    return 0;
}

int jogada(int y, char *jogo[3][3], char *xo){

    char ox;

    if(*xo == 'x'){
        ox = 'X';
    }else{
        ox = 'O';
    }

    switch(y){
        case 1:
        jogo[0][0] = ox;
        break;

        case 2:
        jogo[0][1] = ox;
        break;

        case 3:
        jogo[0][2] = ox;
        break;

        case 4:
        jogo[1][0] = ox;
        break;

        case 5:
        jogo[1][1] = ox;
        break;

        case 6:
        jogo[1][2] = ox;
        break;

        case 7:
        jogo[2][0] = ox;
        break;

        case 8:
        jogo[2][1] = ox;
        break;

        case 9:
        jogo[2][2] = ox;
        break;

    }

    return 0;
}

int printar(char *jogo[3][3]){

    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("  : %c ", jogo[i][j]) ;
        }
        printf(":");
        printf("\n......................\n");
    }

    return 0;
}

int win(char *jogo[3][3], int *win1, int *win2){
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
            //printf("\nw1 %i w2 %i\n", c_win1, c_win2);
        }
        if(c_win1 == 3){
            *win1 = 1;
            printf("Jogador 1 venceu");
        }else if(c_win2 == 3){
            *win2 = 1;
            printf("Jogador 2 venceu");
        }
    }

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
        if(c_win1 == 3){
            *win1 = 1;
            printf("Jogador 1 venceu");
        }else if(c_win2 == 3){
            *win2 = 1;
            printf("Jogador 2 venceu");
        }
    }

    for(i = 0; i < 3; i++){   //diagonal
        c_win1 = 0;
        c_win2 = 0;
        for(j = 0; j < 3; j++){
            if(i == j && jogo[i][j] == 'X'){
                c_win1 = c_win1 + 1;
            }else if(i == j && jogo[i][j] == 'O'){
                c_win2 += 1;
            }
            //printf("\nw1 %i w2 %i\n", c_win1, c_win2);
        }
        if(c_win1 == 3){
            *win1 = 1;
            printf("Jogador 1 venceu");
        }else if(c_win2 == 3){
            *win2 = 1;
            printf("Jogador 2 venceu");
        }
    }

    for(i = 0; i < 3; i++){     ////outra diagonal
        c_win1 = 0;
        c_win2 = 0;
        for(j = 0; j < 3; j++){
            if(i + j == 2 && jogo[i][j] == 'X'){
                c_win1 += 1;
            }else if(i + j == 2 && jogo[i][j] == 'O'){
                c_win2 += 1;
            }
        }

        if(c_win1 == 3){
            *win1 = 1;
            printf("Jogador 1 venceu");
        }else if(c_win2 == 3){
            *win2 = 1;
            printf("Jogador 2 venceu");
        }
    }



  /*  if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X'){
        *win1 = 1;
    }else if(jogo[0][2] == 'O' && jogo[1][1] == 'O' && jogo[2][1] == 'O'){
        *win2 = 1;
    }*/

    return 0;
}

