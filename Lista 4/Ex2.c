#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    char s[10], r[5], x[5] = "";

    printf("Digite os valores de S: ");
    for(int i = 0; i < 10; i++) {
        if(i == 10) {
            s[i] = '\0';
        }
        s[i] = getche();
    }

    printf("\nDigite os valores de R: ");
    for(int i = 0; i < 5; i++) {
        if(i == 5) {
            r[i] = '\0';
        }
        r[i] = getche();
    }

    int c = 0, z = 0;

    while(z < 5) {
        for(int j = 0; j < 5; j++) {
            if(r[z] == x[j]){
                z++;
            }
        } 
        
        for(int i = 0; i < 10; i++) {
            if(r[z] == s[i]){
                x[c] = r[z];
                c++;
                break;
            }
        }

        z++;
    }
    
    printf("\nX = { ");
    for(int j = 0; j < 5; j++) {
        printf("%c ", x[j]);
    }
    printf("}");
}