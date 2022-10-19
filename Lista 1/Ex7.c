#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float num;

    printf("Digite um numero fracionado para ser arredondado: ");
    scanf("%f", &num);

    num = round(num);

    printf("Esse numero arredondado e %.f", num);
}