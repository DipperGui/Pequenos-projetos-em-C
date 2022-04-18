/*Ler dois números float e apresentar, sem utilizar funções matemáticas prontas:
a) A divisão do primeiro número pelo segundo, armazenando somente a parte
inteira do número.
b) A soma dos dois números com o resultado arredondado para o próximo número
inteiro.
Obs.: As variáveis de resultados devem ser do tipo int.*/

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
