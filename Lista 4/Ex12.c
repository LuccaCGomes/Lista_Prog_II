#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

void removecarac(char *s, char c);

int main(void)
{
    printf("Digite seu texto: ");
    char st[20];

    for(int i = 0; i < 19; i++) {
        st[i] = tolower(getche());

        if(st[i] == '\r') {
            st[i] = '\0';
            break;
        }
    }

    char c;
    printf("\n");
    printf("Qual caracter quer remover?: ");
    scanf("%c", &c);

    removecarac(st, c);

    int k = 0;
    printf("Frase com caracteres removidos: ");
    while(st[k]) {
        printf("%c", st[k]);
        k++;
    }
}

void removecarac(char *s, char c) {
    int escreve = 0, leitor = 0;

    while (s[leitor]) {
        if (s[leitor] != c) {   
            s[escreve] = s[leitor];
            escreve++;
        }
        leitor++;       
    }

    s[escreve] = 0;
}