#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char* cifra_cesar(char* msg);

int main(void){
    char frase[1001];
    for (int i=0;i<1001;i++){
        
        frase[i]=getch();
        if (frase[i]=='\r'){
            frase[i]='\0';
            break;
        }

    }
    char *aux;
    aux=cifra_cesar(frase);
    printf("frase original: \n");
    printf("%s\n",frase);
    printf("frase cifrada: \n");
    printf("%s",aux);
    
    

}
char* cifra_cesar(char* msg){
    int n=strlen(msg);
    char *aux;
    aux=(char *)malloc(n * sizeof(char));
    if (aux==NULL){printf("Nao foi possivel alocar");return 1;}
    for (int i=0;i<n+1;i++){
        if (msg[i]>='a' && msg[i]<='w' || msg[i]>='A'&&msg[i]<='W'){
            aux[i]=msg[i]+3;
        }
        else if(msg[i]=='x'||msg[i]=='y'||msg[i]=='z'||msg[i]=='X'||msg[i]=='Y'||msg[i]=='Z'){
            aux[i]=msg[i]-23;
        }
        else if(msg[i]=='\0'){
            aux[i]='\0';
        }
        else
        {
            aux[i]=msg[i];
        }
    }
    return aux;
}