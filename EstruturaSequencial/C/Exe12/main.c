//12. Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main()
{
    double altura,pesoIdeal;

    printf("Digite a sua altura: ");
    scanf("%lf", &altura);

    pesoIdeal = (72.7 * altura) - 58;

    printf("Seu peso ideal é: %.2lf",pesoIdeal);
}