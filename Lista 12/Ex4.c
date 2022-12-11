#include <stdio.h>

int conversao_binaria(int n, int *vetor_binario, int tamanho, int tamanho_fixo);

int main(void)
{
    int n; // numero a ser convertido em binário
    printf("Insira um valor inteiro decimal para ser convertido em binario: "); // perguntaao usuário
    scanf("%d", &n); // leitura do numero a ser convertido em binário
    int indice, tamanho, tamanho_fixo, numero_binario;

    tamanho = 0; // zerando o tamanho do vetor
    for(indice = n; indice > 0; ) {
        indice /= 2; // laço para especificar o tamanho do vetor
        tamanho++;
    }

    tamanho_fixo = tamanho; // usado na função recursiva
    int *vetor_binario; // vetor com o tamanho encontrado anteriormente nolaço
    vetor_binario = (int *) malloc(tamanho * sizeof(int));
    tamanho -= 1; // decrementa o tamanho para ser usado nessa forma nafunção
    numero_binario = conversao_binaria(n, vetor_binario, tamanho, tamanho_fixo); //a função retornará um inteiro formatado como um "binário"
    printf("\nO numero digitado em binario e: %d", numero_binario);
    getch();
    return 0;
}

int conversao_binaria(int n, int *vetor_binario, int tamanho, int tamanho_fixo) { 
    // o "tamanho_fixo" é usado somente na última chamada da função no vetor_binário
    vetor_binario = (n % 2); // as últimas posições do vetor receberão o resto dessa divisão
    n /= 2; // o "n" precisa ser divido para continuar os próximos cálculos corretamente
    if(tamanho > 0) { // esse "if" é usado em todas as funções recursivas exceto a últimachamada quando o tamamho for igual a zero
        tamanho--; // a função a ser chamada receberá um tamanho decrementado
        return conversao_binaria(n, vetor_binario, tamanho, tamanho_fixo); // chamaa função recursivamente com tamanho decrementado
    }
    if(tamanho == 0) { // apenas na última chamada será feito isso
        int indice, binario; // binário será para armazenar os valores convertidos embinário e valor de retorno
        binario = 0;
        for(indice = 0; indice < tamanho_fixo; indice++) {
            if(indice == 0) {
                if(vetor_binario[indice] == 0) { // se o vetor tem o valor zero
                    binario = 0;
                }
                else { // se o vetor tem o valor 1
                    binario = 1;
                }
            }
            else {
                if(vetor_binario[indice] == 0) { // se o valor de tal posição (indice) do vetor for igual a zero, então acrescenta um zero ao valor de binário
                    binario *= 10;
                }
                else {
                    binario = (binario * 10) + 1; // se o valor de tal posição (indice)for igual a 1, então acrescenta um "1" ao valor de binário
                }
            }
        }
    return binario;
    }
}

/* Primeiro teste. Exemplo 1:
 Entrada: 512
 Saída: O numero digitado em binario e': 1000000000

 Isso pois 2^9 = 512.
*/


/* Segundo teste. Exemplo 2:
 Entrada: 1023
 Saída: O numero digitado em binario e': 1111111111

 1023 é o último número que da pra ser representado em binário por esse programa
*/


/* Terceiro teste. Exemplo 3:
 Entrada: 1023
 Saída: O numero digitado em binario e': 1410065408

 O certo seria: O numero digitado em binario e': 10000000000

 Isso pois 2^10 = 1024.
*/