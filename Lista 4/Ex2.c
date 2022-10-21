#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int R[] = {1,1,2,3,4};
    int S[] = {1,1,3,5,7,4,8,2,9,7};
    int Aux;
    int X[10];
    int aux = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            if(R[i] == S[j]){
                
                X[aux] = R[i];
                aux++;              
            }
        }
    }
    for(int h = 0; h < 10; h++){
        printf(" %d", X[h]);
    }
}