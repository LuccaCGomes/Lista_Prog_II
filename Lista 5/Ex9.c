#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
    char nome[50], endereco[50], telefone[50];

    printf("Digite o nome: ");
    gets(nome);

    printf("Digite o endereco: ");
    gets(endereco);

    printf("Digite o telefone: ");
    gets(telefone);

    char concatenado[150] = "";

    strcat(concatenado, nome);
    strcat(concatenado, ",");
    strcat(concatenado, " ");
    strcat(concatenado, endereco);
    strcat(concatenado, ",");
    strcat(concatenado, " ");
    strcat(concatenado, telefone);

    printf("Informacoes: %s.\n", concatenado);
}