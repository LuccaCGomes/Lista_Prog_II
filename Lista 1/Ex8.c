#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int total_de_notas(int valor);

int main(void)
{
    int qnt;

    do {
        printf("Digite a quantia de dinheiro como um inteiro nao negativo: ");
        scanf("%d", &qnt);
    } while(qnt < 0);

    int min = total_de_notas(qnt);

    printf("A quantidade minima de cedulas e: %d", min);

    return 0;
}

int total_de_notas(int valor) {
    int qntfunc;

    while(valor >= 100) {
        valor -= 100;
        qntfunc++;
    }

    while(valor >= 50) {
        valor -= 50;
        qntfunc++;
    }

    while(valor >= 20) {
        valor -= 20;
        qntfunc++;
    }

    while(valor >= 10) {
        valor -= 10;
        qntfunc++;
    }

    while(valor >= 5) {
        valor -= 5;
        qntfunc++;
    }

    while(valor >= 2) {
        valor -= 2;
        qntfunc++;
    }

    while(valor >= 1) {
        valor -= 1;
        qntfunc++;
    }

    return qntfunc;
}