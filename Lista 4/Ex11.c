#include <stdio.h>
#include <stdlib.h>

int main(void){
    float vet1[20], vet2[20] ,vet3[20];
    char vetchar[20];
    for(int i = 0; i < 20; i++){
        printf("Digite um numero: ");
        scanf("%f", &vet1[i]);
        printf("Digite uma operacao: ");
        scanf(" %c", &vetchar[i]);
        printf("Digite outro numero: ");
        scanf("%f", &vet2[i]);
    }
    for(int j = 0; j < 20; j++){
        if(vetchar[j] == '+'){
            vet3[j] = (vet1[j] + vet2[j]);
        }else if(vetchar[j] == '-'){
            vet3[j] = (vet1[j] - vet2[j]);
        }else if(vetchar[j] == '*'){
            vet3[j] = (vet1[j] * vet2[j]);
        }else if(vetchar[j] == '/'){
            vet3[j] = (vet1[j] / vet2[j]);
        }else{
            printf("Oprecao errada, brr s2");
        }
    }
    for(int h = 0; h < 20; h++){
        printf("(%.2f %c %.2f = %.3f)", vet1[h], vetchar[h], vet2[h], vet3[h]);
    }
}