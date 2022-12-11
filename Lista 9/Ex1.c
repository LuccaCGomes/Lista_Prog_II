#include <stdio.h>
#include <stdlib.h>

typedef struct data {
    int dia, mes, ano;
} Data;

typedef struct local {
    char ender[81]; /* endereço do local de provas */
    int sala; /* numero sala */
} Local;

typedef struct notas {
    float geral; /* prova de conhecimentos gerais */
    float especifica; /* prova de conhecimentos
    especificos */
} Notas;

typedef struct candidato {
    int inscr; /* numero de inscricao */
    char nome[81]; /* nome do candidato */
    Data nasc; /* data de nascimento */
    Local *loc; /* local de prova */
    Notas nt; /* notas de prova */
} Candidato;

void inicializa(int n, Candidato **tab);
void preenche(int n, Candidato **tab, int i);
int opcoes(int num, Candidato **tab);
void alteraEnd(int num, Candidato **tab);

int main(void) 
{
    int n;
    printf ("Quantos candidatos deseja armazenar? \n");
    scanf("%d",&n);
    Candidato* tab[100];
    inicializa(n, tab);
    for(int j = 0; j < n; j++){
        preenche(n, tab, j);
    }

    opcoes(n, tab);
}

void inicializa (int n, Candidato **tab) {
    int i;
    for (i = 0; i < 100; i++){
        tab[i] = NULL;
    }
}

void preenche (int n, Candidato **tab, int i) {
    if (i < 0 || i >= n) {
        printf("Indice fora do limite do vetor!\n");
        exit(1); /* aborta o programa */
    }

    Local locais[100];
    if (tab[i] == NULL){
        tab[i] = (Candidato*)malloc(sizeof(Candidato));

        tab[i]->loc=&locais[i];
    }

    printf("Entre com a matricula: \n");
    scanf("%d", &tab[i]->inscr);
    printf("Entre com o Nome: \n");
    scanf("%s", &tab[i]->nome);
    printf("Entre com a data de nascimento: \n");
    printf("Dia: ");
    scanf("%d", &tab[i]->nasc.dia);
    printf("\nMes: ");
    scanf("%d", &tab[i]->nasc.mes);
    printf("\nAno: ");
    scanf("%d", &tab[i]->nasc.ano);
    printf("\nEntre com o local de prova: ");
    scanf("%s", &tab[i]->loc->ender);
    printf("\nNumero da sala: ");
    scanf("%d", &tab[i]->loc->sala);
    printf("\nEntre com a nota da prova de conhecimentos gerais: ");
    scanf("%f", &tab[i]->nt.geral);
    printf("\nNota da prova de conhecimentos especificos: ");
    scanf("%f", &tab[i]->nt.especifica);
}

int opcoes(int num, Candidato **tab) {
    int op;
    printf("O que deseja fazer agora? (1 para leitura dos dados e 2 para imprimir todas as informacoes e 3 continuar e 4 para encerrar o programa): ");
    scanf("%d", &op);

    if(op == 1) {
        int j;
        printf("Deseja ler os dados de qual candidato? ");
        scanf("%d", &j);
        printf("\nInscricao = %d | Nome = %s | Data de Nascimento = %d/%d/%d | Local de Prova: Endereco = %s, Sala = %d | Nota 1 = %.2f e Nota 2 = %.2f\n", tab[j-1]->inscr, tab[j-1]->nome, tab[j-1]->nasc.dia, tab[j-1]->nasc.mes, tab[j-1]->nasc.ano, tab[j-1]->loc->ender, tab[j-1]->loc->sala, tab[j-1]->nt.geral, tab[j-1]->nt.especifica);

        opcoes(num, tab);
    } else if(op == 2) {
        for(int i = 0; i < num; i++) {
            printf("Candidato %d:\n", i+1);
            printf("Inscricao = %d | Nome = %s | Data de Nascimento = %d/%d/%d | Local de Prova: Endereco = %s, Sala = %d | Nota 1 = %.2f e Nota 2 = %.2f\n", tab[i]->inscr, tab[i]->nome, tab[i]->nasc.dia, tab[i]->nasc.mes, tab[i]->nasc.ano, tab[i]->loc->ender, tab[i]->loc->sala, tab[i]->nt.geral, tab[i]->nt.especifica);
        }
        opcoes(num, tab);
    } else if(op == 3) {
        alteraEnd(num, tab);
    } else if(op == 4) {
        return 0;
    } else {
        printf("Opcao invalida! Tente novamente.\n");
        opcoes(num, tab);
    }
}

void alteraEnd(int num, Candidato **tab) {
    int op;
    printf("Deseja alterar o endereco e a sala do local de provas? (1 para sim e 2 para nao): ");
    scanf("%d", &op);

    if(op == 1) {
        int j = 0;
        printf("Qual candidato deseja alterar? ");
        scanf("%d", &j);

        printf("Digite o novo endereco: ");
        *tab[j-1]->loc->ender = NULL;
        scanf("%s", &tab[j-1]->loc->ender);

        int novaSala = 0;
        printf("Digite a nova sala: ");
        scanf("%d", &novaSala);
        tab[j-1]->loc->sala = NULL; 
        tab[j-1]->loc->sala = novaSala;
    } else if(op == 2) {
        opcoes(num, tab);
    }
    opcoes(num, tab);
}