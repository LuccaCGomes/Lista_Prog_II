#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int *aprovados(int n, int *mat, float *notas, int *tam);
float randomFloat(float min, float max);

int main(void) 
{
    srand(time(NULL));

    int qntAlunos, *alunos, tam, *numAprovados;
    float *notas;

    printf("Quantos alunos existem na turma? ");
    scanf("%d", &qntAlunos);

    alunos = (int *) malloc(qntAlunos * sizeof(int));
    if(alunos == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }
    for(int i = 0; i < qntAlunos; i++) {
        alunos[i] = rand() % (999 + 1 - 100) + 100;
    }

    notas = (float *) malloc(qntAlunos * sizeof(float));
    if(notas == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }
    for(int i = 0; i < qntAlunos; i++) {
        notas[i] = randomFloat(1, 10);

    }

    numAprovados = aprovados(qntAlunos, alunos, notas, &tam);

    printf("Alunos: { ");
    for(int i = 0; i < qntAlunos; i++) {
        printf("%d ", alunos[i]);
    }
    printf("}\n");

    printf("Notas: { ");
    for(int i = 0; i < qntAlunos; i++) {
        printf("%.1f ", notas[i]);
    }
    printf("}\n");

    printf("Quantidade de alunos aprovados = %d\n", tam);
    printf("Alunos aprovados: { ");
    for(int i = 0; i < tam; i++) {
        printf("%d ", numAprovados[i]);
    }
    printf("}\n");

    free(alunos);
    free(notas);
}

int *aprovados(int n, int *mat, float *notas, int *tam) {
    int k = 0, j = 0, *novoVetor;

    for(int i = 0; i < n; i++) {
        if(notas[i] > 5.0) {
            j++;
        }
    }

    novoVetor = (int *) malloc(j * sizeof(int));
    if(novoVetor == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }

    for(int i = 0; i < n; i++) {
        if(notas[i] > 5.0) {
            novoVetor[k] = mat[i];
            k++;
        }
    }

    *tam = j;
    
    return novoVetor;
}

float randomFloat(float min, float max) {
    float random = ((float) rand()) / (float) RAND_MAX;
    float range = max - min;  
    return (random*range) + min;
}