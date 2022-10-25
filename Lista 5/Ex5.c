#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(void)
{
    char frase[80] = "o rato roeu a roupa do rei de roma";
    char *p;

    p = frase;   // Aponta para o primeiro índice do vetor.
    p[2]='m';   // Substitui 'r' por 'm'.
    p[6] = '\0';   // Encerra o string no índice 6, fazendo com que a frase se torne 'o mato'.

    printf("%s\n", frase);   // Imprime 'o mato' devido às alterações.

    p = p + 3;   // Passa a apontar para o índice 3 do vetor.

    printf("%s\n", p);   // Imprime 'ato' pois p aponta para frase[3] e o string agora se encerra em frase[6].
    printf("%d\n", strlen(frase));   // O tamanho da frase é 6, pois frase[6] possui '\0', fazendo com que se conte o tamanho até frase[5].
}