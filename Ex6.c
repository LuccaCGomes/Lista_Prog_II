#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main(void) {
    srand(time(NULL));
    int n;
    printf("Quantos numeros: \n");
    scanf("%d", &n);
    int *vetor;
    vetor = (int *) malloc (n * sizeof(int));
    if (vetor == NULL) { printf("Sem espaço"); exit(1); }
    for (int i=0 ; i<n ; i++){
        vetor[i] = rand() % (9 + 1 - 0) + 0;
    }
    printf("{");
    for (int i=0; i<n; i++){
        
        printf("%d ",vetor[i]);
    }
    printf("}");
    int aux = 0;
    for (int i = 0; i<n; i++){
        int soma = 0;
        
        for (int k=0; k<n; k++){
            if (vetor[i]==vetor[k]){
                soma+=1;
                if (soma >=2){
                    printf("%d ",vetor[i]);
                }
            }
        }
    }

}