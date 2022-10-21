#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) 
{   
    int qnt, aux = 0;

    do {
        printf("Quantos dos primeiros numeros naturais impares deseja somar? ");
        scanf("%d", &qnt);
    } while (qnt < 0);

    for(int i = 1; i <= qnt*2; i++) {
        if(i % 2 != 0) {
            aux += i;
        }
    }

    printf("A soma dos %d primeiros numeros impares e %d", qnt, aux);

    return 0;
}