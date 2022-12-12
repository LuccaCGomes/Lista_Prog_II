#include <stdio.h>
#include <stdlib.h>

struct elemento {
    float info; /* Valor real armazenado */
    struct elemento *prox; /* Ponteiro para o próximo elemento */
};
typedef struct elemento Elemento;

Elemento *filtra(Elemento *lst, float min, float max);

int main(void)
{
    int min, max;
    printf("Digite o valor minimo: ");
    scanf("%d", &min);
    printf("Digite o valor maximo: ");
    scanf("%d", &max);

    Elemento *prox;
    prox = filtra(prox, min, max);
}

Elemento *filtra(Elemento *lst, float min, float max) {
    Elemento *elem, *inicial = lst, *anterior = NULL, *aux = NULL;
    elem = lst;

    while(elem != NULL) {
        if(anterior == NULL && (elem->info < min || elem->info > max)) {
            inicial = elem->prox;
            aux = elem;
            elem = elem->prox;
            free(aux);
        } else if(anterior != NULL && (elem->info < min || elem->info > max)) {
            anterior->prox = elem->prox;
            aux = elem;
            elem = elem->prox;
            free(aux);
        } else {
            anterior = elem;
            elem = elem->prox;
        }
    }

    return inicial;
}