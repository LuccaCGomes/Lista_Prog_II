#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somaMatriz(int mat1[5][5], int mat2[5][5]);
int somaDiagMatriz(int mat1[5][5], int mat2[5][5]);
int multiplicaMatriz(int mat1[5][5], int mat2[5][5]);

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

    somaMatriz(matriz1, matriz2);
    somaDiagMatriz(matriz1, matriz2);
    multiplicaMatriz(matriz1, matriz2);
}

int somaMatriz(int mat1[5][5], int mat2[5][5]) {
    int matResult[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matResult[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("\nSoma das matrizes: \n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matResult[i][j]);
        }
        printf("\n");
    }
}

int somaDiagMatriz(int mat1[5][5], int mat2[5][5]) {
    int soma1 = 0, soma2 = 0;

    for(int i = 0; i < 5; i++) {
        soma1 += mat1[i][i];
    }

    for(int i = 0; i < 5; i++) {
        soma2 += mat2[i][i];
    }

    printf("\nSoma das diagonal da matriz 1 = %d\n", soma1);
    printf("\nSoma das diagonal da matriz 2 = %d\n", soma2);
}

int multiplicaMatriz(int mat1[5][5], int mat2[5][5]) {
    int matResultMult[5][5];

    for (int i = 0; i < 5; i++) {
        for (int k = 0; k < 5; k++) {
            matResultMult[i][k] = 0;
            for (int j = 0; j < 5; j++) {
                matResultMult[i][k] += mat1[i][j] * mat2[j][k];
            }
        }
    }

    printf("\nMultiplicacao das Matrizes: \n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matResultMult[i][j]);
        }
        printf("\n");
    }
}