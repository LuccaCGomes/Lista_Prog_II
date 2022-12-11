#include <stdio.h>
#include <stdlib.h>

char *estado[27] = {"AC","AL","AM","AP","BA","CE","DF","ES","GO","MA","MG","MS","MT","PA","PB","PE","PI","PR","RJ","RN","RO","RR","RS","SC","SE","SP","TO"};

typedef struct assalariados {
    char nome[51];
    char sexo;
    int idade;
    float salario;
    char estado[3];
} Assalariados;

Assalariados *cadastra(char *nome, char sexo, int idade, float salario, char *estado);
void relatorio(Assalariados **ptr, int numAssalariados);
void imprime(Assalariados **ptr, int numAssalariados);

int main(void)
{
    Assalariados **pessoas;
    int numAssalariados = 3;
    pessoas = (Assalariados **) malloc (numAssalariados * sizeof(Assalariados *));
    pessoas[0] = cadastra("Fulano de Tal",'M',45,1500.00,"RJ");
    pessoas[1] = cadastra("Ciclano",'M',50,2500.00,"RS");
    pessoas[2] = cadastra("Beltrano",'M',42,500.00,"RS");
    imprime(pessoas, numAssalariados);
    relatorio(pessoas, numAssalariados);
}

Assalariados *cadastra(char *nome, char sexo, int idade, float salario, char *estado) {
    Assalariados *vetAux;
    vetAux = (Assalariados *) malloc(sizeof(Assalariados));

    strcpy(vetAux->nome, nome);
    vetAux->sexo = sexo;
    vetAux->idade = idade;
    vetAux->salario = salario;
    strcpy(vetAux->estado, estado);
    
    return vetAux;
}

void imprime(Assalariados **ptr, int numAssalariados) {
    for(int i = 0; i < numAssalariados; i++) {
        printf("Assalariado %d:\n", i+1);
        printf("Nome: %s | Sexo: %c | Idade: %d | Salario: %.4f | Estado: %s\n", ptr[i]->nome, ptr[i]->sexo, ptr[i]->idade, ptr[i]->salario, ptr[i]->estado);
    }
}

void relatorio(Assalariados **ptr, int numAssalariados) {
    int cont = 0, k = 0;
    char est[3][2];
    for(int i = 0; i < numAssalariados; i++) {
        if(ptr[i]->idade >= 40 && ptr[i]->salario >= 1000) {
            if(est[k] == ptr[i]->estado) {
                continue;
            } else {strcpy(est[k], ptr[k]->estado);}
            k++;
            cont++;
        }
    }
    printf("\n%d estados com um total de %d homens maiores de 40 anos e salario acima de 1000.\n", k, cont);
     printf("Os estados sao: ");
    for(int i = 0; i < k; i++) {
        printf("%s ", est[i]);
    }
}