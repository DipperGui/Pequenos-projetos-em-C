/*Ler dois n�meros float e apresentar, sem utilizar fun��es matem�ticas prontas:
a) A divis�o do primeiro n�mero pelo segundo, armazenando somente a parte
inteira do n�mero.
b) A soma dos dois n�meros com o resultado arredondado para o pr�ximo n�mero
inteiro.
Obs.: As vari�veis de resultados devem ser do tipo int.*/

#include<stdio.h>
#include<math.h>

int main (void)
{
    float val1, val2;
    int res1, res2;

    printf("Informe um valor:");
    scanf("%f", &val1);
    printf("Informe outro valor:");
    scanf("%f", &val2);

    res1 = floor(val1 / val2);

    res2 = ceil (val1 + val2);

    printf("%f / %f = %d\n", val1, val2, res1);
    printf("%f + %f = %d", val1, val2, res2);

    return 0;
}
