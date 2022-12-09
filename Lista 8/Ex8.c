#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *bubbleSort(int n, int *vet);

int main(void)
{
    srand(time(NULL));

    int tam, *vetor, *vetorOrdenado;
    printf("Qual o tamanho do vetor? ");
    scanf("%d", &tam);

    vetor = (int *) malloc(tam * sizeof(int));
    if(vetor == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }

    for(int i = 0; i < tam; i++) {
        vetor[i] = rand() % (100 + 1 - 1) + 1;
    }

    printf("Vetor desordenado = { ");
    for(int i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }
    printf("}\n");

    vetorOrdenado = bubbleSort(tam, vetor);

    printf("Vetor Bubble Sort = { ");
    for(int i = 0; i < tam; i++) {
        printf("%d ", vetorOrdenado[i]);
    }
    printf("}\n");
}

int *bubbleSort(int n, int *vet) {
    int *bubble, k = 0;
    while(k < n) {
        for(int i = 0; i < n; i++ ) {
            if(vet[i] > vet[i+1]) {
                int temp = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = temp;
            }
        }
        k++;
    }

    bubble = (int *) malloc(n * sizeof(int));
    if(bubble = NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }
    strcpy(bubble, vet);

    return bubble;
}
