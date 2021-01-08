//6. Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI 3.14159265359;

int main()
{

    double raio, area;

    printf("Digite o Raio do Circulo para calculo de sua area: ");
    scanf("%lf",&raio);

    area = pow(raio,2) * PI;

    printf("Area: %.2lf",area);

    return 0;
}