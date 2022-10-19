#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int divs(int n, int *max, int *min);

int main(void)
{
    int num, max, min;

    printf("Digite um número: ");
    scanf("%d", &num);

    divs(num, &max, &min);

    printf("O maior divisor de %d que não seja ele mesmo é %d\n", num, max);
    printf("O menor divisor de %d que não seja ele mesmo é %d\n", num, min);
}

int divs(int n, int *max, int *min) {
    int aux = 0, cont, cont2;

    if(n == 0 || n == 1) {
        printf("1 (não é primo)\n");
    }

    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            aux = 1;
            break;
        }
    }

    if(aux == 0) {
        printf("0 (é primo)\n");
    }
    else {
        printf("1 (não é primo)\n");
    }


    for(int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            cont = i;
        }
    }

    for(int i = 2; i <= n; i++) {
        if (n == 2){
            cont2 = 1;
        } else if (n % i == 0) {
            cont2 = i;
            break;
        }
    }

    *max = cont;
    *min = cont2;
}