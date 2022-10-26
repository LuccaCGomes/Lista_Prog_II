#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(void)
{
    char string[20];
    printf("Digite o string que deseja inverter: ");
    gets(string);

    printf("String invertido: ");
    for(int i = 0; i < strlen(string); i++) {
        printf("%c", string[strlen(string) - 1 - i]);
    }
}