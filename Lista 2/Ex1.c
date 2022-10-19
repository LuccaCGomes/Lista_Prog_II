#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int num, aux = 0;

    printf("Digite um numero para saber se e primo: ");
    scanf("%d", &num);

    if(num == 0 || num == 1) {
        aux = 1;
    }

    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            aux = 1;
            break;
        }
    }

    if(aux == 0) {
        printf("O numero %d e primo!\n", num);
    }
    else {
        printf("O numero %d nao e primo!\n", num);
    }

    return 0;
}