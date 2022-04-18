/*Faça um programa para calcular a quantidade de fita necessária, em centímetros,
para amarrar um pacote com duas voltas, sendo uma pela largura e outra pelo
comprimento do pacote.
Serão fornecidas a largura, a altura e o comprimento do pacote.
Para amarrar as pontas da fita são necessários 15 cm de fita em cada ponta.*/
#include<stdio.h>

int main (void)
{
    float altura, largura, comprimento, fita;

    printf("Informe o largura da caixa: ");
    scanf("%f", &largura);
    printf("Informe a altura da caixa: ");
    scanf("%f", &altura);
    printf("Informe o comprimento da caixa: ");
    scanf("%f", &comprimento);

    fita = (2*comprimento) + (2*largura) + (4*altura) + 30;

    printf("Serao necessarios %.2f cm de fita para fazer o embrulho", fita);
}