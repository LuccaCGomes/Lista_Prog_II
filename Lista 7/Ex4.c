#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *declaraVetor();
char imprimeVetor(char *vet);

int main(void)
{
    char *vetor[27];
    vetor[27] = declaraVetor();

    imprimeVetor(vetor);
}

char *declaraVetor() {
    char vet[27], letra = 'a';
    
    for(int i = 0; i < 26; i++) {
        vet[i] = letra;
        letra++;
    }

    vet[27] = '\0';

    return vet;
}

char imprimeVetor(char *vet) {
    printf("Vetor = { ");
    for(int i = 0; i < 26; i++) {
        printf("%c", vet[i]);
    }
    printf(" }");
}