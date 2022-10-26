#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char *compactar(char *s);

int main(void) 
{
    char vetorInicial[100], *vetorFinal;;

    vetorFinal = compactar(vetorInicial); 

    printf("Frase sem os espacos iniciais e finais: '%s'", vetorFinal);
}

char *compactar(char *s) {
    printf("Digite uma frase para remover os espacos iniciais e finais: ");
    gets(s);

    char *vetorResp;
    vetorResp = (char *) malloc(strlen(s) * sizeof(char));
    if(vetorResp == NULL) { printf("Nao foi possivel alocar a memoria desejada."); exit(1); }

    int c = 0;
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == ' ' && s[i+1] == ' ' || s[i] == ' ' && s[i-1] == ' ') {
            continue;
        } else { vetorResp[c] = s[i]; c++; }
    }
    vetorResp[c] == '\0';

    return vetorResp;
}