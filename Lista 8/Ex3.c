#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int transporMatriz(int mat[5][5]);
int verificaSimetria(int mat[5][5]);

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

    transporMatriz(matriz);
}

int transporMatriz(int mat[5][5]) {
    int matTrans[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matTrans[i][j] = mat[j][i];
        }
    }

    printf("Matriz Transposta: \n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matTrans[i][j]);
        }
        printf("\n");
    }

    verificaSimetria(matTrans);
}

int verificaSimetria(int mat[5][5]) {
    int contador = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(mat[i][j] == mat[j][i]) {
                contador++;
            }
        }
    }    

    if(contador == 25) { printf("A matriz e simetrica!"); }
    else { printf("A matriz nao e simetrica!"); }
}