/*Ler um número que representa a quantidade de dias. Informe os anos
(considere-os com 360 dias), meses (considere-os com 30 dias) e os dias contidos
nesse valor.*/
#include<stdio.h>

int main (void)
{
    int entrada, dias, mes, ano;

    printf("Informe a quantidade de dias: ");
    scanf("%d", &entrada);

    ano = entrada / 360;

    mes = entrada / 30 - ano * 12;

    dias = entrada % 30;

    printf("%d dias equivalem a %d ano(s), %d mes(ses) e %d dia(s)", entrada, ano, mes, dias);

    return 0;
}