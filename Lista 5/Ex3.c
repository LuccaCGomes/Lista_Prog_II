#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

int analisaOcorrencia(char c, char *vet);

int main(void)
{
    char frase[20];

    printf("Digite a frase: ");
    gets(frase);

    char letra;
    printf("Digite o caracter que deseja analisar a ocorrencia na frase: ");
    scanf(" %c", &letra);
    letra = tolower(letra);

    int incidencia = analisaOcorrencia(letra, frase);

    printf("O caracter '%c' aparece %d vezes na string!\n", letra, incidencia);

    return 0;
}

int analisaOcorrencia(char c, char *vet) {
    int contador = 0;
    
    for(int i = 0; i < strlen(vet); i++) {
        vet[i] = tolower(vet[i]);

        if(vet[i] == c) {
            contador++;
        }
    }

    return contador;
}