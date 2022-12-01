#include <stdio.h>
#include <string.h>

#define MAX 50

int main (void) 
{
    char texto[MAX + 2], temp;
    int tam, i;

    gets(texto);  // Recebe texto do usuário
    tam = strlen(texto);  // Atribui um valor a "tam" com base no tamanho do texto recebido

    for (i = 0; i < tam; i ++) {
        temp = texto[i];  // Atribui o i-ésimo índice do texto à variavel char temp 
        texto[i] = texto[tam - 1 - i];  // atribui outro índice variável a depender do tamanho de tam ao texto[i]
        texto[strlen(texto) - 1 - i] = temp;  // faz com que texto[strlen(texto) - 1 - i] receba o valor de tam, assim sendo, apenas repetindo tudo o que foi escrito no gets
    }

    puts(texto);
    return 0;
}