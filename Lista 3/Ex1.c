#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

void calc_circulo(float r, float *circunferencia, float *area);

int main(void)
{   
    float raio, circunferencia, area;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    calc_circulo(raio, &circunferencia, &area);

    printf("A área é %.2f e a circunferência é %.2f\n", area, circunferencia);
}

void calc_circulo(float r, float *circunferencia, float *area) {
    *circunferencia = 2 * PI * r;
    *area = PI * r * r;
}