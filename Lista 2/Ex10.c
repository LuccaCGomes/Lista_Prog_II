#include <stdio.h>
#include <stdlib.h>

int mdc(int x, int y);

int main(void)
{
    int x, y, resp;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    resp = mdc(x, y);
    printf("O MDC de %d e de %d e %d\n", x, y, resp);
    return 0;
}

int mdc(int x, int y) {
    if(x % y == 0) {
        return y;
    } else {
        return mdc(y, (x % y));
    }
}