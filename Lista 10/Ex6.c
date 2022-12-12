#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int k;
    for (k = 0; k < 10; k++) {
        char arquivo[15];
        FILE *fp;
        sprintf(arquivo, "Teste-%02d.txt", k);
        fp = fopen(arquivo, "w");
        char texto[100];
        sprintf(texto, "Texto do arquivo %02d", k);
        fprintf(fp, "%s", texto);
        fclose(fp);
        if (fp != NULL) {
            fclose(fp);
        } else {
            perror(arquivo);
            exit(EXIT_FAILURE);
        }
    }   
}