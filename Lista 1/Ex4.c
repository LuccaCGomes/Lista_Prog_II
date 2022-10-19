#include <stdio.h>
#include <stdlib.h>

float calculaMedia(float n1, float n2, float n3);

int main(void) 
{
    float n1, n2, n3;

    do {
        printf("Digite as 3 notas de provas: ");
        scanf("%f", &n1);
        scanf("%f", &n2);
        scanf("%f", &n3);
    } while(n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10);

    float media = calculaMedia(n1, n2, n3);

    printf("Sua media e: %.2f\n", media);

    if(media > 6) {
        printf("Voce esta aprovado!\n");
    }
    if(media < 6) {
        printf("Voce esta reprovado");
        if(media < 4) {
            printf(" e nao pode fazer a VS!\n");
        } 
        else {
            printf(" e pode fazer a VS!\n");
        }
    }

    return 0;
}

float calculaMedia(float n1, float n2, float n3) {
    float media = (n1 + n2 + n3) / 3;
    return media;
}