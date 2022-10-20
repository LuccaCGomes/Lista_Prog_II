#include <stdio.h>
#include <stdlib.h>

int testa_PA(int n, int* v);

int main(void)
{
    int n=0;

    printf("Digite o numero de termos (>=3): ");
    scanf("%d",&n);

    if (n<=2)
    {
        do
        {
            printf("Digite um numero valido(>=3)");
            scanf("%d",&n);
        } while (n<=2);
    }
    
    
    
    int *v;
    v = (int *) malloc(n * sizeof(int));
    if(v == NULL) {printf("Nao foi possivel alocar a memoria desejada"); exit(1);}

    for (int i = 0; i < n; i++) {
        printf("Numero da posicao %d no vetor: ", i+1);
        scanf("%d",&v[i]);
    }
    testa_PA(n,v);

    free(v);
}

int testa_PA(int n, int* v) {
    int k = v[1] - v[0];
    int j = 0;

    for (int i = 1; i < n; i++){
        if((v[i] - v[i-1]) != k){
            j += 1;
        }
        
    }

    if(j != 0){
        printf("0");
    } else if(j == 0){
        printf("PA de razao: %d",k);
    }
}
