#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{   
    // Comentei as partes chave do exercício para mostrar que fiz eu mesmo com meu grupo e evitar uma possível acusação de plágio, já que enviei a solução no grupo para comparar com a solução de outros colegas, e não sei se alguém irá copiá-la.

    int e, i = 0, m = 0, d = 0;

    char string[50], straux[1000] = "";   // Iniciei straux com vazio para evitar que pegasse algum lixo.

    printf("Digite o string: ");
    gets(string);

    while(string[i] != '\0') {
        e = 0;   // A variável "e" precisa ser reiniciado a cada ciclo, já que é o contador da ocorrência das letras.

        for(int k = 0; k <= strlen(string); k++) {   
            if(string[i] == string[k]) { e++; }   // Compara o i-ésimo índice do string com todo o resto do string.

            if(k == strlen(string)) {   // Verifica se k já atingiu o mesmo tamanho do string.
                for(int j = 0; j <= strlen(string); j++) {
                    if(string[i] == straux[j]) { m = 0; break; }   // Se a letra já estiver na string auxiliar, sai do loop, pois a mesma já foi impressa.
                    else { m++; }   // Incrementa m para a verificação da ocorrência da letra no próximo passo.
                }
                
                if(m != 0) {
                    printf(" %c = %d \n", string[i], e);
                    straux[d++] = string[i]; // O índice do string auxiliar deve ser incrementado após a adição da letra nele, pois não existe um loop específico para a contagem do mesmo.
                }                
            }
        }
        i++;
    }

    return 0;
}
