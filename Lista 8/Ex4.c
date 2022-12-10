#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void) 
{
    printf("Digite quantos nomes quiser, ate digitar 'fim'.\n");
    char lista[100][100];
    int i;
    float somatorio = 0,  media = 0;

    for(i = 0; i < 100; i++) {
        gets(lista[i]);
        if(strlen(lista[i]) == 3) {
            if(lista[i][0] == 'f' && lista[i][1] == 'i' && lista[i][2] == 'm') {
                break;
            }
        }
        media += strlen(lista[i]);
    }
    media /= i;

    for(int c = 0; c < i; c++) {
        somatorio += pow((strlen(lista[c]) - media), 2);
    }

    somatorio /= i;

    printf("Media do tamanho dos nomes e %.2f e a variancia e de %.2f", media, somatorio);
}

