#include <stdio.h>
#include <stdlib.h>

struct funcionario {
    char nome[81]; /* nome do funcionário */
    float valor_hora; /* valor da hora de trabalho em Reais */
    int horas_mes; /* horas trabalhadas em um mês */
};
typedef struct funcionario Funcionario;

FILE *fp;

void carrega(int n, Funcionario **vet, char *arquivo);

int main(void)
{
    Funcionario **registro;
    registro = (Funcionario **) malloc(sizeof(Funcionario *));

    fp = fopen("Ex1texto.txt", "r");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    carrega(3, registro, fp);
}

void carrega(int n, Funcionario **vet, char *arquivo) {
    for(int i = 0; i < n; i++) {
        char name[81];
        fscanf(arquivo, "%s", &name);
        strcpy(*vet[i]->nome, name);

        float valHor = 0;
        int qntHor = 0;
        fscanf(arquivo, "%f %d", &valHor, &qntHor);
        vet[i]->valor_hora = valHor;
        vet[i]->horas_mes = qntHor;
    }

    for(int i = 0; i < n; i++) {
        printf("Funcionaro %d", i+1);
        printf("Nome: %s | Valor Hora: %.2f | Horas Mes: %d", vet[i]->nome, vet[i]->valor_hora, vet[i]->horas_mes);
    }
}