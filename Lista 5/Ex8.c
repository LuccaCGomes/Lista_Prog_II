#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
    char palavra1[20], palavra2[20];
    int contador1 = 0, contador2 = 0, c = 0;

    printf("Digite a primeira palavra: ");
    gets(palavra1);

    printf("Digite a segunda palavra: ");
    gets(palavra2);

    for(int i = 0; i < strlen(palavra1); i++) {
        if(palavra1[i] == palavra2[i]) { contador1++; }
    }

    if(contador1 == strlen(palavra1) && contador1 == strlen(palavra2)) { printf("As palavras sao iguais!\n"); }
    else {
        while(palavra2[c] != '\0') {
            if(palavra2[c] == palavra1[c]) { contador2++; }
            c++;
        }

        if(contador2 == strlen(palavra1)) { printf("Nao sao iguais mas a palavra 2 e uma subpalavra da palavra 1!\n"); }
        else { printf("Nao sao iguais e a palavra 2 nao e uma subpalavra da palavra 1!\n"); }
    }


}