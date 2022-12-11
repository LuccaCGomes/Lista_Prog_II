#include <stdio.h>
#include <stdlib.h>

typedef struct data {
    int dia;
    int mes;
    char nomeMes[12];
} Data;

int main(void) 
{
    Data aniversarios[3] = {{5,1,"JANEIRO"},{4,2,"FEVEREIRO"},{10,3,"MAIO"}};
    int a;
    Data *p_dt;
    p_dt = &aniversarios[2];
    printf("Nome do mes %d e: %s.", p_dt->mes, p_dt->nomeMes);
    strcpy(p_dt->nomeMes, "MARCO");
    printf("\nNumero de letras: %d.", strlen(p_dt->nomeMes));
    Data *p_dt2 = (Data *) malloc(sizeof(Data));
    p_dt2 = &aniversarios[0];
}

// O erro se encontrava no fato de que tentava alocar memória dinamicamente para a variável p_dt2 de forma que ela não fosse um ponteiro.

// O valor mostrado na tela no segundo printf foi 5.