//13. Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
//Para homens: (72.7*h) - 58
//Para mulheres: (62.1*h) - 44.7

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main()
{
    double altura,pesoIdealH, pesoIdealM;

    printf("Digite a sua altura: ");
    scanf("%lf", &altura);

    pesoIdealH = (72.7* altura) - 58;
    pesoIdealM = (62.1* altura) - 44.7;

    printf("De acordo com essa altura o peso ideial é: \nHomens: %.2lf \nMulheres: %.2lf",pesoIdealH, pesoIdealM);
}