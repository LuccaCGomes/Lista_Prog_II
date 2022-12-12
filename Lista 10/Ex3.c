#include <stdio.h>
#include <stdlib.h>

float media(char *mat, char *nome_arquivo);

typedef struct aluno {
    char matricula[10];
    float nota1, nota2, nota3;
} Aluno;

int main(void) 
{   
    char matricula[10], *arquivo = "Ex3texto.txt";
    printf("Digite a matricula que deseja consultar: ");
    gets(matricula);

    float mediaMat;
    mediaMat = media(matricula, arquivo);

    if(mediaMat == -1.0) {
        printf("Matricula nao encontrada, tente novamente!\n");
    } else { printf("A media do aluno com matricula %s e: %.2f!\n", matricula, mediaMat); }
}

float media(char *mat, char *nome_arquivo) {
    FILE *fp;
    fp = fopen(nome_arquivo, "r");

    Aluno **aluno;
    aluno = (Aluno **) malloc(sizeof(Aluno *));

    for(int i = 0; i < 4; i++) {
        aluno[i] = (Aluno *) malloc(sizeof(Aluno));
        fscanf(fp, "%10[^' ']", &aluno[i]->matricula);
        fscanf(fp, "%f", &aluno[i]->nota1);
        fscanf(fp, "%f", &aluno[i]->nota2);
        fscanf(fp, "%f", &aluno[i]->nota3);
        fgetc(fp);
    }

    fclose(fp);

    float mediaAluno = 0;
    int contador = 0, i;


    for(i = 0; i < 4; i++) {
        if(strcmp(aluno[i]->matricula, mat) != 0) {
            contador++;
        } else { break; }
    }

    if(contador == 4) {
        return -1.0;
    } else {
        mediaAluno += aluno[i]->nota1 + aluno[i]->nota2 + aluno[i]->nota3;
        return mediaAluno / 3;
    }
}