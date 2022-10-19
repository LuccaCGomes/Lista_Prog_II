#include <stdio.h>
#include <stdlib.h>

float media(int n, float *v);

int main(void)
{
    int qnt;
    printf("Digite a quantidade de provas: ");
    scanf("%d", &qnt);

    float *vetor;
    vetor = (float *) malloc(qnt * sizeof(float));
    if(vetor == NULL) {printf("Nao foi possivel alocar a memoria desejada"); exit(1);}

    for(int i = 0; i < qnt; i++) {
        float aux = 0;
        printf("Digite a nota da sua %d° prova: ", i+1);
        scanf("%f", &aux);
        vetor[i] = aux;
    }

    media(qnt, vetor);

    free(vetor);
}

float media(int n, float *v) {
    float soma = 0;
    for(int i = 0; i < n; i++) {
        soma += v[i];
    }

    printf("A sua media e %.2f!\n", soma / n);
}