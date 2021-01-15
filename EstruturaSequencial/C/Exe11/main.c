//11. Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
//  A. o produto do dobro do primeiro com metade do segundo.
//  B. a soma do triplo do primeiro com o terceiro.
//  C. o terceiro elevado ao cubo.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main()
{
    int Numero1,Numero2,ResultadoA;
    double Numero3,ResultadoB,ResultadoC;

    printf("Digite um numero inteiro: ");
    scanf("%d", &Numero1);
    printf("Digite um numero inteiro: ");
    scanf("%d", &Numero2);

    printf("Digite um numero Real: ");
    scanf("%lf", &Numero3);

    //A
    ResultadoA = (2 * Numero1) * (Numero2 / 2);
    printf("Resultado A: %i \n",ResultadoA);

    //B
    ResultadoB = (3 * Numero1) + Numero3;
    printf("Resultado B: %.2lf \n",ResultadoB);

    //C
    ResultadoC = powl(Numero3,3);
    printf("Resultado C: %.2lf \n",ResultadoC);
}