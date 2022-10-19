#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("O numero 3025 possui a seguinte caracteristica: 30 + 25 = 55 -> 55*55 = 3025, e estes sao todos os outros numeros de 4 digitos que possuem a mesma caracteristica do numero 3025:\n");

    int num = 1000;

    for(int i = num; i <= 9999; i++) {
        if(i == (((i / 100) + (i % 100)) * ((i / 100) + (i % 100))) && i != 3025) {
            printf("%d --> %d + %d = %d -> %d*%d = %d\n", i, i / 100, i % 100, (i / 100) + (i % 100), (i / 100) + (i % 100), (i / 100) + (i % 100), i);
        }
    }
}
