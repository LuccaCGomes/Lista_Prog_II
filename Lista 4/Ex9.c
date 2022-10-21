#include <stdio.h>
#include <stdlib.h>

int listagem(int *vetor);
int pesquisa(int *vetor);
int troca (int *vetor);

int main(void)
{
    int vetor[7];
    for (int i = 0; i < 7; i++) {
        printf("Numero da posicao %d no vetor: \n",i);
        scanf("%d", &vetor[i]);
    }

    printf("\n");

    listagem(vetor);
    pesquisa(vetor);
    troca(vetor);
}

int listagem(int *vetor) {
    for (int i = 0; i < 7; i++) {
        printf("posicao %d: %d ", i, vetor[i]);
    }
}

int pesquisa(int *vetor) {
    int numero;

    printf("qual numero deseja procurar?: \n");
    scanf("%d", &numero);

    int aux=7;
    for (int i = 0; i < 7; i++) {
        if (numero == vetor[i]) {
            printf("numero na posicao %d do vetor \n",i);
        }
        else if(numero != vetor[i]) {
            aux -= 1;
            if (aux == 0){
            printf("-1 \n");
            }
        }
    }
        
}
int troca (int *vetor){
    int aux[7];
    for (int i = 0; i < 7; i++) {
        if (i == 0){
            aux[i] = vetor[i];
        }
        else {
            aux[i] = vetor[i] + aux[i-1];
        }

    }

    printf("vetor original: \n");
    for(int j = 0; j < 7; j++) {
        printf("%d ", vetor[j]);
    }

    printf("\n");
    printf("vetor de valores trocados: \n");

    for(int h = 0; h < 7; h++){
        printf("%d ", aux[h]);
    }
}

