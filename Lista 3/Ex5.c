#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float max_vet(int n, float *vet);
float randomFloat(float min, float max);

int main(void)
{
    srand(time(NULL));

    int n = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float *vetor;
    vetor = (float *) malloc(n * sizeof(float));
    if(vetor == NULL) {printf("Nao foi possivel alocar a memoria desejada"); exit(1);}

    for(int i = 0; i < n; i++) {
        float numAleatorio = randomFloat(1, 100);
        vetor[i] = numAleatorio;
    }

    printf("Vetor: { ");
    for(int i = 0; i < n; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("}\n");

    max_vet(n, vetor);

    free(vetor);
}

float max_vet(int n, float *vet) {
    float aux = vet[0];
    for(int i = 1; i < n; i++) {
        if(vet[i] > aux) {
            aux = vet[i];
        }
    }
    
    printf("O maior numero do vetor informado e %.2f\n", aux);
}

float randomFloat(float min, float max) {
    float random = ((float) rand()) / (float) RAND_MAX;
    float range = max - min;  
    return (random*range) + min;
}