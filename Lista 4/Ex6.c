#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int valida_mail(char *s);

int main(void)
{
    // Recebe o email para verifcação com tamanho máximo de 64 caracteres:
    printf("Digite um e-mail para ser verificado: \n");

    char email[64];
    for(int i = 0; i < 63; i++) {
        email[i] = getche();

        if(email[i] == '\r') {
            email[i] = '\0';
            break;
        }
    }

    printf("\n");

    valida_mail(email);
}

int valida_mail(char *s) {
    // Verifica se o email possui espaços em branco:
    for(int i = 0; i < strlen(s) - 13; i++) {
        if(s[i] == ' ') {
            return printf("Email invalido, pois contem espacos em branco!\n");
        }
    }

    // Verifica se contém dois ou mais caracteres:
    if(strlen(s) - 13 < 1) {
        return printf("Email invalido, contem menos de 2 caracteres!\n");
    }

    // Verifica se contém apenas letras de 'a' até 'z' minúsculas e números de 0 a 9, pontos, hífens e sublinhado:
    for(int i = 0; i < strlen(s) - 13; i++) {
        if(s[i] < 97 || s[i] > 122) {
            if(s[i] != 46) {
                if(s[i] != 45) {
                    if(s[i] != 95) {
                        return printf("Email Invalido!\n");
                    }
                }
            }
        }
    }

    // Verifica se o email possui dois caracteres '.' seguidos:
    for(int i = 0; i < strlen(s) - 13; i++) {
        if(s[i] == 46) {
            if(s[i+1] == 46) {
                return printf("Email invalido, nao pode conter dois ou mais '.' seguidos!\n");
            }
        }
    }

    // Verifica se o último caractere é um '.':
    if(s[strlen(s) - 13] == 46) {
        return printf("Email invalido, o ultimo caractere antes do @ e um '.'!\n");
    }

    // Verifica se o primeiro caracter é uma letra:
    if(s[0] <= 97 || s[0] >= 122) {
        return printf("Email invalido, o primeiro caracter nao e uma letra!\n");
    }

    return printf("Email valido!\n");
}