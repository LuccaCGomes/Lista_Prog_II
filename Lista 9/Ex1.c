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

void inicializa (int n, Candidato** tab);
void preenche (int n, Candidato** tab, int i);

int main(void) 
{
    int n;
    printf ("Quantos candidatos deseja armazenar? \n");
    scanf("%d",&n);
    Candidato* tab[100];
    inicializa(n,tab);
    for(int j = 0; j < n; j++){
        preenche(n,tab,j);
    }
}

void inicializa (int n, Candidato** tab) {
int i;
Local local1;
for (i=0; i<100; i++){
tab[i] = NULL;

}

}

void preenche (int n, Candidato** tab, int i) {
    if (i<0 || i>=n) {
        printf("Indice fora do limite do vetor\n");
        exit(1); /* aborta o programa */
    }
    if (tab[i]==NULL) {
        tab[i] = (Candidato *) malloc(sizeof(Candidato));
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
        scanf("%s\r", &tab[i]->loc->ender);
        printf("\nNumero da sala: ");
        scanf("%d\r", &tab[i]->loc->sala);
        printf("\nEntre com a nota da prova de conhecimentos gerais: ");
        scanf("%f", &tab[i]->nt.geral);
        printf("\nNota da prova de conhecimentos específicos: ");
        scanf("%f", &tab[i]->nt.especifica);
    }
}

