#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float qnt, otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0, idadeRuim = 0, somaIdade = 0, idadePessimo = 0, idadeOtimo = 0, idadeRuim2 = 0;
    do {
        printf("Quantas pessoas foram no cinema? ");
        scanf("%f", &qnt);
    } while (qnt > 100 || qnt <= 0);

    int *idade;
    idade = (int *) malloc(qnt * sizeof(int));
    if(idade == NULL) {printf("Nao foi possivel alocar a memoria desejada"); exit(1);}

    for(int i = 0; i < qnt; i++) {
        int aux, aux2;
        printf("Qual sua idade? ");
        scanf("%d", &aux);
        idade[i] = aux;

        do {
            printf("Qual sua opiniao sobre o filme? (5 = Otimo, 4 = Bom, 3 = Regular, Ruim = 2, Pessimo = 1: ");
            scanf("%d", &aux2);
        } while (aux2 != 5 && aux2 != 4 && aux2 != 3 && aux2 != 2 && aux2 != 1);

        if(aux2 == 5) {
            otimo++;
            if(idade[i] > idadeOtimo){
                idadeOtimo = idade[i];
            }
        } else if(aux2 == 4) {
            bom++;
        } else if(aux2 == 3) {
            regular++;
        } else if(aux2 == 2) {
            ruim++;
            somaIdade += idade[i];
            if(idade[i] > idadeRuim2){
                idadeRuim2 = idade[i];
            }
        } else {
            pessimo++;
            if(idade[i] > idadePessimo){
                idadePessimo = idade[i];
            }
        }
    }

    int totalResp = otimo + bom + regular + ruim + pessimo;
    float difPercentual = 0;
    if(bom == 0 || regular == 0) {
        printf("Não existe diferença percentual!\n");
    } else {
        difPercentual = ((bom / totalResp) * 100) - ((regular / totalResp) * 100);
    }
    if(difPercentual < 0) {difPercentual *= -1;}
    float porcentagem = (pessimo / totalResp) * 100;
    float mediaIdadeRuim = somaIdade / ruim;
    int diferencaIdades = (idadeOtimo - idadeRuim);
    if(diferencaIdades < 0){diferencaIdades *= -1;}

    printf("Tiveram %.0f respostas 'Otimo'!\n", otimo);
    printf("A diferença percentual entre as respostas Bom e Regular foi de %.2f%%!\n", difPercentual);
    
    if(ruim == 0) {
        printf("Ninguém votou em ruim!\n");
    } else {
        printf("A media de idade das pessoas que responderam 'Ruim' e %.2f!\n", mediaIdadeRuim);
    }

    if(pessimo == 0) {
        printf("Ninguém votou em pessimo!\n");
    } else {
        printf("A porcentagem de pessoas que disseram ser pessimo foi de %.2f%%, e a maior idade que utilizou essa opcao foi %.0f\n", porcentagem, idadePessimo);
    }

    if(ruim == 0 || otimo == 0) {
        printf("Ninguem votou otimo ou ruim!\n");
    } else {
        printf("A diferença entre a maior idade que votou Otimo e a maior idade que votou Ruim e de %d!\n", diferencaIdades);
    }

    free(idade);
}