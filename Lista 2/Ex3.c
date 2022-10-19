#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int qnt, aux1 = 1, aux2 = 1, aux3;

    do {
        printf("Quantos dos primeiros termos da série de Fibonacci deseja imprimir? ");
        scanf("%d", &qnt);
    } while(qnt < 0);

    printf("\n%d %d ", aux1, aux2);

    for(int i = 2; i < qnt; ++i) {
        aux3 = aux1 + aux2;
        printf("%d ", aux3);
        aux1 = aux2;
        aux2 = aux3;
    }
}