    /*

    Exemplo de STRNCAT():

    int num = 10;
    char resultado[50] = "Essa funcao vai concatenar ";
    printf("String original: %s\n", resultado);
    
    strncat(resultado, "apenas os primeiros x caracteres dados pelo num!", num);
    printf("String apos os 10 primeiros caracteres serem concatenados:\n");
    printf("%s\n", resultado); 

    -------------------------------------------------------------------------------------------------------------------

    Exemplo de STRCPY():

    char fonte[6] = "Teste";
    char destino[50] = "";
    printf("String fonte: %s\n", fonte);
    printf("String destino: %s\n", destino);
    
    strcpy(destino, fonte);
    printf("String destino apos a copia ser realizada: %s", destino);

    -------------------------------------------------------------------------------------------------------------------

    Exemplo de STRCMP():

    char stringA[12] = "Computacao";
    char stringB[12] = "Computador";
    printf("String A: %s\n", stringA);
    printf("String B: %s\n", stringB);
    printf("Valor da primeira comparação: %d\n\n", strcmp(stringA, stringB));

    char stringC[12] = "Teste";
    char stringD[12] = "Teste";
    printf("String C: %s\n", stringC);
    printf("String D: %s\n", stringD);
    printf("Valor da segunda comparação: %d\n\n", strcmp(stringC, stringD));

    
    Essa função retorna valor negativo caso A seja menor que B, retorna valor 0 caso ambas sejam iguais e retorna valor positivo caso A seja maior que B!

    */