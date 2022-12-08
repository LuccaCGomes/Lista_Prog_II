#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somaLinhas(int mat[5][5]);

int main(void)
{
    srand(time(NULL));

    int matriz[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % (9 + 1 - 1) + 1;
        }
    }
    
    printf("Matriz: \n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    somaLinhas(matriz);
}

int somaLinhas(int mat[5][5]) {
    int matAux[5], k = 0;

    for(int i = 0; i < 5; i++) {
        int soma = 0;

        for(int j = 0; j < 5; j++) {
            soma += mat[i][j];
        }

        matAux[i] = soma; 
    }

    for(int i = 1; i < 5; i++) {
        if(matAux[k] == matAux[i]) {
            k++;
        }
    }

    if(k == 4) { printf("A soma de cada uma das linhas da matriz totaliza o mesmo valor para todas as linhas!"); }
    else { printf("A soma de cada uma das linhas da matriz nao totaliza o mesmo valor para todas as linhas!"); }
}
