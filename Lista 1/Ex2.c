#include <stdio.h>
#include <stdlib.h>

int comparaNumeros(int a, int b, int c);

int main(void)
{
    int va1, va2, va3;

    printf("Digite 3 valores inteiros: ");
    scanf("%d\n", &va1);
    scanf("%d\n", &va2);
    scanf("%d", &va3);

    comparaNumeros(va1, va2, va3);

    return 0;
}

int comparaNumeros(int a, int b, int c) {
    if(a > b && a > c) {
        printf("%d e o maior valor\n", a);
    }
    else if(b > a && b > c) {
        printf("%d e o maior valor\n", b);
    }
    else {
        printf("%d e o maior valor\n", c);
    }

    if(a < b && a < c) {
        printf("%d e o menor valor\n", a);
    }
    else if(b < a && b < c) {
        printf("%d e o menor valor\n", b);
    }
    else {
        printf("%d e o menor valor\n", c);
    }

    if(a % 2 == 0) {
        printf("%d e par\n", a);
    }
    if(b % 2 == 0) {
        printf("%d e par\n", b);
    }
    if(c % 2 == 0) {
        printf("%d e par\n", c);
    }

    float media = (float) (a + b + c) / 3;
    printf("A media e %.3f", media);

    return 0;
}