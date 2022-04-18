/*Faça um algoritmo que receba uma temperatura em grau
Celsius, e calcule e mostre essa temperatura em grau
Fahrenheit. Sabe-se que F = (1.8 * C) + 32.*/

#include<stdio.h>

int main (void)
{
    float C, F;

    printf("Informe uma temperatura em Celsius:");
    scanf("%f", &C);

    F = (1.8 + C) + 32;

    printf("\nA temperatura em Fahrenheit eh : %.1f F", F);

    return 0;
}
