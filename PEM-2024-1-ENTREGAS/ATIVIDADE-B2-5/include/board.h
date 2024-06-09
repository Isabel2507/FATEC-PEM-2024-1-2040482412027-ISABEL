#ifndef BOARD_H
#define BOARD_H

#define COLUNAS 8
#define LINHAS 8
#define PECAS 4

void exibirTabuleiro(char tabuleiro[LINHAS][COLUNAS][PECAS]);
void moverPeca(char tabuleiro[LINHAS][COLUNAS][PECAS], int origem_linha, int origem_coluna, int destino_linha, int destino_coluna);

#endif
