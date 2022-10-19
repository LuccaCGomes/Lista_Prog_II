#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int seg, min = 0, hor = 0;

    do {
        printf("Digite o valor em segundos: ");
        scanf("%d", &seg);
    } while(seg < 0);

    while(seg >= 60) {
        seg -= 60;
        min++;
    }

    while(min >= 60) {
        min -= 60;
        hor++;
    }

    printf("%d:%d:%d", hor, min, seg);

    return 0;
}