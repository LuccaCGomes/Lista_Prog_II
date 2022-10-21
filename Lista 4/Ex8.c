#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    int n;
    do
    {
        printf("Digite o tamanho do vetor (deve ser par): ");
        scanf("%d", &n);
    } while(n % 2 != 0);
    
    int *vetor;
    vetor = (int *) malloc(n * sizeof(int));
    if(vetor == NULL) {printf("Nao foi possivel alocar a memoria desejada!\n"); exit(1);}

    for(int i = 0; i < n; i++) {
        int numAleatorio = rand() % (100 + 1 - 0) + 0;
        vetor[i] = numAleatorio;
    }

    printf("Vetor = { ");
    for(int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("}\n");

    int *p1, *p2;

    p1 = vetor[0];
    p2 = vetor[n - 1];

    for(int i = 0; i < n / 2; i++) {
        p1 = vetor[0+i];
        p2 = vetor[n - 1 - i]; 

        printf("P1 = %d    P2 = %d\n", p1, p2);
    }
}