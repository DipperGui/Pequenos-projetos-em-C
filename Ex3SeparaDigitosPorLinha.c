/*Ler um n�mero inteiro com at� 4 d�gitos. Separar os d�gitos
desse n�mero e mostr�-los em linhas distintas.*/

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
