#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somaMatrizes(int mat1[5][5], int mat2[5][5]);

int main(void) 
{
    srand(time(NULL));

    int matriz1[5][5], matriz2[5][5];

    for(int k = 0; k < 5; k++) {
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                matriz1[i][j] = rand() % (9 + 1 - 1) + 1;
            }
        }
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                matriz2[i][j] = rand() % (9 + 1 - 1) + 1;
            }
        }
    }

    printf("Matriz 1: \n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 2: \n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    somaMatrizes(matriz1, matriz2);
}

int somaMatrizes(int mat1[5][5], int mat2[5][5]) {
    int matResult[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matResult[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("\nMatriz Resultante: \n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matResult[i][j]);
        }
        printf("\n");
    }
}