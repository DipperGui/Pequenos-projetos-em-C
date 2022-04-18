/*Ler um número inteiro com até 4 dígitos. Separar os dígitos
desse número e mostrá-los em linhas distintas.*/

#include<stdio.h>

int main (void)
{
    int a, b, c, d, e;

    printf("Digite um numero de quatro digitos: ");
    scanf("%d", &a);

        b = a / 1000;

        c = (a % 1000) / 100;

        d = (a % 100) / 10;

        e = a % 10;

        if(a<1000)
            printf("NUMERO INVALIDO, SAO NECESSARIOS\nQUATRO DIGITOS");
    else
        if (a>9999)
            printf("NUMERO INVALIDO, SAO PERMITIDOS\nAPENAS QUATRO DIGITOS");
    else
        printf("  %d\n  %d\n  %d\n  %d", b, c, d, e);

    return 0;
}
