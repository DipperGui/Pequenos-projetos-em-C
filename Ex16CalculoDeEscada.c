/*Cada degrau de uma escada tem uma altura X.
Faça um programa para ler essa altura e a altura que o usuário deseja alcançar
subindo a escada.
Calcule e mostre quantos degraus o usuário deverá subir para atingir o seu
objetivo.*/
#include<stdio.h>
#include<math.h>

int main (void)
{
    float altura, espelho; //espelho é o nome técnico usado para a altura do degrau
    int degrau;

    printf("Altura que deseja alcancar: ");
    scanf("%f", &altura);
    printf("Altura do degrau: ");
    scanf("%f", &espelho);

    degrau = ceil(altura / espelho);

    printf("Serao necessarios subir %.0d degraus", degrau);

    return 0;
}