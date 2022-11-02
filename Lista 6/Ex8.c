#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int *repeticao(int *vet, int tam, int *n);

int main(void) 
{
    srand(time(NULL));
    int n;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);

    int *vetor;
    int *aux;
    int num=0;
    int *resultado;
    vetor = (int *) malloc (n * sizeof(int));
    if(vetor == NULL) { printf("Nao foi possivel alocar a memoria desejada"); exit(1); }
    aux = (int *) malloc (n * sizeof(int));
    if(aux == NULL) { printf("Nao foi possivel alocar a memoria desejada"); exit(1); }
    

    printf("Vetor original: \n{ ");
    for(int i = 0; i < n; i++) {
        vetor[i] = rand() % (9 + 1 - 0) + 0;
        printf ("%d ",vetor[i]);
    }
    for (int i=0;i<n;i++){
        aux[i]=vetor[i];
    }
    printf("}\n");

    for (int i = 0; i < n; i++){
        int soma = 0;

        for (int k = 0; k < n; k++){
            if (aux[i] == aux[k] && aux[k] >= 0){
                soma++;
                if (soma >= 2){
                    num+=1;
                    for (int l = i + 1; l < n; l++){
                        if (aux[i] == aux[l])
                        aux[l] =- 10;
                    }

                }

            }
        }
    }

    int *pont;
    pont=&num;
    resultado= repeticao(vetor,n, pont);
    printf("Vetor com numeros repetidos:  \n{ ");
    for (int i=0;i<num;i++){
        printf("%d ", resultado[i]);
    }
    printf("}");
    
}

int *repeticao(int *vet, int tam, int *n) {
   
    

    int m=0;
    int *vet2;
    vet2 = (int *) malloc (*n * sizeof(int));
    if(vet2 == NULL) { printf("Nao foi possivel alocar a memoria desejada"); exit(1); }


    int aux = 0;

    for (int i = 0; i < tam; i++){
        int soma = 0;

        for (int k = 0; k < tam; k++){
            if (vet[i] == vet[k] && vet[k] >= 0){
                soma++;
                if (soma >= 2){

                    
                    vet2[m]=vet[i];
                    // printf("|%d ", vet2[m]);
                    m++;
                    for (int l = i + 1; l < tam; l++){
                        if (vet[i] == vet[l])
                        vet[l] =- 10;
                    }

                }

            }
        }
    }
    return vet2;

}