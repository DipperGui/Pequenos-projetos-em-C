/*O que faz o algoritmo representado no fluxograma abaixo? Implemente-o
utilizando a linguagem C.*/

#include<stdio.h>

int main (void)
{
    float sal, per, salAJ;

    printf("Informe o valor liquido do salario:");
    scanf("%f", &sal);
    printf("Informe o percentual de reajuste:");
    scanf("%f", &per);

    salAJ = sal + (sal * per) / 100;

    printf("O salario ajustado eh: %.2f reais", salAJ);

    return 0;
}
