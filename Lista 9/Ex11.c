#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    int matricula;
    float *vNotas; // Armazena as 5 notas de um aluno ao longo de um ano.
    char nome[100];
} Aluno;

typedef struct Materia {
    Aluno **V; // Armazena a informação de n alunos !!
    float media[5]; // Armazena as 5 médias do ano.
    int nAlunos // Número de alunos matriculados no curso.
} Materia;

Aluno *fillAluno();
Materia *fillMateria(int numAlunos);
void mediaMateria(Materia *m1);
void mostraMateria(Materia *m1);

int main(void) 
{   
    int qnt;
    printf("Digite o numero de alunos: ");
    scanf("%d", &qnt);

    Materia *alunos;
    alunos = fillMateria(qnt);

    mediaMateria(alunos);
    mostraMateria(alunos);
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
    Materia *materia;
    int i;

    materia = (Materia *) malloc(sizeof(Materia));

    materia->V = (Aluno **) malloc(sizeof(Aluno *));
    materia->nAlunos = numAlunos;

    for(int i = 0; i < numAlunos; i++) {
        materia->V[i] = fillAluno();
    }

    return materia;
}

void mediaMateria(Materia *m1) {
    float medias[5] = {0,0,0,0,0};

    for(int i = 0; i < m1->nAlunos; i++) {
        int cont = 0, k = 0;
        for(int j = 0; j < 5; j++) {
            float media = 0;
            for(int c = 0; c < m1->nAlunos; c++) {
                media += m1->V[c]->vNotas[j];   
            }
            medias[j] = media / m1->nAlunos;
        }
    }

    printf("\nMedias = { ");
    for(int i = 0; i < 5; i++) {
        printf("%.2f ", medias[i]);
    }
    printf("}\n");
}

void mostraMateria(Materia *m1) {
    for(int i = 0; i < m1->nAlunos; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Nome: %s | Matricula: %d | Nota 1: %.2f, Nota 2: %.2f, Nota 3: %.2f, Nota 4: %.2f, Nota 5: %.2f\n", m1->V[i]->nome, m1->V[i]->matricula, m1->V[i]->vNotas[0], m1->V[i]->vNotas[1], m1->V[i]->vNotas[2], m1->V[i]->vNotas[3], m1->V[i]->vNotas[4]);
    }
}