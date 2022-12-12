#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp, *fpbin;
    fp = fopen("Ex7texto.txt", "r");
    if(fp == NULL) { "ERRO!\n"; exit(1); }

    float *vetor, media = 0;
    vetor = (float *) malloc(20 * sizeof(float));
    int k = 0;

    for(int i = 0; i < 20; i++) {
        fscanf(fp, "%f", &vetor[i]);
        fgetc(fp);
    }

    while(k < 20) {
        for(int i = 0; i < 20; i++) {
            if(vetor[i] > vetor[i+1]) {
                int temp = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = temp;
            }
        }
        k++;
    }

    fpbin = fopen("numeros.bin", "r+b");
    for(int i = 0; i < 20; i++) {
        fwrite(vetor, sizeof(int), 20, fpbin);
    }
}