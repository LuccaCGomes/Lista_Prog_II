#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *inicializaVetor(int n);
int imprimeVetor(int *vet, int n);

int main(void) 
{
    int tam = 0, *vetor;

    printf("Qual o tamanho do vetor desejado? ");
    scanf("%d", &tam);

    vetor = inicializaVetor(tam);
    
    imprimeVetor(vetor, tam);
}

int *inicializaVetor(int n) {
    int k = 0, *vet;
    vet = (int *) malloc(n * sizeof(int));
    if(vet == NULL) { printf("Não foi possivel alocar a memoria desejada!\n"); exit(1); }

    for(int i = 5; k < n; i += 5) {
        if(i % 5 == 0) {
            vet[k] = i;
            k++;
        }
    }

    return vet;
}

int imprimeVetor(int *vet, int n) {
    printf("Vetor = { ");
    for(int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf(" }\n");
}