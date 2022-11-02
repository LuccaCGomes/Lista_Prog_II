#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

float *acima_da_media(int n, float *vet, int *tam);

int main(void)
{
    int num, tam = 0;
    float *vetor, *vetorResultante;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &num);

    vetor = (float *) malloc(num * sizeof(float));
    if(vetor == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }

    vetorResultante = acima_da_media(num, vetor, &tam);

    printf("\nVetor Resultante: = { ");
    for(int i = 0; i < tam; i++) {
        printf("%.1f ", vetorResultante[i]);
    }
    printf("}\n");
}

float *acima_da_media(int n, float *vet, int *tam) {
    float soma = 0;

    for(int i = 0; i < n; i++) {
        printf("Digite o %d numero real pertencente ao vetor: ", i+1);
        scanf("%f", &vet[i]);

        soma += vet[i];
    } 

    printf("Vetor Inicial: = { ");
    for(int i = 0; i < n; i++) {
        printf("%.1f ", vet[i]);
    }
    printf("}\n");

    float media = soma / n;

    for(int i = 0; i < n; i++) {
        if(vet[i] > media) {
            (*tam)++;
        }
    }

    float *vetorFinal;
    vetorFinal = (float *) malloc((*tam) * sizeof(float));
    if(vetorFinal == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }

    int c = 0;
    for(int i = 0; i < n; i++) {
        if(vet[i] > media) {
            vetorFinal[c] = vet[i];
            c++;
        }
    }

    return vetorFinal;
}