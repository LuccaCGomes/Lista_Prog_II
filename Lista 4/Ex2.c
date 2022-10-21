#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    char R[5];
    char S[12];

    printf("Digite os elementos do vetor R: ");
    for (int i = 0; i < 5; i++) {
        R[i] = getche();
    }
    printf("\n");

    printf("Digite os elementos do vetor S: ");
    for (int i = 0; i < 10; i++) {
        S[i] = getche();
    }
    S[11] = '\0';
    printf("\n");

    printf("Vetor R = { ");
    for (int i = 0; i < strlen(R) - 1; i++) {
        printf("%c ", R[i]);
    }
    printf("}\n");

    printf("Vetor S = { ");
    for (int i = 0; i < strlen(S) - 1; i++) {
        printf("%c ", S[i]);
    }
    printf("}\n");
}