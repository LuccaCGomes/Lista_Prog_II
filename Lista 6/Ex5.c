#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char* cifra_cesar(char* msg);

int main(void)
{
    char frase[1001];
    gets(frase);

    char *aux;
    aux = cifra_cesar(frase);
    printf("Frase Original: \n");
    printf("%s\n", frase);
    printf("Frase Cifrada: \n");
    printf("%s", aux);
}

char* cifra_cesar(char* msg) {
    int n = strlen(msg);
    
    char * aux;
    aux = (char *) malloc(n * sizeof(char));
    if(aux == NULL) { printf("Nao foi possivel alocar a memoria desejada.\n"); exit(1); }

    for(int i = 0; i < n + 1; i++){
        if(msg[i] >= 'a' && msg[i] <= 'w' || msg[i] >= 'A' && msg[i] <= 'W') {
            aux[i]=msg[i]+3;
        } else if(msg[i] == 'x' || msg[i] == 'y' || msg[i] == 'z'|| msg[i] == 'X' || msg[i] == 'Y' || msg[i] == 'Z') {
            aux[i]=msg[i]-23;
        } else if(msg[i] == '\0') {
            aux[i] = '\0';
        } else {
            aux[i] = msg[i];
        }
    }

    return aux;
    free(aux);
}