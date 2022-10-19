#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int x, z, aux = 0, cont = 0;
    printf("Insira um valor inteiro para X: ");
    scanf("%d", &x);

    do {
        printf("Insira um valor inteiro para Z (deve ser maior que X): ");
        scanf("%d", &z); 
    } while(z < x);

    for(int i = x; aux <= z; i++) {
        aux += i;
        cont++;
    }

    printf("Serao necessarios %d numeros inteiros somados em sequencia para que X ultrapasse Z\n", cont);

    return 0;
}
