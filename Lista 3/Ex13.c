#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 1, b = 5, c = 3, d = 4;
    float e = 1.2, f = 2.3, g = 3.4, h = 4.5;
    char vetor[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int x = 5;
    int y = 6;
    int *p = &y;

    for(int i = 0; i < 7; i++) {
        printf("%d\n", *p);
        *p++;
    }

    // O resultado foi diferente de A, pois quando um ponteiro é incrementado, ele pula para o próximo endereço de memória na sequência.
}