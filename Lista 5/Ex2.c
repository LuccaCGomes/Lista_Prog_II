#include<stdio.h>
#include<string.h>

main(void)
{
    char texto[]= "foi muito facil";   // Inicia o string
    int i;   // Inicia inteiro i, sem valor

    for (i = 0; texto[i] != '\0'; i++) {   // Para i = 0, enquanto o índice for diferente de '\0', i++
        if (texto[i] == ' ')   // Se o índice for um espaço em branco, sai do loop
            break;
    }

    i++;   // Incrementa i, neste momento, i possui o valor 3
    
    for ( ; texto[i] != '\0'; i++) {   // Mantém o valor de i, enquanto o índice for diferente de '\0', i++
        printf("%c", texto[i]);   // O código pulou os 4 primeiros índices do vetor, sobrando apenas "muito facil" para imprimir na tela, pois irá iniciar o print em texto[4].
    }
}