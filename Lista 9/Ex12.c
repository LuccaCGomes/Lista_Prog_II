#include <stdio.h>
#include <stdlib.h>

typedef struct Livro {
    int ano;
    char titulo[100];
    char autor[100];
    int nVolume; // Número de exemplares de um dado livro.
    float preco;
}Livro;

typedef struct Biblioteca {
    Livro **V; // Armazena a informação de n livros !!
    int nLivros // Número de livros existentes na biblioteca.
}Biblioteca;

Livro *fillLivro();
Biblioteca *fillBiblioteca(int numLivros);
void valorBiblioteca(Biblioteca *b1, int numLivros);
Livro *maiorBiblioteca(Biblioteca *b1, int numLivros);

int main(void)
{
    int qnt;
    printf("Quantos livros? ");
    scanf("%d", &qnt);

    Biblioteca *bibliotecas;
    bibliotecas = fillBiblioteca(qnt);

    valorBiblioteca(bibliotecas, qnt);

    char *maiorNum;
    maiorNum = maiorBiblioteca(bibliotecas, qnt);

    printf("\nO livro com maior numero de volumes e %s!", maiorNum);
}

Livro *fillLivro() {
    Livro *livro;
    livro = (Livro *) malloc(sizeof(Livro));

    printf("Ano: ");
    scanf("%d", &livro->ano);
    printf("Titulo: ");
    scanf("%s", &livro->titulo);
    printf("Autor: ");
    scanf("%s", &livro->autor);
    printf("Numero do Volume: ");
    scanf("%d", &livro->nVolume);
    printf("Preco: ");
    scanf("%f", &livro->preco);

    return livro;
}

Biblioteca *fillBiblioteca(int numLivros) {
    Biblioteca *bibli;
    bibli = (Biblioteca *) malloc(sizeof(Biblioteca));

    bibli->V = (Biblioteca **) malloc(sizeof(Biblioteca *));
    bibli->nLivros = numLivros;

    for(int i = 0; i < bibli->nLivros; i++) {
        bibli->V[i] = fillLivro();
    }

    return bibli;
}

void valorBiblioteca(Biblioteca *b1, int numLivros) {
    float pre;
    for(int i = 0; i < numLivros; i++) {
        pre += b1->V[i]->preco;
    }

    printf("Montante necessario para se comprar todos os livros: %.2f", pre);
}

Livro *maiorBiblioteca(Biblioteca *b1, int numLivros) {
    Livro *maior;
    maior = (Livro *) malloc(sizeof(Livro));

    int *qualquer;
    qualquer = (int *) malloc(numLivros * sizeof(int));

    int maior1 = 0, aux = 0;
    maior1 = b1->V[0]->nVolume;

    for(int i = 0; i < numLivros; i++) {
        if(b1->V[i]->nVolume > maior1) {
            maior1 = b1->V[i]->nVolume;
            aux = i;
        }
    }

    return b1->V[aux]->titulo;
}