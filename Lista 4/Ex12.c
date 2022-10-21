#include <stdio.h>
#include <stdlib.h>

void removecarac(char *s, char c);

int main(void)
{
    printf("digite seu texto: \n");
    char st[20];

    for(int i = 0; i < 19; i++) {
        st[i] = getche();

        if(st[i] == '\r') {
            st[i] = '\0';
            break;
        }
    }

    char c;
    printf("\n");
    printf("qual caracter quer remover?: \n");
    scanf("%c",&c);

    removecarac(st, c);

    int k = 0;
    printf("Frase com caracteres removidos: \n");
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