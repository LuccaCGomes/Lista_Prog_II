#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int resp, cont = 0, numAleatorio = rand() % (100 + 1 - 0) + 0;

    while(resp != numAleatorio) {
        printf("Tente acertar o numero aleatorio de 0 a 100: ");
        scanf("%d", &resp);

        if(resp > numAleatorio) {
            printf("O numero inserido e maior do que o correto!\n");
        }
        if(resp < numAleatorio) {
            printf("O numero inserido e menor do que o correto!\n");
        }

        cont++;
    }

    printf("Parabens, voce acertou com %d tentativas!", cont);
}
