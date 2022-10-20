#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numbers[5];
    int *p;
    int n;
    p = numbers;
    *p = 10;
    p++;
    *p = 20;
    p = &numbers[2];
    *p = 30;
    p = numbers + 3;
    *p = 40;
    p = numbers;
    *(p + 4) = 50;
    for (n = 0; n < 5; n++)
    printf(" %d", numbers[n]);

    // Foi impresso, na ordem, 10, 20, 30, 40 e 50, pois a cada nova vez em que o ponteiro *p era chamado, antes disso, era modificado o local para onde ele apontava, sempre indo uma posição à frente do vetor.
}