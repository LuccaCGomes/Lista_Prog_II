#include <stdio.h>
#include <stdlib.h>

struct funcionario {
    char nome[81]; /* nome do funcionário */
    float valor_hora; /* valor da hora de trabalho em Reais */
    int horas_mes; /* horas trabalhadas em um mês */
};
typedef struct funcionario Funcionario;

void carrega(int n, Funcionario **vet, char *arquivo);

int main(void)
{
    int n = 3;
    char *arquivo = "Ex1texto.txt";

    Funcionario **registro;
    registro = (Funcionario **) malloc(sizeof(Funcionario *));

    for(int i = 0; i < n; i++) {
        registro[i] = NULL;
    }

    carrega(n, registro, arquivo);
}

void carrega(int n, Funcionario **vet, char *arquivo) {
    FILE *fp;

    fp = fopen(arquivo, "r");
    if(fp == NULL) { printf("ERRO"); exit(1); }

    for(int i = 0; i < n; i++) {
        vet[i] = (Funcionario *) malloc(sizeof(Funcionario));
        fscanf(fp, "%81[^\n]", &vet[i]->nome);
        fscanf(fp, "%f", &vet[i]->valor_hora);
        fscanf(fp, "%d", &vet[i]->horas_mes);
        fgetc(fp);
    }

    fclose(fp);

    for(int i = 0; i < n; i++) {
        printf("Funcionaro %d:\n", i+1);
        printf("Nome: %s | Valor Hora: %.2f | Horas Mes: %d\n", vet[i]->nome, vet[i]->valor_hora, vet[i]->horas_mes);
    }
}