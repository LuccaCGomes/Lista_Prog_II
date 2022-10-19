#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int x, y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    int resultado = pow(x, y);

    printf("O resultado de %d elevado a %d e %d", x, y, resultado);
}