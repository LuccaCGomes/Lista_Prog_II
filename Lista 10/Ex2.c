#include <stdio.h>
#include <stdlib.h>

float busca(char *arquivo, char *matricula);

int main(void) {
    char *arquivo = "Ex2texto.txt";
    char matricula[10];
    
    printf("Digite a matricula desejada: ");
    scanf("%s", &matricula);

    float naoEncontrado = busca(arquivo, matricula);
    if(naoEncontrado == -1.0) {
        printf("-1.0");
    }
}

float busca(char *arquivo, char *matricula) {
    FILE *fp;
    fp = fopen(arquivo, "r");
    if(fp == NULL) { printf("ERRO!\n"); exit(1); }

    char matriculas[4][10];
    float notas[4];

    for(int i = 0; i < 4; i++) {
        fscanf(fp, "%10[^' ']", &matriculas[i]);
        fscanf(fp, "%f", &notas[i]);
        fgetc(fp);
    }
    
    float resp = 0;

    for(int i = 0; i < 4; i++) {
        if(strcmp(matriculas[i], matricula) == 0) {
            printf("CR relacionado a matricula informada: %.2f.\n", notas[i]);
            resp++;
        }
    }

    if(resp == 0) {
        return -1.0;
    }
}