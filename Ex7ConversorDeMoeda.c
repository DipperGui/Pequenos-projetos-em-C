/*Escreva um programa que calcule o valor da conversão para dólares de um valor
lido em reais.*/

#include<stdio.h>

int main (void)
{
    float dolar, reais;

    printf("Informe o valor do dolar em real:");
    scanf("%f", &dolar);
    printf("Informe o valor em reais:");
    scanf("%f", &reais);

    printf("%.2f reais equivalem a %.2f dolares", reais, reais/dolar);

    return 0;
}
