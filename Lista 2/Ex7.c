#include <stdio.h>
#include <stdlib.h>

float calculaSalario(int a, float b);

int main(void)
{
    int hor;
    float sal;
    
    printf("Digite o numero de horas trabalhadas na semana: ");
    scanf("%d", &hor);
    
    printf("Digite quanto recebera por hora: ");
    scanf("%f", &sal);

    calculaSalario(hor, sal);
    
    return 0;
}

float calculaSalario(int a, float b) {
    float totalSem, totalMes, bonus = 0;

    if(a <= 40) {
        totalSem = (float) a * b;
        totalMes = totalSem * 4;
        printf("O bario sera de %.2f por semana e %.2f por mes", totalSem, totalMes);
    } else if(a > 40 && a <= 60) {
        bonus = (float) (a * b) * 0.5;
        totalSem = (float) (a * b) + bonus;
        totalMes = totalSem * 4;
        printf("O bario sera de %.2f por semana e %.2f por mes", totalSem, totalMes);
    } else {
        totalSem = (float) a * b * 2;
        totalMes = totalSem * 4;
        printf("O salario sera de %.2f por semana e %.2f por mes", totalSem, totalMes);
    }
}