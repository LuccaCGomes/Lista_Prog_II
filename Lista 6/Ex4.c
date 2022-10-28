// O exercício ficou muito grande, então irei comentá-lo para um melhor entendimento do mesmo!
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam);
float randomFloat(float min, float max);

int main(void)
{
    srand(time(NULL));

    int qnt, *inscricoes, peso1, peso2, tam, *participantesPremiados;
    float *nota1, *nota2;

// Pega o número de participantes e inicia os vetores com números aleatórios.
    printf("Quantas pessoas participaram do concurso? ");
    scanf("%d", &qnt);

    inscricoes = (int *) malloc(qnt * sizeof(int));
    if(inscricoes == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }
    for(int i = 0; i < qnt; i++) {
        inscricoes[i] = rand() % (999 + 1 - 100) + 100;
    }

    nota1 = (float *) malloc(qnt * sizeof(float));
    if(nota1 == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }
    for(int i = 0; i < qnt; i++) {
        nota1[i] = randomFloat(1, 10);
    }
    do {
        printf("Qual o peso da primeira prova? ");
        scanf("%d", &peso1);
    } while(peso1 < 0);

    nota2 = (float *) malloc(qnt * sizeof(float));
    if(nota2 == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }
    for(int i = 0; i < qnt; i++) {
        nota2[i] = randomFloat(1, 10);
    }
    do {
        printf("Qual o peso da segunda prova? ");
        scanf("%d", &peso2);
    } while(peso2 < 0);

// Imprime os vetores para melhor visualização
    printf("Inscricoes: { ");
    for(int i = 0; i < qnt; i++) {
        printf("%d ", inscricoes[i]);
    }
    printf("}\n");

    printf("Nota 1: { ");
    for(int i = 0; i < qnt; i++) {
        printf("%.2f ", nota1[i]);
    }
    printf("}\n");

    printf("Nota 2: { ");
    for(int i = 0; i < qnt; i++) {
        printf("%.2f ", nota2[i]);
    }
    printf("}\n");

// Chama a função, armazenando o resultado no vetor participantesPremiados
    participantesPremiados = premiados(qnt, inscricoes, nota1, peso1, nota2, peso2, &tam);

    free(inscricoes);
    free(nota1);
    free(nota2);

// Imprime a inscrição dos participantes premiados.
    printf("Participantes Premiados: { ");
    for(int i = 0; i < tam; i++) {
        printf("%d ", participantesPremiados[i]);
    } 
    printf("}\n");

    free(participantesPremiados);
}

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam) {
    float *mediaIndividual;

// Calcula a média individual, armazena em um vetor alocado dinâmicamente e imprime para melhor visualização.
    mediaIndividual = (float *) malloc(n * sizeof(float));
    if(mediaIndividual == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }

    for(int i = 0; i < n; i++) {
        float media = 0;
        media += t1[i] * p1;
        media += t2[i] * p2;
        media /= p1 + p2;

        mediaIndividual[i] = media;
    }

    printf("Medias Individuais: { ");
    for(int i = 0; i < n; i++) {
        printf("%.2f ", mediaIndividual[i]);
    } 
    printf("}\n");

// Calcula as maiores médias e armazena as inscrições correspondentes em um vetor alocado dinâmicamente.
    int j = 0, k = 0, *maioresMedias;
    
    for(int i = 0; i < n; i++) {
        if(mediaIndividual[i] > 6.0) {
            j++;
        }
    }

    maioresMedias = (int *) malloc(j * sizeof(int));
    if(maioresMedias == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }

    for(int i = 0; i < n; i++) {
        if(mediaIndividual[i] > 6.0) {
            maioresMedias[k] = inscr[i];
            k++;
        }
    }

    *tam = j;

    return maioresMedias;
}

float randomFloat(float min, float max) {
    float random = ((float) rand()) / (float) RAND_MAX;
    float range = max - min;  
    return (random*range) + min;
}