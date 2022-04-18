/*Faça um algoritmo, com a estrutura de controle de fluxo
sequencial, que calcule e mostre a tabuada de 0 a 10 de um
número inteiro digitado pelo usuário.*/

#include<stdio.h>

int main (void)
{

    int a;

    printf("Informe um numero inteiro: ");
    scanf("%d", &a);

    printf("%d * 0 = 0\n%d * 1 = %d\n%d * 2 = %d\n%d * 3 = %d\n%d * 4 = %d\n%d * 5 = %d\n%d * 6 = %d\n%d * 7 = %d\n%d * 8 = %d\n%d * 9 = %d\n%d * 10 = %d\n", a, a, a*1, a, a*2, a, a*3, a, a*4, a, a*5, a, a*6, a, a*7, a, a*8, a, a*9, a, a*10);

    return 0;
}
