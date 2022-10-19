#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float a, b, c;

    printf("Digite o valor de a, b e c, nesta ordem: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    float x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    float x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

    printf("As raízes da função podem ser X' = %.3f ou X'' = %.3f", x1, x2); 


    return 0;    
}