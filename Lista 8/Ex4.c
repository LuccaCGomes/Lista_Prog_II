#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int transpo(int mat[4][4]);
int simetri(int mat1[4][4], int mat2[4][4]);

int main(void){
    srand(time(NULL));
    int matorig[4][4];
    int mattranspo[4][4];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            matorig[i][j] = rand() % (9 + 1 - 1) + 1;
        }
    }
    printf("Matriz original: \n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", matorig[i][j]);
        }
        printf("\n");
        
    }
    transpo(matorig);

}
int transpo(int mat[4][4]){
    int mattransp[4][4];
    int resp;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            mattransp[j][i]=mat[i][j];

        }
    }
    printf("Matriz transposta: \n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", mattransp[i][j]);
        }
        printf("\n");
    }
    resp = simetri(mat, mattransp);
    if(resp == 1){
        printf("\n Matriz nao simetrica");
    }
    else {
        printf(" Matriz Simetrica ");
    }
    

}
int simetri(int mat1[4][4], int mat2[4][4]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if(mat1[i][j] != mat2[i][j]){
                return 1;
            }

        }
    }
    return 0;
}
