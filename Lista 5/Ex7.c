#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
    char nome[50], straux[10];
    int c = 1;

    printf("Digite um nome para abrevia-lo: ");
    gets(nome);

    straux[0] = nome[0];

    for(int i = 1; i < strlen(nome); i++) {
        if(nome[i-1] == ' ') {
            if(nome[i+2] == ' ' || nome[i+1] == ' ' || nome[i+3] == ' ') {
                continue;
            }
            straux[c] = nome[i];
            c++;
        }
    }

    printf("Nome abreviado: ");
    for(int i = 0; i < strlen(straux); i++) {
        printf("%c.", straux[i]);
    }
    printf("\n");
}