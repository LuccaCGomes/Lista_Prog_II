#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char simbolo = '\0';

    do {
        printf("Digite o simbolo da operacao que deseja realizar (+, -, / ou *): ");
        scanf("%c", &simbolo);
    } while(simbolo != '+' && simbolo != '-' && simbolo != '/' && simbolo != '*');

    float num1 = 0;
    float num2 = 0;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (simbolo) {
        case '+': printf("%.3f", num1 + num2); break;
        case '-': printf("%.3f", num1 - num2); break;
        case '/': printf("%.3f", num1 / num2); break;
        case '*': printf("%.3f", num1 * num2); break;
    }

    return 0;
}
