#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    //inicializando o tabuleiro
    int tabuleiro[10][10];
    int navio1[3] = {3,3,3};
    int navio2[3] = {3,3,3};
    //preenchendo o tabuleiro com 0 para representar a agua
    for(int i = 0; i < 10; i++){
        for(int j = 0; j<10;j++){
            tabuleiro[i][j] = 0;
        }
    }

    //montando os navios:
    //variaveis de apoio para o indice do navio
    unsigned int horizontalX = 0;
    unsigned int horizontalY = 7;

    unsigned int verticalX = 1;
    unsigned int verticalY = 3;

    //garante que os navios não colidam no inicio do index
    if(horizontalX == verticalX ){
        printf("Navios colidindo\n");
    }else if(horizontalX > 7 || horizontalY > 7 || verticalX > 7 || verticalY > 7){
        printf("Navios saindo do tabuleiro\n");
    }else{
        for(int i = 0; i<3;i++){
            tabuleiro[verticalX+i][verticalY] = navio1[i];
            tabuleiro[horizontalX][horizontalY+i] = navio2[i];
        }
    }

    

    //exibindo o tabuleiro
    printf("\n###### TABULEIRO ######\n\n");
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf(" %i ",tabuleiro[i][j]);
        }
        printf("\n");
    }
    

    return 1;
}
