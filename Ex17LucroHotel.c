/*Um hotel deseja fazer uma promoção especial de final de semana, concedendo um
desconto de 25% na diária.
Sendo informados o número de apartamentos do hotel e o valor da diária por
apartamento para o final de semana completo.
Elaborar um programa para calcular:
a) Valor promocional da diária;
b) Valor total caso a ocupação no final de semana atinja 100%;
c) Valor total a ser arrecadado caso a ocupação no final de semana atinja 70%;
d) Valor que o hotel deixará de arrecadar em virtude da promoção, caso a
ocupação atinja 100%*/
#include<stdio.h>

int main (void)
{
    float diaria, apt;

    printf("Informe o valor da diaria: ");
    scanf("%f", &diaria);
    printf("Informe a quantidade de apartamentos: ");
    scanf("%f", &apt);

    printf("O valor da diaria promocional: %.2f reais\n", diaria - (diaria*0.25));
    printf("O total arrecadado com 100%% de ocupacao: %.2f reais\n", (diaria - diaria*0.25) * apt * 2);
    printf("O total arrecadado com 70%% de ocupacao: %.2f reais\n", (diaria - diaria*0.25) * floor(apt*0.7) * 2);
    printf("O valor que deixaria de arrecadar ao aplicar o desconto: %.2f reais", (diaria * apt * 2)-(diaria - diaria*0.25) * apt * 2);

    return 0;
}