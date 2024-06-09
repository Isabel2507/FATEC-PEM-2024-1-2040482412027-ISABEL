#include <stdio.h>
#include "../include/board.h"

void exibirTabuleiro(char tabuleiro[LINHAS][COLUNAS][PECAS]) {
    printf("\n  -a- -b- -c- -d- -e- -f- -g- -h-\n");
    for (int i = 0; i < COLUNAS; i++) {
        printf("%d ", 8 - i);
        for (int j = 0; j < LINHAS; j++) {
            printf("%s ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void moverPeca(char tabuleiro[LINHAS][COLUNAS][PECAS], int origem_linha, int origem_coluna, int destino_linha, int destino_coluna) {
    int cor = 0;
    int tipo = 1;
    int numero = 2;

    tabuleiro[destino_linha][destino_coluna][cor] = tabuleiro[origem_linha][origem_coluna][cor];
    tabuleiro[origem_linha][origem_coluna][cor] = '.';
    tabuleiro[destino_linha][destino_coluna][tipo] = tabuleiro[origem_linha][origem_coluna][tipo];
    tabuleiro[origem_linha][origem_coluna][tipo] = '.';
    tabuleiro[destino_linha][destino_coluna][numero] = tabuleiro[origem_linha][origem_coluna][numero];
    tabuleiro[origem_linha][origem_coluna][numero] = '.';
}
