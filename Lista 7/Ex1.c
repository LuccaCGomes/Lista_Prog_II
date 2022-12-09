#include <stdio.h>

void f1 ( int v) {
    v = v + 1;
    printf (" f1 = %d\n " , v );
}

void f2 ( int *v) {
    *v = *v + 1;
    printf (" f2 = %d\n " , *v );
}
int f3 ( int v) {
    v = v + 1;
    printf (" f3 = %d\n " , v );
    return v;
}

int main (void) 
{
    int v = 1;
    f1 ( v );
    f2 (&v );
    v = f3 ( v );
    printf (" main = %d \n" , v );
}

/* Imprimirá o seguinte:
    f1 = 2
    f2 = 2
    f3 = 3
    main = 3

    pois em f1, v recebera o valor dele mesmo + 1, ou seja, 2, mas não alterando o valor na função main
    em f2, acontecerá o mesmo, porém, através de ponteiros, então receberá 2 e irá alterar o valor na função main
    depois, v receberá a função f3, onde v recebe ele mesmo (2) + 1, sendo 3 e, apesar de não ser ponteiro, a função tem return, então o valor se altera na main
    no final, main ira printar v, que no momento é 3, por ter sido alterado por último em f3
 */
