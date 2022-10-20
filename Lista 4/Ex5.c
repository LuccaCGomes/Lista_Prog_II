#include <stdio.h>
#include <stdlib.h>

void calcula_corrida(float dist, float *b1, float *b2);

int main(void)
{
    float dist, b1, b2;

    printf("Qual a distancia da corrida em km: ");
    scanf("%f", &dist);

    calcula_corrida(dist, &b1, &b2);
    
    printf("Na bandeira 1 o preco sera: %.2f reais! Na bandeira 2 o preco sera: %.2f reais", b1, b2);
}

void calcula_corrida(float dist, float *b1, float *b2) {
    *b1 = 4.95 + 2.5 * dist;
    *b2 = 4.95 + 3 * dist;
}