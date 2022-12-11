#include <stdio.h>

int mdc_recursiva(int a, int b);

int main() 
{
    int a = 32, b = 18;
    printf("\nResultado=%d", mdc_recursiva(a, b));
}

int mdc_recursiva(int a, int b) {
    printf("\n%d e %d", a, b);
    if (a % b == 0) return b;
        return mdc_recursiva (b, a % b);
}

/* A função mdc_recursiva irá printar os valores que foram inicializados na main (*32 e 18) e depois verificar se 32 é divisível por 8. Se for retornará o valor 18.
 Caso contrário, retornara 18 e o resto da divisão de 32 per 18.
 Irá printar esses números e verificar se 18 é divisível pelo resto da divisão de 32 por 18 (14)). Se for retornará 14 se não retornará 14 e o resto da divisão de 18 per 14(4).
 Repetirá esse processo até achar a ser divisível por b. Ou seja achar o mdc entre os números originais (32 e 18)

Saída:
        32 e 18
        18 e 14
        14 e 4
        4 e 2
        Resultado=2
*/