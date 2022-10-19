#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main(void) 
{   
    srand(time(NULL));
    char resp, letraAleatoria = rand() % (90 + 1 - 65) + 65;

    printf("Qual letra foi sorteada? ");
    scanf("%c", &resp, toupper(resp));

    if(resp == letraAleatoria) {
        printf("Você acertou!");
    } else if(resp < letraAleatoria) {
        printf("A letra sorteada e maior.");
    } else {
        printf("A letra sorteada e menor.");
    }
}
