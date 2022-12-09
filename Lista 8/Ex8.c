#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bubbleSort(int n, int *vet);
int *quickSort(int n, int *vet);

int main(void)
{
    srand(time(NULL));

    int tam, *vetor, *vetQuick;
    printf("Qual o tamanho do vetor? ");
    scanf("%d", &tam);

    vetor = (int *) malloc(tam * sizeof(int));
    if(vetor == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }

    for(int i = 0; i < tam; i++) {
        vetor[i] = rand() % (99 + 1 - 1) + 1;
    }

    printf("Vetor desordenado = { ");
    for(int i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }
    printf("}\n");

    bubbleSort(tam, vetor);
    vetQuick = quickSort(tam, vetor);

    printf("Vetor Quick Sort = { ");
    for(int i = 0; i < tam; i++) {
        printf("%d ", vetQuick[i]);
    }
    printf("}\n");
}

int bubbleSort(int n, int *vet) {
    int k = 0;

    while(k < n) {
        for(int i = 0; i < n; i++) {
            if(vet[i] > vet[i+1]) {
                int temp = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = temp;
            }
        }
        k++;
    }

    printf("Vetor Bubble Sort = { ");
    for(int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("}\n");
}

int *quickSort(int n, int *vet) {
    int *quick;
    quick = (int *) malloc(n * sizeof(int));

    if(n > 1) {
        int x = vet[0], a = 1, b = n - 1;

        do {
            while(a < n && vet[a] <= x) a++;
            while(vet[b] > x) b--;
            if(a < b) {
                int temp = vet[a];
                vet[a] = vet[b];
                vet[b] = temp;
                a++; b--;
            }
        } while(a <= b);

        vet[0] = vet[b];
        vet[b] = x;

        quickSort(b, vet);
        quickSort(n - a, &vet[a]);
    }

    for(int i = 0; i < n; i++) {
        quick[i] = vet[i];
    }

    return quick;
}
