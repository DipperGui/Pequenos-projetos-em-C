/*Escreva um algoritmo que leia o raio de um c�rculo e calcule a
sua circunfer�ncia (C = 2*PI*r).*/

#include<stdio.h>

int main (void)
{
    float r, c;

    printf("Informe o raio do circulo:");
    scanf("%f", &r);

    c = 2*r*3.1416;

    printf("\nA circunferencia do circulo eh: %.2f cm", c);

    return 0;
}
