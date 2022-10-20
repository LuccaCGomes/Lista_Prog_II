#include <stdio.h>
#include <conio.h>

int main() {
    char vetor[80];

    for(int i = 0; i < 79; i++) {
        vetor[i] = getch();
        if(vetor[i] == '\r') {
            vetor[i] = '\0';
            break;
        }
    }

    for(int j = 0; j < 79; j++) {
        if(vetor[j] == ' '){
            printf("\n");
        }else if(vetor[j] == '\0') {
            break;
        }else {
            printf("%c", vetor[j]);
        }
    }
}