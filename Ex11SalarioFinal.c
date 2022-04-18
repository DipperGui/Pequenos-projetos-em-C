/*Escreva um programa que o leia o número de horas trabalhadas por um
funcionário, o valor por hora, o número de filhos com idade menor do que 14 anos,
o valor do salário família por filho e calcule e mostre o salário desse funcionário.*/

#include<stdio.h>

int main (void)
{
    float horas, valorH, filhos, salF, sal;

    printf("Informe o numero de horas trabalhadas:\n");
    scanf("%f", &horas);
    printf("Informe o valor da hora trabalhada:\n");
    scanf("%f", &valorH);
    printf("Informe o numero de filhos menores de 14 anos:\n");
    scanf("%f", &filhos);
    printf("Informe o valor do salario família:");
    scanf("%f", &salF);

    sal = (horas * valorH) + (filhos * salF);

    printf("Salario: %.2f reais", sal);

    return 0;
}
