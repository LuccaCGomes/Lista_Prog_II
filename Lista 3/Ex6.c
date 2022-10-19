#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maiores(int n, int *vet, int x);

int main(void)
{
    srand(time(NULL));

    int n, x;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetor;
    vetor = (int *) malloc(n * sizeof(int));
    if(vetor == NULL) {printf("Nao foi possivel alocar a memoria desejada"); exit(1);}

    for(int i = 0; i < n; i++) {
        int numAleatorio = numAleatorio = rand() % (100 + 1 - 1) + 1;
        vetor[i] = numAleatorio;
    }

    printf("Digite um numero X para descobrir quantos numeros sao maiores do que ele: ");
    scanf("%d", &x);

    printf("{ ");
    for(int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("}\n");

    maiores(n, vetor, x);

    free(vetor);
}

int maiores(int n, int *vet, int x) {
    int cont = 0;
    
    int *vetor2;
    vetor2 = (int *) malloc(n * sizeof(int));
    if(vetor2 == NULL) {printf("Nao foi possivel alocar a memoria desejada"); exit(1);}

    for(int i = 0; i < n; i++) {
        if(vet[i] > x) {
            cont++;
            vetor2[cont - 1] = vet[i];
        }
    }

    if(cont == 0){
        printf("Não existem numeros maiores que %d no vetor!\n", x);
    } else {
        printf("Existem %d numeros maiores que %d no vetor!", cont, x);
        printf(" Eles são:\n");

        printf("{ ");
        for(int i = 0; i < cont; i++){
            printf("%d ", vetor2[i]);
        }
        printf("}\n");
    }

    free(vetor2);
}