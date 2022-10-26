#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    int contador = 0;
    char palavra[30];

    printf("Digite uma palavra: ");

    for(int i = 0; i < 29; i++) {
        palavra[i] = getche();
        contador++;

        if(palavra[i] == '\r') {
            palavra[i] = '\0';
            break;
        }
    }

    printf("A primeira letra da palavra e '%c'.\n", palavra[0]);
    printf("A ultima letra da palavra e '%c'.\n", palavra[contador - 2]);
    printf("A palavra tem %d letras.\n", contador - 1);
}