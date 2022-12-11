#include <stdio.h>
#include <stdlib.h>

typedef struct endereco {
    char rua[100]; /* Nome da rua */
    int numero; /* Numero do imovel */
} Endereco;

typedef struct notas {
    float p1, p2, p3; /* Notas nas provas */
} Notas;

typedef struct aluno {
    int mat; /* Matricula do aluno */
    char nome[81]; /* Nome do aluno */
    Notas nota; /* Notas nas provas */
    Endereco *end; /* Endereco do aluno */
} Aluno;

Aluno **alocaAlunos(int n);
void atribui(Aluno **a, int indice, int matricula, char *nome, float nota1, float nota2, float nota3, char *nomeRua, int numero);

int main(void)
{
    Aluno **alunos;
    alunos = alocaAlunos(3);
    atribui(alunos,0,10,"Fulano",1,1,1,"Getulio Vargas",100);
    atribui(alunos,1,20,"Beltrano",8,8,8,"Amaral Peixoto",200);
    atribui(alunos,2,30,"Ciclano",9,9,9,"Ouro Verde",300);

    for(int i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Nome: %s | Matricula: %d | Nota 1: %.2f | Nota 2: %.2f | Nota 3: %.2f | Endereco = Rua: %s e Numero %d\n", alunos[i]->nome, alunos[i]->mat, alunos[i]->nota.p1, alunos[i]->nota.p2, alunos[i]->nota.p3, alunos[i]->end->rua, alunos[i]->end->numero);
    }
}

Aluno **alocaAlunos(int n) {
    Aluno **aux;
    aux = (Aluno **) malloc(n * sizeof(Aluno *));
    if(aux == NULL) {printf("Nao foi possivel alocar a memoria desejada!\n"); exit(1);}

    for(int i = 0; i < n; i++) {
        aux[i] = NULL;
        aux[i] = (Aluno *) malloc(n * sizeof(Aluno));
    }


    return aux;
}

void atribui(Aluno **a, int indice, int matricula, char *nome, float nota1, float nota2, float nota3, char *nomeRua, int numero) {
    a[indice]->mat = matricula;
    strcpy(a[indice]->nome, nome);
    a[indice]->nota.p1 = nota1;
    a[indice]->nota.p2 = nota2;
    a[indice]->nota.p3 = nota3;
    a[indice]->end = (Endereco *) malloc(sizeof(Endereco));
    a[indice]->end->numero = numero;
    strcpy(a[indice]->end->rua, nomeRua);
}