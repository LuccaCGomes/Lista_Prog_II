#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int repeticao(int *vet, int tam, int *n);

int main(void) 
{
    srand(time(NULL));
    int n, cont = 0, *resposta;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);

    int *vetor;
    vetor = (int *) malloc (n * sizeof(int));
    if(vetor == NULL) { printf("Nao foi possivel alocar a memoria desejada"); exit(1); }

    for(int i = 0; i < n; i++) {
        vetor[i] = rand() % (9 + 1 - 0) + 0;
    }

    resposta = repeticao(vetor, n, &cont);

    printf("Numeros repetidos = { ");
    for(int i = 0; i < n; i++) {
        printf("%d ", resposta[i]);
    }
    printf("}");

}

int repeticao(int *vet, int tam, int *n) {
    printf("{");
    for(int i = 0; i < tam; i++){

        printf("%d ", vet[i]);

    }
    printf("}\n");

    int aux = 0, *retorno;

    retorno = (int *) malloc(tam * sizeof(int));
    if(retorno == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }

    for (int i = 0; i < tam; i++){
        int soma = 0;

        for (int k = 0; k < tam; k++){
            if (vet[i] == vet[k] && vet[k] >= 0){
                soma++;
                if (soma >= 2){
                    retorno[i] = vet[i];
                    (*n)++;
                    for (int l = i + 1; l < tam; l++){
                        if (vet[i] == vet[l])
                        vet[l] =- 10;
                    }

                }

            }
        }
    }

    return retorno;
}