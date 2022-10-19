#include <stdio.h>

int main() 
{
    int i=5, *p;
    p = &i;
    printf("%x %d %d \n", p, *p+2, 3**p);
}

/* RESPOSTAS:
        Tem que aparecer 4094 em hexadecimal, logo depois 7 e logo depois 15!
*/