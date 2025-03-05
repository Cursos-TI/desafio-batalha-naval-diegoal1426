#include <stdio.h>
//tamanho do tabuleiro
#define linhas  10
#define colunas 10


int main() {

    //inicializando o tabuleiro
    int tabuleiro[linhas][colunas];
    int navio[3] = {3,3,3};
    //preenchendo o tabuleiro com 0 para representar a agua
    for(int i = 0; i < 10; i++){
        for(int j = 0; j<10;j++){
            tabuleiro[i][j] = 0;
        }
    }

    //montando os navios:
    //variaveis de apoio para o indice de posição do navio
    unsigned int horizontalX = 0;
    unsigned int horizontalY = 7;

    unsigned int verticalX = 1;
    unsigned int verticalY = 1;

    unsigned int diagonal1X = 2;
    unsigned int diagonal1Y = 4;

    unsigned int diagonal2X = 4;
    unsigned int diagonal2Y = 4;
    //garante que os navios não colidam no inicio do index
    if(horizontalX == verticalX || diagonal1X == diagonal2X){
        printf("Navios colidindo\n");
    }else if(horizontalX > 7 || horizontalY > 7 || verticalX > 7 || verticalY > 7 || diagonal1X > 7 || diagonal1Y > 7 || diagonal2X > 7 || diagonal2Y > 7 ){
        printf("Navios saindo do tabuleiro\n");
    }else{
        for(int i = 0; i<3;i++){
            //posiciona o primeiro horizontal
            tabuleiro[verticalX+i][verticalY] = navio[i];
            //posiciona o segundo navio vertical
            tabuleiro[horizontalX][horizontalY+i] = navio[i];
            //posiciona o terceiro navio diagonal
            tabuleiro[diagonal1X+i][diagonal1Y+i] = navio[i];
            //posiciona o quarto navio diagonal
            tabuleiro[diagonal2X+i][diagonal2Y+i] = navio[i];
        }
    }

    //exibindo o tabuleiro
    printf("\n###### TABULEIRO ######\n\n");
    printf("    A  B  C  D  E  F  G  H  I  J  \n");
    printf("--+------------------------------\n");
    for (int i = 0; i < 10; i++){
        printf("%d |",i);
        for(int j = 0; j < 10; j++){
            printf(" %i ",tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 1;
}
