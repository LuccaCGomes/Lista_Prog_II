#include <stdio.h>
#include <stdlib.h>

char *estado[27] = {"AC","AL","AM","AP","BA","CE","DF","ES","GO","MA","MG","MS","MT","PA","PB","PE","PI","PR","RJ","RN","RO","RR","RS","SC","SE","SP","TO"};

typedef struct assalariados {
    char nome[51];
    char sexo;
    int idade;
    float salario;
    char estado[3];
} Assalariados;

Assalariados *cadastra(char *nome, char sexo, int idade, float salario, char *estado);
void relatorio(Assalariados **ptr, int numAssalariados);
void imprime(Assalariados **ptr, int numAssalariados);

int main(void)
{
    Assalariados **pessoas;
    int numAssalariados = 3;
    pessoas = (Assalariados **) malloc (numAssalariados * sizeof(Assalariados *));
    pessoas[0] = cadastra("Fulano de tal",'M',45,1500.00,"RJ");
    pessoas[1] = cadastra("Ciclano",'M',50,2500.00,"RS");
    pessoas[2] = cadastra("Beltrano",'M',42,500.00,"RS");
    imprime(pessoas, numAssalariados);
    relatorio(pessoas,numAssalariados);
}

Assalariados *cadastra(char *nome, char sexo, int idade, float salario, char *estado) {
    Assalariados vetAux[1];

    vetAux->nome[0] = nome;
    vetAux->sexo = sexo;
    vetAux->idade = idade;
    vetAux->salario = salario;
    vetAux->estado[0] = estado;

    return vetAux;
}