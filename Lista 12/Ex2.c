#include <stdio.h>
#include <stdlib.h>

int soma_imp(int n, int *vet, int i, int sum){
    if(i == n){
        return 0;
    }
    else{
        if(vet[i] % 2 == 0){
            sum = sum + vet[i];
        }
        return soma_imp(10, *vet, i+1, sum);
    }
}

int main(void)
{
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    int i = 0;
    int result = soma_imp(10, vetor, i, sum);

    printf("%d", result);
}