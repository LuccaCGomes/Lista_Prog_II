#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int qnt, distancia[2], somatorio = 0, c = 0, k = 0, tabela[5][5] = {{0,15,30,5,12}, {15,0,10,17,28}, {30,10,0,3,11}, {5,17,3,0,80}, {12,28,11,80,0}};

    printf("Tabela:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", tabela[i][j]);
        }
        printf("\n");
    }
// A) -----------------------------------------------------------------------------------------------------------------
    printf("Digite duas cidades para saber a distancia: ");
    do
    {
        scanf("%d", &distancia[0]);
        scanf("%d", &distancia[1]);
        if(distancia[0] != 0 && distancia[1] != 0) {
            printf("A distancia e de %d!", tabela[distancia[0] - 1][distancia[1] - 1]);
            printf("\nDigite outras duas cidades ou 0 duas vezes para parar: ");
        }
    } while (distancia[0] != 0 && distancia[1] != 0);
    

// B) -----------------------------------------------------------------------------------------------------------------
    printf("Tabela sem repeticoes:\n");
    for(c; c < 5; c++) {
        for(k; k < 5; k++) {
            printf("%d ", tabela[c][k]);
        }
        k = c + 1;
        printf("\n");
    }

// C) -----------------------------------------------------------------------------------------------------------------
    printf("Quantas cidades quer percorrer? ");
    scanf("%d", &qnt);

    int *percorre;
    percorre = (int *) malloc(qnt * sizeof(int));
    if(percorre == NULL) { printf("Nao foi possivel alocar a memoria desejada!\n"); exit(1); }

    printf("Digite quais cidades quer percorrer (de 1 a 5): ");
    for(int i = 0; i < qnt; i++) {
        scanf("%d", &percorre[i]);
    }

    for(int i = 0; i < qnt - 1; i++) {
        somatorio += tabela[percorre[i] - 1][percorre[i+1] - 1];
    }

    printf("Distancia total = %d", somatorio);
}