#include <stdio.h>
#include "../include/board.h"
#include "../include/game.h"

void jogarXequePastor(char tabuleiro[8][8][4]) {
    printf("=========================================\n");
    printf("                                         \n");
    printf("     Posição inicial do tabuleiro        \n"); 
    printf("                                         \n");
    printf("=========================================\n");
    exibirTabuleiro(tabuleiro);

    moverPeca(tabuleiro, 6, 4, 4, 4);
    printf("=========================================\n");
    printf("               Jogada#1                  \n"); 
    printf("=========================================\n");
    printf("                                         \n");
    printf("      --------Brancas jogam e4--------   \n");
    exibirTabuleiro(tabuleiro);

    moverPeca(tabuleiro, 1, 4, 3, 4);
    printf("      --------Pretas jogam e5--------    \n");
    exibirTabuleiro(tabuleiro);

    moverPeca(tabuleiro, 7, 5, 4, 2);
    printf("=========================================\n");
    printf("               Jogada#2                  \n"); 
    printf("=========================================\n");
    printf("                                         \n");
    printf("      --------Brancas jogam Bc4--------  \n");
    exibirTabuleiro(tabuleiro);

    moverPeca(tabuleiro, 0, 1, 2, 2);
    printf("      --------Pretas jogam Cc6--------   \n");
    exibirTabuleiro(tabuleiro);

    moverPeca(tabuleiro, 7, 3, 3, 7);
    printf("=========================================\n");
    printf("               Jogada#3                  \n"); 
    printf("=========================================\n");
    printf("                                         \n");
    printf("     --------Brancas jogam Dh5--------   \n");
    exibirTabuleiro(tabuleiro);

    moverPeca(tabuleiro, 0, 6, 2, 5);
    printf("      --------Pretas jogam Cf6--------   \n");
    exibirTabuleiro(tabuleiro);

    moverPeca(tabuleiro, 3, 7, 1, 5);
    printf("=========================================\n");
    printf("          Jogada#4 (Xeque Mate)          \n"); 
    printf("=========================================\n");
    printf("                                         \n");
    printf("--------Brancas capturam peão PP6 em f7 e Xeque Mate (Dxf7#)--------\n");
    exibirTabuleiro(tabuleiro);
}
