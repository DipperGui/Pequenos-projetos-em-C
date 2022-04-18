/*Faça um programa que leia o salário bruto mensal de um funcionário, calcule e
mostre os valores conforme o exemplo a seguir.
Observação: É possível fazer esse programa utilizando somente três variáveis:
uma para ler o salário bruto, outra para os descontos e outra para o salário líquido.*/

#include<stdio.h>

int main (void)
{
    float sal;

    printf("Salario bruto:");
    scanf("%f", &sal);

    printf("(-) IR(15%%): %.2f reais\n(-) INSS (11%%): %.2f reais\n(-) Sindicato (3%%): %.2f reais\n", sal*0.15, sal*0.11, sal*0.03);

    sal = sal - (sal*0.15) - (sal*0.11) - (sal*0.03);

    printf("Salario Liquido: %.2f reais", sal);

   return 0;
}
