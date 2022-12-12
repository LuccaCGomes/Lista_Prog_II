#include <stdio.h>
#include <stdlib.h>

struct elemento {
    float info; /* Valor real armazenado */
    struct elemento *prox; /* Ponteiro para o próximo elemento */
};
typedef struct elemento Elemento;

Elemento *copia(Elemento *lst);

int main(void)
{
    Elemento *prox;
    prox = copia(prox);
}

Elemento *copia(Elemento *lst) {
    Elemento *elem, *inicial = lst, *anterior = NULL, *lista2, *anteriorLista2 = NULL, *elemLista2, *inicialLista2, *auxLista2 = NULL;
    elem = lst;

    while(elem != NULL) {
        if(anterior == NULL) {
            inicialLista2 = inicial;
            auxLista2 = elem;
            elemLista2 = elem->prox;
            anteriorLista2 = elem;
        } else if(anterior != NULL) {
            anteriorLista2->prox = elem->prox;
            auxLista2 = elem;
            elemLista2 = elem->prox;
            anteriorLista2 = elem;
        } else {
            anteriorLista2 = elem;
            elemLista2 = elem->prox;
        }
    }

    return lista2;
}