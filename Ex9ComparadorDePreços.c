/*Faça um programa que leia o preço de uma mercadoria com diferença de um mês
(ler o valor da mercadoria no mês passado e no mês atual) e calcule a taxa de
inflação mensal dessa mercadoria.
A inflação é o percentual da diferença de preços (atual menos o anterior) sobre o
preço anterior.*/

#include<stdio.h>

int main (void)
{
    float pcA, pcB, inf;

    printf("Informe o preço da mercadoria no mes passado:");
    scanf("%f", &pcA);
    printf("Informe o preço da mercadoria no mes atual:");
    scanf("%f", &pcB);

    inf = (pcB-pcA) / pcA * 100;

    printf("A taxa de inflaçao da mercadoria foi de: %.1f%%", inf);

    return 0;
}
