#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char vetor[80];
    int i = 0, c = 0, k = 0;

    printf("Digite a frase desejada: ");

    // Pega o input do usuário
    for(i = 0; i < 79; i++) {
        vetor[i] = getch();
        
        if(vetor[i] == '\r') {
            vetor[i] = '\0';
            break;
        }

        while(isalpha(vetor[i]) == 0 && vetor[i] != ' ') {
            vetor[i] = getch();
        }

        printf("%c", vetor[i]);
    }

    // Remove os espaços internos, iniciais e finais da frase
    char *vetor2;
    vetor2 = (char *) malloc(strlen(vetor) * sizeof(char));
    if(vetor2 == NULL) { printf("Nao foi possivel alocar a memoria desejada."); exit(1); }

    for(int i = 0; i < strlen(vetor); i++) {
        if(vetor[i] == ' ' && vetor[i+1] == ' ' || vetor[i] == ' ' && vetor[i-1] == ' ') {
            continue;
        } else { vetor2[c] = vetor[i]; c++; }
    }
    vetor2[c] = '\0';

    char *vetor3;
    vetor3 = (char *) malloc(strlen(vetor2) * sizeof(char));
    if(vetor3 == NULL) { printf("Nao foi possivel alocar a memoria desejada."); exit(1); }

    for(int i = 0; i < strlen(vetor2); i++) {
        if(vetor2[i] == ' ') {
            continue;
        } else { vetor3[k] = vetor2[i]; k++; }
    }
    vetor3[k] = '\0';

    printf("\nO vetor sem espacos e: {%s}\n", vetor3);

    // Substitui as letras
    for(int i = 0; i < strlen(vetor3); i += 5) {
        vetor3[i] += 1;
        vetor3[i+1] += 2;
        vetor3[i+2] += 3;
        vetor3[i+3] += 4;
        vetor3[i+4] += 5;
    }

    printf("O vetor codificado e: {%s}", vetor3);
}