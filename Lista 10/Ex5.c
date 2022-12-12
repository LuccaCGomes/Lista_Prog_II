#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    fp = fopen("Ex5texto.txt", "r");
    if(fp == NULL) { "ERRO!\n"; exit(1); }

    float *vetor, media = 0;
    vetor = (float *) malloc(20 * sizeof(float));

    for(int i = 0; i < 20; i++) {
        fscanf(fp, "%f", &vetor[i]);
        media += vetor[i];
        fgetc(fp);
    }

    for(int i = 0; i < 20; i++) {
        printf("%.2f ", vetor[i]);
    }

    media /= 20;

    printf("\nMedia dos numeros lidos = %.3f!\n", media);
}