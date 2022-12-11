#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    int matricula;
    float *vNotas; // Armazena as 5 notas de um aluno ao longo de um ano.
    char nome[100];
} Aluno;

typedef struct Materia {
    Aluno *V; // Armazena a informação de n alunos !!
    float media[5]; // Armazena as 5 médias do ano.
    int nAlunos // Número de alunos matriculados no curso.
} Materia;

Aluno *fillAluno();
Materia *fillMateria(int numAlunos);

int main(void) 
{   
    int qnt;
    printf("Digite o numero de alunos: ");
    scanf("%d", &qnt);

    Materia **alunos;
    alunos = (Materia **) malloc(qnt * sizeof(Materia *));
    
    for(int i = 0; i < qnt; i++) {
        alunos[i] = fillMateria(qnt);
    }

    printf("%s", alunos[0]->V->nome);
}   

Aluno *fillAluno() {
    Aluno *aluno;
    aluno = (Aluno *) malloc(sizeof(Aluno));

    printf("Nome: ");
    scanf("%s", &aluno->nome);
    printf("Matricula: ");
    scanf("%d", &aluno->matricula);

    aluno->vNotas = (float *) malloc(5 * sizeof(float));
    for(int i = 0; i < 5; i++) {
        printf("Nota %d: ", i+1);
        scanf("%f", &aluno->vNotas[i]);
    }

    return aluno;
}

Materia *fillMateria(int numAlunos) {
    
}