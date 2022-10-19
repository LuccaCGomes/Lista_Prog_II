#include <stdio.h>
#include <stdlib.h>

int inverte(int a);

int main(void)
{
    unsigned int num;
    
    printf("Digite um inteiro: ");
    scanf("%u", &num);

    inverte(num);

    return 0;
}

int inverte(int a) {
    int reserva, contador = 1;
    reserva = a;

    while(reserva >= 10) {
        reserva /= 10;
        contador++;
    }

    for(int i = 0; i < contador; i++) {
        int aux;
        aux = a % 10;
        a /= 10;
        printf("%d", aux);
    }
}