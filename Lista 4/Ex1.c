#include <stdio.h>
#include <stdlib.h>
int main(void){
    int lista1[10];
    
    for (int i=0;i<10;i++){
        printf("digite o %d termo: ",i+1);
        scanf("%d", &lista1[i]);

    }
    int lista2[10];
    for (int i=0;i<10;i++){
        int j=9-i;
        lista2[j]=lista1[i];
    }
    for (int h=0;h<10;h++){
        printf("%d ",lista2[h]);
    }

}