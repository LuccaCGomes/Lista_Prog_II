#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

int calculaVogais(int *qnt, char *vetor);

int main(void)
{
    int vogais;
    char stringVogais[200];

    printf("Digite o string: ");
    gets(stringVogais);

    calculaVogais(&vogais, stringVogais);
    
    printf("O numero de vogais e %d!\n", vogais);
}

int calculaVogais(int *qnt, char *vetor) {
    int aux = 0;
    for(int i = 0; i < strlen(vetor); i++) {
        vetor[i] = tolower(vetor[i]);
        if(vetor[i] == 'a' || vetor[i] == 'e' || vetor[i] == 'i' || vetor[i] == 'o' || vetor[i] == 'u') {
            aux++;
        }
    }

    *qnt = aux;
}