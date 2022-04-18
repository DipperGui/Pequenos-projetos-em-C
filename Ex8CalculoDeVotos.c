/*Escreva um programa para ler o número de votos brancos, nulos (incluem
eleitores ausentes) e válidos de uma eleição.
Calcular e mostrar o percentual que cada um (brancos, nulos e válidos) representa
em relação ao total de eleitores.
Lembrar que os valores dos percentuais podem não ser inteiros.*/

#include<stdio.h>

int main (void)
{
    int votoV, votoB, votoN;
    float pcV, pcB, pcN;

    printf("Informe o numero de votos validos:");
    scanf("%d", &votoV);
    printf("Informe o numero de votos em branco:");
    scanf("%d", &votoB);
    printf("Informe o numero de votos nulos:");
    scanf("%d", &votoN);

    pcV = (float)votoV / (votoV + votoB + votoN) * 100;

    pcB = (float)votoB / (votoV + votoB + votoN) * 100;

    pcN = (float)votoN / (votoV + votoB + votoN) * 100;

    printf("Numero de votos validos: %.1f%%\n", pcV);
    printf("Numero de votos em branco: %.1f%%\n", pcB);
    printf("Numero de votos nulos: %.1f%%", pcN);

    return 0;
}
