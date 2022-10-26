#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

// O exercício não pôde ser concluído pois a função getch() é um lixo, e buga destruindo os vetores anteriores quando o chama de novo, mas a lógica e a construção estão corretas.

int main(void)
{
    char usuario[8], senha[8], usuarioLogin[8], senhaLogin[8];
    int i, j, k, l;

    printf("Usuario: ");
    for(i = 0; i < 8; i++) {
        usuario[i] = getch();
        
        while(isalpha(usuario[i]) == 0 && isdigit(usuario[i]) == 0) {
            usuario[i] = getch();
        }

        printf("%c", usuario[i]);
    }
    usuario[i] = '\0';

    printf("\nSenha: ");
    for(j = 0; j < 8; j++) {
        senha[j] = getch();
        
        while(isalpha(senha[j]) == 0 && isdigit(senha[j]) == 0) {
            senha[j] = getch();
        }

        printf("*");
    }
    senha[j] = '\0';

    printf("\nCadastrado!\n");
    printf("------------------\n");
    
    printf("Usuario para Login: ");
    for(k = 0; k < 8; k++) {
        usuarioLogin[k] = getch();
        
        while(isalpha(usuarioLogin[k]) == 0 && isdigit(usuarioLogin[k]) == 0) {
            usuarioLogin[k] = getch();
        }

        printf("%c", usuarioLogin[k]);
    }
    usuarioLogin[k] = '\0';

    printf("\nSenha para Login: ");
    for(l = 0; l < 8; l++) {
        senhaLogin[l] = getch();
        
        while(isalpha(senhaLogin[l]) == 0 && isdigit(senhaLogin[l]) == 0) {
            senhaLogin[l] = getch();
        }

        printf("*");
    }
    senhaLogin[l] = '\0';
    
    int contador1 = 0, contador2 = 0;

    for(int c = 0; c < 8; c++) {
        if(senha[c] == senhaLogin[c]) {
            contador1++;
        }
        
        if(usuario[c] == usuarioLogin[c]) {
            contador2++;
        }
    }

    if(contador1 == strlen(senha) && contador2 == strlen(usuario)) { printf("\nOK!\n"); } 
    else { printf("\nAcesso negado!\n"); }
}   