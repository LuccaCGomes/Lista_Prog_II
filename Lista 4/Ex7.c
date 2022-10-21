#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void CamelCase(char *s);

int main(void)
{
    printf("digite seu texto: \n");
    char st[20];

    for(int i = 0; i < 19; i++) {
        st[i] = tolower(getche());

        if(st[i] == '\r') {
            st[i] = '\0';
            break;
        }
    }

    printf("\n");
    CamelCase(st);

    int k = 0;
    while (st[k]) {
        printf("%c",st[k]);
        k++;
    }
    
}

void CamelCase(char *s) {
        int escreve = 0, leitor = 0;
        s[0] -= 32;

    while (s[leitor])
    {
        if (s[leitor] != ' ') {   
            s[escreve] = s[leitor];
            escreve++;
            
        } else if (s[leitor] == ' ') {
            s[escreve] = s[leitor];
            escreve++;
            s[leitor+1]-=32;
        }

        leitor++;       
    }

    s[escreve] = '\0';

    int l = 0;
    int e = 0;

    while (s[l]) {
        if (s[l] != ' ') {   
            s[e] = s[l];
            e++;  
        }
        l++;
    }
    s[e] = '\0';
}
