#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(void) 
{
    srand(time(NULL));
    int n;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);

    int *vetor;
    vetor = (int) malloc (n * sizeof(int));
    if(vetor == NULL) { printf("Nao foi possivel alocar a memoria desejada"); exit(1); }

    for(int i = 0; i < n; i++) {
        vetor[i] = rand() % (9 + 1 - 0) + 0;
    }

    printf("{ ");
    for(int i = 0; i < n; i++){

        printf("%d ", vetor[i]);

    }
    printf("}\n");

    int aux = 0;
    printf("Numeros repetidos = { ");
    for (int i = 0; i < n; i++){
        int soma = 0;

        for (int k = 0; k < n; k++){
            if (vetor[i] == vetor[k] && vetor[k] >= 0){
                soma++;
                if (soma >= 2){
                    printf("%d ", vetor[i]);
                    for (int l = i + 1; l < n; l++){
                        if (vetor[i] == vetor[l])
                        vetor[l] =- 10;
                    }

                }

            }
        }
    }
    printf("}");
    free(vetor);
}