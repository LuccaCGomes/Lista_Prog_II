#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tabuleiro[8][8] = {{1,3,0,5,4,0,2,1}, {1,0,1,0,0,1,0,0}, {0,0,0,0,1,0,6,0}, {1,0,0,1,1,0,0,1}, {0,1,0,4,0,0,1,0}, {0,0,3,1,0,0,1,1}, {1,0,6,6,0,0,1,0}, {1,0,5,0,1,1,0,6}}, contador = 0, vazio = 0;

    printf("Tabuleiro:\n");
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Determina a soma total de peões e bispos e a quantidade de posições com ausência de peças.
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(tabuleiro[i][j] == 1 || tabuleiro[i][j] == 4) {
                contador++;
            }
            if(tabuleiro[i][j] == 0) {
                vazio++;
            }
        }
    }

    printf("\nA soma total de peoes e bispos e de %d. A quantidade de posicoes com ausencia de pecas e %d\n", contador, vazio);

    // Determina a quantidade de cada tipo de peça no tabuleiro
    int peoes = 0, cavalos = 0, torres = 0, bispos = 0, reis = 0, rainhas = 0;

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(tabuleiro[i][j] == 1) {
                peoes++;
            }
            if(tabuleiro[i][j] == 2) {
                cavalos++;
            }
            if(tabuleiro[i][j] == 3) {
                torres++;
            }
            if(tabuleiro[i][j] == 4) {
                bispos++;
            }
            if(tabuleiro[i][j] == 5) {
                reis++;
            }
            if(tabuleiro[i][j] == 6) {
                rainhas++;
            }
        }
    }

    printf("Peoes = %d, Cavalos = %d, Torres = %d, Bispos = %d, Reis = %d e Rainhas = %d e Locais com ausencia de pecas = %d", peoes, cavalos, torres, bispos, reis, rainhas, vazio);
}