/*Fa�a um programa que leia o sal�rio bruto mensal de um funcion�rio, calcule e
mostre os valores conforme o exemplo a seguir.
Observa��o: � poss�vel fazer esse programa utilizando somente tr�s vari�veis:
uma para ler o sal�rio bruto, outra para os descontos e outra para o sal�rio l�quido.*/

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
