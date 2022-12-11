#define MAX 4
#define MAXNOME 31

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void atribui(char **nomes, int indice, char *nome);
char *get_sobrenome(char *nome);

// No segundo printf será impresso o índice do vetor onde está o sobrenome caso ele tenha mais que 5 letras, se tiver menos de 5, irá imprimir 0
// A 4° letra do nome que se encontra no índice 0 (Fulano, letra a)

int main(void)
{
    int i;
    char **nomes;
    char *sobrenome;
    nomes = (char **) malloc(MAX * sizeof(char *));

    for(i = 0; i < MAX ; i++) {
        nomes[i] = (char *) malloc(sizeof(char) * MAXNOME);
    }

    atribui(nomes,0,"Fulano Silva"); 
    atribui(nomes,1,"Maria do Carmo");
    atribui(nomes,2,"Beltrano Belmonte"); 
    atribui(nomes,3,"Pedro dos Santos");
    
    for(i = 0; i < MAX; i++) {
        sobrenome = get_sobrenome(nomes[i]);
        printf("\n%s ", sobrenome);
        printf(" %d", strlen(sobrenome) > 5 ? i : 0); // 2º printf
    }
    printf("\n%c", nomes[0][3]); // 3º printf
}

void atribui(char **nomes, int indice, char *nome) {
    nomes[indice] = nome;
}

char *get_sobrenome(char *nome) {
    int cont = 0, k = 0, j = 0;
    char vetAux[10];

    for(int i = strlen(nome) - 1; i > 0; i--) {
        if(nome[i] == ' ') {
            break;
        }
        vetAux[k] = nome[i];
        cont++;
        k++;
    }
    vetAux[k] = '\0';

    char *vetAux2;
    vetAux2 = (char *) malloc(k * sizeof(char));

    for(int i = strlen(vetAux) - 1; i >= 0; i--) {
        vetAux2[j] = vetAux[i];
        j++;
    }
    vetAux2[j] = '\0';

    return vetAux2;
}