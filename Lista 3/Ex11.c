#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    float qnt;
    int cont1 = 0, cont2 = 0;
    printf("Digite o numero de pessoas que deseja avaliar: ");
    scanf("%f", &qnt);

    float *vetorAltura;
    vetorAltura = (float *) malloc(qnt * sizeof(float));
    if(vetorAltura == NULL) {printf("Nao foi possivel alocar a memoria desejada"); exit(1);}

    float mediaAltura = 0, somatorio = 0;

    for(int i = 0; i < qnt; i++) {
        float idade, altura;
        char sexo;

        printf("Idade: ");
        scanf("%f", &idade);

        printf("Altura em centimetros: ");
        scanf("%f", &altura);
        vetorAltura[i] = altura;
        mediaAltura += altura / qnt;

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        char auxSexo = toupper(sexo);

        if(auxSexo == 'F') {
            if(idade >= 20 && idade <= 35) {
                cont1++;
            }
        }
        if(auxSexo == 'M') {
            if(altura >= 180) {
                cont2++;
            }
        }
    }

    for(int i = 0; i < qnt; i++) {
        somatorio += pow((vetorAltura[i] - mediaAltura), 2);
    }

    float aux = somatorio / qnt;

    printf("Existem %d mulheres entre 20 e 35 anos e %d homens com mais de 1,80 de altura! A variancia da altura e de %.2f!\n", cont1, cont2, aux);

    free(vetorAltura);
}