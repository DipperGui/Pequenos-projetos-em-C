/*Criar um programa que leia o peso (em kg) de uma pessoa e calcule e imprima:
a) O peso da pessoa em gramas.
b) O novo peso, em gramas, se a pessoa engordar 12%.*/
#include<stdio.h>

int main (void)
{
    float peso;

    printf("Informe o seu peso (em Kg): ");
    scanf("%f", &peso);

    peso = peso * 1000;

    printf("Peso em gramas: %.2f\n", peso);

    peso = peso + (peso * 0.12);

    printf("Peso em gramas com 12%%: %.2f\n", peso);

    peso = peso / 1000;

    printf("Peso em Kg com 12%%: %.2f", peso);

    return 0;
}