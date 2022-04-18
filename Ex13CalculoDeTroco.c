/*Suponha que um caixa disponha apenas de cédulas de R$ 100, R$ 10 e R$ 1.
Escreva um programa para ler o valor de uma compra e o valor fornecido pelo
usuário para pagar essa compra, e calcule o troco.*/
#include<stdio.h>

int main (void)
{
    int custo, dinheiro, troco, cd100, cd10, cd1;

    printf("Informe o valor da compra: ");
    scanf("%d", &custo);
    printf("Informe o valor pago: ");
    scanf("%d", &dinheiro);

    troco = dinheiro - custo;

            cd100 = troco / 100;

            cd10 = (troco / 10) - (cd100 * 10);

            cd1 = troco % 10;

    if(troco>0)
        printf("O troco de %d reais foi pago com:\n%d notas(s) de 100 reais\n%d nota(s) de 10 reais\n%d nota(s) de 1 real", troco, cd100, cd10, cd1);
    else
        printf("Valor nao suficiente para pagar a compra");

    
    return 0;
}