#include <stdio.h>
#include <string.h>

int main (void) 
{
    char *frase = "Otimo teste";
    char *p , misterio[80];
    int i = 0;
    int j = 0;

    p = frase + strlen(frase) - 1;
    while (*p != ' ') {
        misterio[i] = *p;
        i++; p--;
    }

    misterio[i] = ' '; i++;
    while (frase[j] != ' ') {
        misterio [i] = frase[j];
        j++; i++;
    }

    misterio[i] = '\0';
    puts (misterio);
    return 0;
}

/*
    irá imprimir etset Otimo:
    
    no primeiro loop, misterio[i] irá receber a letra correspondente ao ponteiro p, que no caso é a última da frase Otimo teste, até que *p seja ' ', incrementando i e decrementando p, para que receba etset, pois *p começará no final e irá percorrer até o início da frase.

    no segundo loop, misterio[i] irá receber frase[j], letra a letra, até que frase[j] seja ' ', que no caso começará no princípio de Otima frase, visto que j foi inicializado como 0, assim recebendo a palavra Otimo e finalizando.
*/